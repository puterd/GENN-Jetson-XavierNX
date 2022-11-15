# GENN-Jetson-XavierNX
Configuring the Nvidia Jetson Xavier NX for running GENN & PyGENN (https://genn-team.github.io/genn/documentation/4/html/index.html)

JP SD 5.0.2 without modifications:
Cuda 11.4., Cuda toolkit etc.

Flashed from url using balenaEtcher (https://developer.nvidia.com/embedded/L4T/r35_Release_v1.0/JP_SD_5.0.2_b231/Jetson_SD_Xavier_NX/JP502-xnx-sd-card-image-b231.zip)

# GENN
sudo apt-get update -y

sudo apt-get install swig

git clone https://github.com/genn-team/genn.git

cd genn

export PATH=$PATH:$HOME/GeNN/bin

echo "export PATH=$PATH:$CUDA_PATH/bin" >> ~/.bash_profile

export CUDA_PATH=/usr/local/cuda

# PyGENN

sudo make DYNAMIC=1 LIBRARY_DIRECTORY=`pwd`/pygenn/genn_wrapper/

python setup.py develop (might need sudo)
