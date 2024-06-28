#include <stdio.h>

int main(int argc, char const *argv[])
{
    int key;
    printf("Enter a key: ");
    scanf("%d",&key);
    
    printf("Enter a word: ");
    char word[50];
    scanf("%s",word);

    for (int i = 0; word[i]!='\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = ((word[i] - 'a' + key) % 26) + 'a';
        }
        
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] = ((word[i] - 'A' + key) % 26) + 'A';
        }

    };
    printf("RESULT: %s \n",word);
    return 0;
}
