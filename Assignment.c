// pre-processor directives

// include needed header file
#include "./headers/Assignment.h"

// write code for functions declared in header file


void heartRate (int age, int restingPulse){

    float i = START;
    float print_intensity = i * 100;
    float targetHeartRate;

    do 
    {
        targetHeartRate = (((220 - age) - restingPulse) * i) + restingPulse;
        printf("%.0f               %.0f bpm\n", print_intensity, targetHeartRate);  

        i += .05;
        print_intensity = i * 100;
    } 
    while(STOP(i));
    
}

void heartRateReference (int *age, int *restingPulse){
    
    float i = START;
    float print_intensity = i * 100;
    float targetHeartRate;

    do 
    {
        targetHeartRate = (((220 - *age) - *restingPulse) * i) + *restingPulse;
        printf("%.0f               %.0f bpm\n", print_intensity, targetHeartRate);  

        i += .05;
        print_intensity = i * 100;
    } 
    while(STOP(i));
}
