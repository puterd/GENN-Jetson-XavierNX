# GENN-Jetson-XavierNX
Configuring the Nvidia Jetson Xavier NX for running GENN (https://genn-team.github.io/genn/documentation/4/html/d0/da6/UserGuide.html)

Jet-pack 5 without modification 
Cuda 11.4. 
Cuda toolkit etc.


# GENN
sudo apt-get update 
sudo apt-get full-upgrade

sudo apt-get install swig

git clone https://github.com/genn-team/genn.git

export PATH=$PATH:$HOME/GeNN/bin

echo "export PATH=$PATH:$CUDA_PATH/bin" >> ~/.bash_profile

export CUDA_PATH=/usr/local/cuda

# PyGENN

sudo make DYNAMIC=1 LIBRARY_DIRECTORY=`pwd`/pygenn/genn_wrapper/

python setup.py develop (might need sudo)
