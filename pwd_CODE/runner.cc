#include "definitionsInternal.h"


extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
unsigned long long iT;
float t;
unsigned long long numRecordingTimesteps = 0;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
double initTime = 0.0;
double initSparseTime = 0.0;
double neuronUpdateTime = 0.0;
double presynapticUpdateTime = 0.0;
double postsynapticUpdateTime = 0.0;
double synapseDynamicsTime = 0.0;
// ------------------------------------------------------------------------
// merged group arrays
// ------------------------------------------------------------------------
// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
unsigned int* glbSpkCntneuron0;
unsigned int* glbSpkneuron0;
uint32_t* recordSpkneuron0;
scalar* Vneuron0;
// current source variables
scalar* magnitudecurrent_input;
unsigned int* glbSpkCntneuron1;
unsigned int* glbSpkneuron1;
uint32_t* recordSpkneuron1;
scalar* Vneuron1;
unsigned int* glbSpkCntneuron2;
unsigned int* glbSpkneuron2;
uint32_t* recordSpkneuron2;
scalar* Vneuron2;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// pre and postsynaptic variables
// ------------------------------------------------------------------------
float* inSynsynapse_0_1;
float* inSynsynapse_1_2;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
scalar* gsynapse_0_1;
scalar* gsynapse_1_2;

}  // extern "C"
// ------------------------------------------------------------------------
// extra global params
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// copying things to device
// ------------------------------------------------------------------------
void pushneuron0SpikesToDevice(bool uninitialisedOnly) {
}

void pushneuron0CurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushVneuron0ToDevice(bool uninitialisedOnly) {
}

void pushCurrentVneuron0ToDevice(bool uninitialisedOnly) {
}

void pushneuron0StateToDevice(bool uninitialisedOnly) {
    pushVneuron0ToDevice(uninitialisedOnly);
}

void pushmagnitudecurrent_inputToDevice(bool uninitialisedOnly) {
}

void pushcurrent_inputStateToDevice(bool uninitialisedOnly) {
    pushmagnitudecurrent_inputToDevice(uninitialisedOnly);
}

void pushneuron1SpikesToDevice(bool uninitialisedOnly) {
}

void pushneuron1CurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushVneuron1ToDevice(bool uninitialisedOnly) {
}

void pushCurrentVneuron1ToDevice(bool uninitialisedOnly) {
}

void pushneuron1StateToDevice(bool uninitialisedOnly) {
    pushVneuron1ToDevice(uninitialisedOnly);
}

void pushneuron2SpikesToDevice(bool uninitialisedOnly) {
}

void pushneuron2CurrentSpikesToDevice(bool uninitialisedOnly) {
}

void pushVneuron2ToDevice(bool uninitialisedOnly) {
}

void pushCurrentVneuron2ToDevice(bool uninitialisedOnly) {
}

void pushneuron2StateToDevice(bool uninitialisedOnly) {
    pushVneuron2ToDevice(uninitialisedOnly);
}

void pushgsynapse_0_1ToDevice(bool uninitialisedOnly) {
}

void pushinSynsynapse_0_1ToDevice(bool uninitialisedOnly) {
}

void pushsynapse_0_1StateToDevice(bool uninitialisedOnly) {
    pushgsynapse_0_1ToDevice(uninitialisedOnly);
    pushinSynsynapse_0_1ToDevice(uninitialisedOnly);
}

void pushgsynapse_1_2ToDevice(bool uninitialisedOnly) {
}

void pushinSynsynapse_1_2ToDevice(bool uninitialisedOnly) {
}

void pushsynapse_1_2StateToDevice(bool uninitialisedOnly) {
    pushgsynapse_1_2ToDevice(uninitialisedOnly);
    pushinSynsynapse_1_2ToDevice(uninitialisedOnly);
}


// ------------------------------------------------------------------------
// copying things from device
// ------------------------------------------------------------------------
void pullneuron0SpikesFromDevice() {
}

void pullneuron0CurrentSpikesFromDevice() {
}

void pullVneuron0FromDevice() {
}

void pullCurrentVneuron0FromDevice() {
}

void pullneuron0StateFromDevice() {
    pullVneuron0FromDevice();
}

void pullmagnitudecurrent_inputFromDevice() {
}

void pullcurrent_inputStateFromDevice() {
    pullmagnitudecurrent_inputFromDevice();
}

void pullneuron1SpikesFromDevice() {
}

