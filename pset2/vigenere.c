#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

char caesar(char coin, int pre);

int main(int argc, string argv[]) 
{
    bool code = false;
    string input = "";
    int inputlength;
    int a = 0;
    string key = "";
    int keylength = 0;

    do
    {
      if(argc != 2)
        {
            printf("give at least 2 command line arguments\n");
            return 1;
        }
        else 
        {
          if(argv[1])
          {
            int length = strlen(argv[1]);
            for(int i = 0; i < length; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                    // We accept only letters as input. 
                    printf("Your input contains illegal characters.\n");
                    return 1;
                }
                else
                {
                    // All good, input can be accepted as key.
                    code = true;
                    key = argv[1];
                }
            }
          }
        }  
    } while(!code);
    
    
    
    keylength = strlen(key);
    int keycodes[keylength];
    for(int i = 0; i < keylength;i++)
    {
        keycodes[i] = toupper(key[i]) - 65;
    }



    input = GetString();
    inputlength = strlen(input);
    for (int i = 0; i < inputlength; i++)
    {
        if(!isalpha(input[i]))
        {
            printf("%c", input[i]);
        }
        else
        {
            printf("%c", caesar(input[i], keycodes[a]));
            if(a < keylength - 1)
            {
                a++;
            }
            else
            {
                a = 0;
            }
        }
    }
    
    
    printf("\n");
    return 0;
}

char caesar(char coin, int pre)
{
    if(islower(coin))
    {
        return ((((coin - 97)+pre)%26)+97);
    }
    else
    {
        return ((((coin - 65)  +pre)%26)+65);
    }
}
