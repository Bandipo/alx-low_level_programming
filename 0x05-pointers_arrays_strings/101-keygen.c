#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char valid_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_-+=";
    int num_valid_chars = sizeof(valid_chars) - 1;

    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % num_valid_chars;
        password[i] = valid_chars[index];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return (0);
}

