// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // check if there is a lowercase
    int i = 0;
    while (islower(password[i]) == 0 && i < strlen(password))
    {
        i++;
    }
    if (i == strlen(password))
    {
        return false;
    }
    
    // check if there is a uppercase
    i = 0;
    while (isupper(password[i]) == 0 && i < strlen(password))
    {
        i++;
    }
    if (i == strlen(password))
    {
        return false;
    }

    // check if there is a number
    i = 0;
    while (isdigit(password[i]) == 0 && i < strlen(password))
    {
        i++;
    }
    if (i == strlen(password))
    {
        return false;
    }

    // check if there is a symbol
    i = 0;
    while (isalnum(password[i]) != 0 && i < strlen(password))
    {
        i++;
    }
    if (i == strlen(password))
    {
        return false;
    }
    return true;
}