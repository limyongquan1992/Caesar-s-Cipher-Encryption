#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void caesar (string s, int a);

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    if (key)
    
    printf("plaintext: ");
    string s = get_string();
    
    printf("ciphertext: ");
    caesar(s, key);
    return 0;
}

void caesar (string s, int a)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            printf("%c", 65+((s[i]-65+a)%26));
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            printf("%c", 97+((s[i]-97+a)%26));
        }  
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
    