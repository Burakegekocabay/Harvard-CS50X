#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char input[30];
    printf("Enter your CC number: ");
    scanf("%s", &input);
    int i=strlen(input);
    int total=0;
    int control=0;

    while(i != 0)
    {
        if (control)
        {
            if (input[i-1]-'0'<5)
            {
                total= total + 2*(input[i-1]-'0');
            }

            else
            {
                int temp = 2*(input[i-1]-'0');
                total=total+(temp/10)+(temp%10);
            }
        }
        else
            total = total+(input[i-1]-'0');
        
        
        i--;
        control = !control;
    };

    if (total%10==0)
    {
        if(input[0] == '2' || input[0] == '5')
        {
            printf("VALID : MasterCard \n");
        }
        else if(input[0] == '3')
        {
            printf("VALID : American Express \n");
        }
        else if (input[0] == '4')
        {
            printf("VALID : Visa \n");
        }
        else
        {
            printf("VALID \n");
        }
        
    }
    else
    {
        printf("Your CC is not valid.");
    }
    

   

    return 0;
}
