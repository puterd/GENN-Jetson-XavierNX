#pragma once
#define EXPORT_VAR extern
#define EXPORT_FUNC
// Standard C++ includes
#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>

// Standard C includes
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstring>
#define DT 1.00000000000000000e+00f
typedef float scalar;
#define SCALAR_MIN 1.175494351e-38f
#define SCALAR_MAX 3.402823466e+38f

#define TIME_MIN 1.175494351e-38f
#define TIME_MAX 3.402823466e+38f

// ------------------------------------------------------------------------
// bit tool macros
#define B(x,i) ((x) & (0x80000000 >> (i))) //!< Extract the bit at the specified position i from x
#define setB(x,i) x= ((x) | (0x80000000 >> (i))) //!< Set the bit at the specified position i in x to 1
#define delB(x,i) x= ((x) & (~(0x80000000 >> (i)))) //!< Set the bit at the specified position i in x to 0

extern "C" {
// ------------------------------------------------------------------------
// global variables
// ------------------------------------------------------------------------
EXPORT_VAR unsigned long long iT;
EXPORT_VAR float t;

// ------------------------------------------------------------------------
// timers
// ------------------------------------------------------------------------
EXPORT_VAR double initTime;
EXPORT_VAR double initSparseTime;
EXPORT_VAR double neuronUpdateTime;
EXPORT_VAR double presynapticUpdateTime;
EXPORT_VAR double postsynapticUpdateTime;
EXPORT_VAR double synapseDynamicsTime;
// ------------------------------------------------------------------------
// local neuron groups
// ------------------------------------------------------------------------
#define spikeCount_neuron0 glbSpkCntneuron0[0]
#define spike_neuron0 glbSpkneuron0
#define glbSpkShiftneuron0 0

EXPORT_VAR unsigned int* glbSpkCntneuron0;
EXPORT_VAR unsigned int* glbSpkneuron0;
EXPORT_VAR uint32_t* recordSpkneuron0;
EXPORT_VAR scalar* Vneuron0;
// current source variables
EXPORT_VAR scalar* magnitudecurrent_input;
#define spikeCount_neuron1 glbSpkCntneuron1[0]
#define spike_neuron1 glbSpkneuron1
#define glbSpkShiftneuron1 0

EXPORT_VAR unsigned int* glbSpkCntneuron1;
EXPORT_VAR unsigned int* glbSpkneuron1;
EXPORT_VAR uint32_t* recordSpkneuron1;
EXPORT_VAR scalar* Vneuron1;
#define spikeCount_neuron2 glbSpkCntneuron2[0]
#define spike_neuron2 glbSpkneuron2
#define glbSpkShiftneuron2 0

EXPORT_VAR unsigned int* glbSpkCntneuron2;
EXPORT_VAR unsigned int* glbSpkneuron2;
EXPORT_VAR uint32_t* recordSpkneuron2;
EXPORT_VAR scalar* Vneuron2;

// ------------------------------------------------------------------------
// custom update variables
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// pre and postsynaptic variables
// ------------------------------------------------------------------------
EXPORT_VAR float* inSynsynapse_0_1;
EXPORT_VAR float* inSynsynapse_1_2;

// ------------------------------------------------------------------------
// synapse connectivity
// ------------------------------------------------------------------------

// ------------------------------------------------------------------------
// synapse variables
// ------------------------------------------------------------------------
EXPORT_VAR scalar* gsynapse_0_1;
EXPORT_VAR scalar* gsynapse_1_2;

EXPORT_FUNC void pushneuron0SpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron0SpikesFromDevice();
EXPORT_FUNC void pushneuron0CurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron0CurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getneuron0CurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getneuron0CurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVneuron0ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVneuron0FromDevice();
EXPORT_FUNC void pushCurrentVneuron0ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVneuron0FromDevice();
EXPORT_FUNC scalar* getCurrentVneuron0(unsigned int batch = 0); 
EXPORT_FUNC void pushneuron0StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron0StateFromDevice();
EXPORT_FUNC void pushmagnitudecurrent_inputToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullmagnitudecurrent_inputFromDevice();
EXPORT_FUNC void pushcurrent_inputStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullcurrent_inputStateFromDevice();
EXPORT_FUNC void pushneuron1SpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron1SpikesFromDevice();
EXPORT_FUNC void pushneuron1CurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron1CurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getneuron1CurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getneuron1CurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVneuron1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVneuron1FromDevice();
EXPORT_FUNC void pushCurrentVneuron1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVneuron1FromDevice();
EXPORT_FUNC scalar* getCurrentVneuron1(unsigned int batch = 0); 
EXPORT_FUNC void pushneuron1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron1StateFromDevice();
EXPORT_FUNC void pushneuron2SpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron2SpikesFromDevice();
EXPORT_FUNC void pushneuron2CurrentSpikesToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron2CurrentSpikesFromDevice();
EXPORT_FUNC unsigned int* getneuron2CurrentSpikes(unsigned int batch = 0); 
EXPORT_FUNC unsigned int& getneuron2CurrentSpikeCount(unsigned int batch = 0); 
EXPORT_FUNC void pushVneuron2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullVneuron2FromDevice();
EXPORT_FUNC void pushCurrentVneuron2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullCurrentVneuron2FromDevice();
EXPORT_FUNC scalar* getCurrentVneuron2(unsigned int batch = 0); 
EXPORT_FUNC void pushneuron2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullneuron2StateFromDevice();
EXPORT_FUNC void pushgsynapse_0_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgsynapse_0_1FromDevice();
EXPORT_FUNC void pushinSynsynapse_0_1ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynsynapse_0_1FromDevice();
EXPORT_FUNC void pushsynapse_0_1StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsynapse_0_1StateFromDevice();
EXPORT_FUNC void pushgsynapse_1_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullgsynapse_1_2FromDevice();
EXPORT_FUNC void pushinSynsynapse_1_2ToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullinSynsynapse_1_2FromDevice();
EXPORT_FUNC void pushsynapse_1_2StateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void pullsynapse_1_2StateFromDevice();
// Runner functions
EXPORT_FUNC void copyStateToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyConnectivityToDevice(bool uninitialisedOnly = false);
EXPORT_FUNC void copyStateFromDevice();
EXPORT_FUNC void copyCurrentSpikesFromDevice();
EXPORT_FUNC void copyCurrentSpikeEventsFromDevice();
EXPORT_FUNC void allocateRecordingBuffers(unsigned int timesteps);
EXPORT_FUNC void pullRecordingBuffersFromDevice();
EXPORT_FUNC void allocateMem();
EXPORT_FUNC void freeMem();
EXPORT_FUNC size_t getFreeDeviceMemBytes();
EXPORT_FUNC void stepTime();

// Functions generated by backend
EXPORT_FUNC void updateNeurons(float t, unsigned int recordingTimestep); 
EXPORT_FUNC void updateSynapses(float t);
EXPORT_FUNC void initialize();
EXPORT_FUNC void initializeSparse();
}  // extern "C"
