#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(void)
{
    // Define the valid characters for the password
    char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int num_valid_chars = sizeof(valid_chars) - 1;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password
    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % num_valid_chars;
        password[i] = valid_chars[index];
    }
    password[PASSWORD_LENGTH] = '\0';  // Add null terminator at the end

    // Print the generated password
    printf("Generated password: %s\n", password);

    return 0;
}

