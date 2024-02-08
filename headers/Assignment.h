// pre-processor directives

// create macro value
// represents the starting intensity
// to be used in Karvonen formula
#define START .50

// create macro expression
// represents the condition to  
// determine the stoping intensity
// to be used in Karvonen formula
#define STOP(i) (i <= 1.00)

// include C header file
#include <stdio.h>

// declare global variables 
// represent the age and resulting pulse 
// to be used in the Karvonen formula
static int age = 22;
static int restingPulse = 65;

// function declarations
void heartRate (int, int);
void heartRateReference (int *, int *);