void pullneuron1CurrentSpikesFromDevice() {
}

void pullVneuron1FromDevice() {
}

void pullCurrentVneuron1FromDevice() {
}

void pullneuron1StateFromDevice() {
    pullVneuron1FromDevice();
}

void pullneuron2SpikesFromDevice() {
}

void pullneuron2CurrentSpikesFromDevice() {
}

void pullVneuron2FromDevice() {
}

void pullCurrentVneuron2FromDevice() {
}

void pullneuron2StateFromDevice() {
    pullVneuron2FromDevice();
}

void pullgsynapse_0_1FromDevice() {
}

void pullinSynsynapse_0_1FromDevice() {
}

void pullsynapse_0_1StateFromDevice() {
    pullgsynapse_0_1FromDevice();
    pullinSynsynapse_0_1FromDevice();
}

void pullgsynapse_1_2FromDevice() {
}

void pullinSynsynapse_1_2FromDevice() {
}

void pullsynapse_1_2StateFromDevice() {
    pullgsynapse_1_2FromDevice();
    pullinSynsynapse_1_2FromDevice();
}


// ------------------------------------------------------------------------
// helper getter functions
// ------------------------------------------------------------------------
unsigned int* getneuron0CurrentSpikes(unsigned int batch) {
    return (glbSpkneuron0);
}

unsigned int& getneuron0CurrentSpikeCount(unsigned int batch) {
    return glbSpkCntneuron0[0];
}

scalar* getCurrentVneuron0(unsigned int batch) {
    return Vneuron0;
}

unsigned int* getneuron1CurrentSpikes(unsigned int batch) {
    return (glbSpkneuron1);
}

unsigned int& getneuron1CurrentSpikeCount(unsigned int batch) {
    return glbSpkCntneuron1[0];
}

scalar* getCurrentVneuron1(unsigned int batch) {
    return Vneuron1;
}

unsigned int* getneuron2CurrentSpikes(unsigned int batch) {
    return (glbSpkneuron2);
}

unsigned int& getneuron2CurrentSpikeCount(unsigned int batch) {
    return glbSpkCntneuron2[0];
}

scalar* getCurrentVneuron2(unsigned int batch) {
    return Vneuron2;
}


void copyStateToDevice(bool uninitialisedOnly) {
    pushneuron0StateToDevice(uninitialisedOnly);
    pushcurrent_inputStateToDevice(uninitialisedOnly);
    pushneuron1StateToDevice(uninitialisedOnly);
    pushneuron2StateToDevice(uninitialisedOnly);
    pushsynapse_0_1StateToDevice(uninitialisedOnly);
    pushsynapse_1_2StateToDevice(uninitialisedOnly);
}

void copyConnectivityToDevice(bool uninitialisedOnly) {
}

void copyStateFromDevice() {
    pullneuron0StateFromDevice();
    pullcurrent_inputStateFromDevice();
    pullneuron1StateFromDevice();
    pullneuron2StateFromDevice();
    pullsynapse_0_1StateFromDevice();
    pullsynapse_1_2StateFromDevice();
}

void copyCurrentSpikesFromDevice() {
    pullneuron0CurrentSpikesFromDevice();
    pullneuron1CurrentSpikesFromDevice();
    pullneuron2CurrentSpikesFromDevice();
}

void copyCurrentSpikeEventsFromDevice() {
}

void allocateRecordingBuffers(unsigned int timesteps) {
    numRecordingTimesteps = timesteps;
     {
        const unsigned int numWords = 25 * timesteps;
         {
            recordSpkneuron0 = new uint32_t[numWords];
            pushMergedNeuronUpdate1recordSpkToDevice(0, recordSpkneuron0);
        }
    }
     {
        const unsigned int numWords = 4 * timesteps;
         {
            recordSpkneuron1 = new uint32_t[numWords];
            pushMergedNeuronUpdate0recordSpkToDevice(0, recordSpkneuron1);
        }
    }
     {
        const unsigned int numWords = 1 * timesteps;
         {
            recordSpkneuron2 = new uint32_t[numWords];
            pushMergedNeuronUpdate0recordSpkToDevice(1, recordSpkneuron2);
        }
    }
}

