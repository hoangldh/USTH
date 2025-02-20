#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#ifdef _WIN32
    #include<windows.h>
    #define CLEAR_SCREEN "cls"
#else
    #include<unistd.h>
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_LENGTH 20

/* Display digit sequence for short time */
void generate_sequence(int *sequence, int length)
{
    for (int i = 0; i < length; i++)
    {
        sequence[i] = rand() % 10; // generate digit between 0-9
    }
}

void display_sequence(int *sequence, int length)
{
    printf("Remember this sequence: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d", sequence[i]);
    }
    printf("\n");

    Sleep(2000); // display time (2000 milliseconds)
    system(CLEAR_SCREEN); // clear screen
}

/* Prompt for reiteration of digit sequence */
int get_user_input(int *user_input, int length)
{
    char user_input_str[MAX_LENGTH + 1]; 
    printf("Enter the sequence: ");
    
    if (scanf("%s", user_input_str) != 1)
    {
        return 0; // invalid input
    }
    if (strlen(user_input_str) != length)
    {
        return 0; // incorrect length
    }

    for (int i = 0; i < length; i++)
    {
        if (user_input_str[i] < '0' || user_input_str[i] > '9')
            return 0;

        user_input[i] = user_input_str[i] - '0'; // convert char to int
    }
    return 1; // successful input
}

/* Verify user input */
int compare_sequences(int *seq1, int *seq2, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (seq1[i] != seq2[i])
        {
            return 0; // mismatch
            
        }
    }
    return 1; // match
}

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