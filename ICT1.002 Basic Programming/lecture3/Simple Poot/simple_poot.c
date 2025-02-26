#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "simple_poot_lib.h"

#ifdef _WIN32
    #include<windows.h>
    #define CLEAR_SCREEN "cls"
#else
    #include<unistd.h>
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_LENGTH 20

/* Run game and repeat */
int main()
{
    srand(time(NULL)); // seed random number generator
    int sequence[MAX_LENGTH], user_input[MAX_LENGTH];
    int level = 1;

    printf("\nSIMPLE POOT: MEMORY GAME\n\n");
    
    while (level <= MAX_LENGTH)
    {
        generate_sequence(sequence, level);
        display_sequence(sequence, level);
        
        if (!get_user_input(user_input, level) || !compare_sequences(sequence, user_input, level))
        {
            printf("\nIncorrect sequence. Game over, slut.");
            break;
        }
        else
        {
            printf("Correct. Moving to level %d.\n\n", ++level);
            Sleep(1000);
        }
    }

    printf(" You reached level %d as expected.\n\n", level);
    Sleep(4000);
    return 0;
}