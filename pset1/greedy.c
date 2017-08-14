#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void) 
{
    float n;
    int c,q,d,p,r,l;
    
    do 
    {
        printf("owned money ");
        n = GetFloat();
        if(n == 0||n <= 0)
        {
        printf("wrong entry\n:");
        }
    }
    while(n<= 0);

    c = (int)round(n*100);

    
    q = c / 25;
    l= c % 25;
    
   
    d = l /10;
    l = l % 10;
    
    
    p = l / 5;
    l = l % 5;
    
    r = q + d + p + l;
    
    printf("%d\n", r);
    
    return 0;
}
