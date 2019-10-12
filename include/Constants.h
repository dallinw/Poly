#ifndef CONSTANTS_H_
#define CONSTANTS_H_

/****************************************
* global constants
*/
#define POLY             8   // num voices supported
#define NUM_OUTPUTS      1   // mono (1) or stereo (2)
#define NUM_INPUT_MIXER  8   // number of input mixers needed
#define NUM_OUTPUT_MIXER 3
#define NUM_INPUTS       17
#define NUM_ANA_INPUTS   12
#define DIG_START_IDX    12
#define NUM_DIG_INPUTS   5
#define WFS_START_IDX    17
#define NUM_LEDS         4
#define NUM_WFS_INPUTS   3
#define DIV127 (1.0/127.0)
#define DIV8   (1.0/8.1)
#define PEAK_VOL       127
#define MAX_ENV_MILLIS 3000
#define MAX_OUT_VOL    0.2

/****************************************
* All I/O pins
* Audio Board uses 9, 11, 13, 18 (A4), 19 (A5), 22 (A7), 23 (A8)
* 8, 10, 12, and 29 are outputs
*/

#define MA_VOL_IN A0
#define MA_RAT_IN A1
#define WF_MI1_IN A2
#define WF_MI2_IN A3
#define NO_MIX_IN A5
#define BO_MIX_IN A6
#define FI_RES_IN A7
#define FI_FRQ_IN A9
#define EN_ATT_IN A10
#define EN_DEC_IN A11
#define EN_SUS_IN A12
#define EN_REL_IN A13

#define WF_SEL_SW 4
#define NO_SEL_SW 5
#define BO_SEL_SW 6
#define FI_SEL_SW 7
#define EN_SEL_SW 28

#define BO_SEL_LD 10
#define FI_SEL_LD 12
#define EN_SEL_LD 29
#define MA_RAT_LD 8

#define WF_SW1_SW 1 
#define WF_SW2_SW 2 
#define WF_SW3_SW 3

/****************************************
* MIDI CC vals
* These must be sequential because they have two uses:
* 1. Parsing midiCC to update values via switch() statement
* 2. Indexing into value array to update stored state
*/

#define MA_VOL_CC 0
#define MA_RAT_CC 1
#define WF_MI1_CC 2
#define WF_MI2_CC 3
#define NO_MIX_CC 4
#define BO_MIX_CC 5
#define FI_RES_CC 6
#define FI_FRQ_CC 7
#define EN_ATT_CC 8
#define EN_DEC_CC 9
#define EN_SUS_CC 10
#define EN_REL_CC 11

#define WF_SEL_CC 12
#define NO_SEL_CC 13
#define BO_SEL_CC 14
#define FI_SEL_CC 15
#define EN_SEL_CC 16

#define WF_SIN_CC 17
#define WF_REV_CC 18
#define WF_TRI_CC 19
#define WF_SAW_CC 20
#define WF_SQU_CC 21


#define MA_PED_CC 64


// frequency array for indexing from MIDI value to Hz
extern const float frequency[];
extern const float toPenta[];

// volume array for exponential volume response
extern const float volume[];
extern const float hardVolume[];

extern const int digitalInputs[];
extern const int wfInputs[];
extern const int midiCCs[];
extern const int wfCCs[];
extern const int wfKey[];

#endif