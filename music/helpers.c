// Helper functions for music

#include <cs50.h>
#include <math.h>
//required for  duration
#include <stdlib.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    int temp_D=0;
    char* numerator = fraction[0];
    int temp_D=atoi(const char * numerator);
    char* denominator= fraction[2];

    if(denominator == "4")
    return temp_D*2;
    else if (denominator == "2")
    return temp_D*4;
    return temp_D;



}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    int octave;
    double frequency;
    char* note_temp;

    if (strlen(note)==6)
    {
        octave= note[1];
        note_temp[j]=note[j];

    }

    else if (strlen(note)==7)
        {
        octave= note[2];
        for (int j=0; j<2;j++)
        note_temp[j]=note[j];

        }
    switch (note_temp){
        case 'C':
        frequency = 440*pow (2,-9/12);
        break;
        case "C#"||"Db":
        frequency = 440*pow (2,-8/12);
        break;
        case 'D':
        frequency = 440*pow (2,-7/12);
        break;
         case "D#"||"Eb":
        frequency = 440*pow (2,-6/12);
        break;
        case 'E':
        frequency = 440*pow (2,-5/12);
        break;
        case 'F':
        frequency = 440*pow (2,-4/12);
        break;
        case "F#"||"Gb":
        frequency = 440*pow (2,-3/12);
        break;
        case 'G':
        frequency = 440*pow (2,-2/12);
        break;
        case "G#"||"Ab":
        frequency = 440*pow (2,-1/12);
        break;
        case 'A':
        frequency = 440;
        break;
        case "A#"||"Bb":
        frequency = 440*pow (2,1/12);
        break;
        case 'B':
        frequency = 440*pow (2,2/12);
        break;

    }

    //calculate the frequency for octave
    // freq X 2^(octave-)
    // for 4th octave will be
    // freq X 2^0 = freq
    return frequency* pow(2,octave-4);

}



// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    //check for empty line
    if(s[0] == '\0')
    return true;
    else
    return false;

}
