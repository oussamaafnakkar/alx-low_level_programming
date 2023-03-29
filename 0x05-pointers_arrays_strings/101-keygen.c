#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 64
#define MAX_ASCII 126
#define MIN_ASCII 33

/**
 * generate_password - generates a random password
 * Return: pointer to the password string
 */
char *generate_password(void)
{
    static char password[PASSWORD_LEN + 1];
    int i, r;

    srand((unsigned int) time(NULL));

    for (i = 0; i < PASSWORD_LEN; i++)
    {
        r = rand() % (MAX_ASCII - MIN_ASCII + 1) + MIN_ASCII;
        password[i] = (char) r;
    }

    password[i] = '\0';

    return password;
}

/**
 * main - generates a random password and prints it to stdout
 * Return: 0 on success
 */
int main(void)
{
    char *password = generate_password();

    printf("%s\n", password);

    return 0;
}
