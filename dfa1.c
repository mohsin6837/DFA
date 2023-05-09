/*design a dfa which accepts a string which starts with a and ends with b */
#include <stdio.h>
#include <string.h>
void check(char str[]);
void q0(char);
void q1(char);
void q2(char);
void q3(char);
int dfa = 0;

int main()
{
    char string[100];
    char choice;
    while (1)
    {

        printf("Enter the string: ");
        scanf("%s", string);
        check(string);
        if (dfa == 2)
        {
            printf("String accepted\n");
        }
        else
        {
            printf("String not accepted\n");
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &choice);
        if (choice == 'N' || choice == 'n')
        {
            break;
        }
        
    }
    return 0;
}

void check(char string[])
{
    int i, len = strlen(string);
    for (i = 0; i < len; i++)
    {
        if (dfa == 0)
        {
            q0(string[i]);
        }
        else if (dfa == 1)
        {
            q1(string[i]);
        }
        else if (dfa == 2)
        {
            q2(string[i]);
        }
        else
        {
            q3(string[i]);
        }
    }
}

void q0(char c)
{
    if (c == 'a')
    {
        dfa = 1;
    }
    else
    {
        dfa = 3;
    }
}
void q1(char c)
{
    if (c == 'a')
    {
        dfa = 1;
    }
    else if (c == 'b')
    {
        dfa = 2;
    }
    else
    {
        dfa = 3;
    }
}
void q2(char c)
{
    if (c == 'a')
    {
        dfa = 1;
    }
    else if (c == 'b')
    {
        dfa = 2;
    }
    else
    {
        dfa = 3;
    }
}
void q3(char c)
{
    if (c == 'a')
    {
        dfa = 1;
    }
    else if (c == 'b')
    {
        dfa = 2;
    }
    else
    {
        dfa = 3;
    }
}