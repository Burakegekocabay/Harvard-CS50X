#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input[30];
    printf("Enter your CC number: ");
    scanf("%s", &input);
    
    int i=0;
    int total=0;
    while(input[i] != '\0')
    {
        if (i%2==0)
        {
            if (input[i]-'0'<5)
            {
                total= total + 2*(input[i]-'0');
            }

            else
            {
                int temp = 2*(input[i]-'0');
                total=total+(temp/10)+(temp%10);
            }
        }
        else
            total = total+(input[i]-'0');
        
        
        i++; 
    };

    if (total%10==0)
    {
        printf("Your CC is valid.");
    }
    else
    {
        printf("Your CC is not valid.");
    }
    

   

    return 0;
}