void pullRecordingBuffersFromDevice() {
    if(numRecordingTimesteps == 0) {
        throw std::runtime_error("Recording buffer not allocated - cannot pull from device");
    }
     {
        const unsigned int numWords = 25 * numRecordingTimesteps;
         {
        }
    }
     {
        const unsigned int numWords = 4 * numRecordingTimesteps;
         {
        }
    }
     {
        const unsigned int numWords = 1 * numRecordingTimesteps;
         {
        }
    }
}

void allocateMem() {
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    glbSpkCntneuron0 = new unsigned int[1];
    glbSpkneuron0 = new unsigned int[784];
    Vneuron0 = new scalar[784];
    // current source variables
    magnitudecurrent_input = new scalar[784];
    glbSpkCntneuron1 = new unsigned int[1];
    glbSpkneuron1 = new unsigned int[128];
    Vneuron1 = new scalar[128];
    glbSpkCntneuron2 = new unsigned int[1];
    glbSpkneuron2 = new unsigned int[10];
    Vneuron2 = new scalar[10];
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // pre and postsynaptic variables
    // ------------------------------------------------------------------------
    inSynsynapse_0_1 = new float[128];
    inSynsynapse_1_2 = new float[10];
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    gsynapse_0_1 = new scalar[100352];
    gsynapse_1_2 = new scalar[1280];
    
    pushMergedNeuronInitGroup0ToDevice(0, glbSpkCntneuron1, glbSpkneuron1, Vneuron1, inSynsynapse_0_1, 128);
    pushMergedNeuronInitGroup0ToDevice(1, glbSpkCntneuron2, glbSpkneuron2, Vneuron2, inSynsynapse_1_2, 10);
    pushMergedNeuronInitGroup1ToDevice(0, glbSpkCntneuron0, glbSpkneuron0, Vneuron0, magnitudecurrent_input, 784);
    pushMergedNeuronUpdateGroup0ToDevice(0, glbSpkCntneuron1, glbSpkneuron1, Vneuron1, inSynsynapse_0_1, recordSpkneuron1, 128);
    pushMergedNeuronUpdateGroup0ToDevice(1, glbSpkCntneuron2, glbSpkneuron2, Vneuron2, inSynsynapse_1_2, recordSpkneuron2, 10);
    pushMergedNeuronUpdateGroup1ToDevice(0, glbSpkCntneuron0, glbSpkneuron0, Vneuron0, magnitudecurrent_input, recordSpkneuron0, 784);
    pushMergedPresynapticUpdateGroup0ToDevice(0, inSynsynapse_0_1, glbSpkCntneuron0, glbSpkneuron0, gsynapse_0_1, 128, 784, 128);
    pushMergedPresynapticUpdateGroup0ToDevice(1, inSynsynapse_1_2, glbSpkCntneuron1, glbSpkneuron1, gsynapse_1_2, 10, 128, 10);
    pushMergedNeuronSpikeQueueUpdateGroup0ToDevice(0, glbSpkCntneuron2);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(0, glbSpkCntneuron0);
    pushMergedNeuronSpikeQueueUpdateGroup1ToDevice(1, glbSpkCntneuron1);
}

void freeMem() {
    // ------------------------------------------------------------------------
    // global variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // timers
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    // local neuron groups
    // ------------------------------------------------------------------------
    delete[] glbSpkCntneuron0;
    delete[] glbSpkneuron0;
    delete[] recordSpkneuron0;
    delete[] Vneuron0;
    // current source variables
    delete[] magnitudecurrent_input;
    delete[] glbSpkCntneuron1;
    delete[] glbSpkneuron1;
    delete[] recordSpkneuron1;
    delete[] Vneuron1;
    delete[] glbSpkCntneuron2;
    delete[] glbSpkneuron2;
    delete[] recordSpkneuron2;
    delete[] Vneuron2;
    
    // ------------------------------------------------------------------------
    // custom update variables
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // pre and postsynaptic variables
    // ------------------------------------------------------------------------
    delete[] inSynsynapse_0_1;
    delete[] inSynsynapse_1_2;
    
    // ------------------------------------------------------------------------
    // synapse connectivity
    // ------------------------------------------------------------------------
    
    // ------------------------------------------------------------------------
    // synapse variables
    // ------------------------------------------------------------------------
    delete[] gsynapse_0_1;
    delete[] gsynapse_1_2;
    
}

size_t getFreeDeviceMemBytes() {
    return 0;
}

void stepTime() {
    updateSynapses(t);
    updateNeurons(t, (unsigned int)(iT % numRecordingTimesteps)); 
    iT++;
    t = iT*DT;
}

