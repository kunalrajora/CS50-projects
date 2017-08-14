#include<stdio.h>
#include<cs50.h>
int main(void)
{
	int n,i,j,k;
	do
	{
	   printf("enter the height of pyramid");
       n=GetInt();
	     if (n<0||n>=24)
	       {
	         printf("retry\n");
	       }
	}
	while(n<0||n>=24);
	 for(i=1; i<=n; i++)
	           {
		         for(j=0; j<n-i; j++)
		           {
			         printf(" ");
		           }
		         for(k=j; k<=n; k++)
		           {
			         printf("#");
		           }
		          printf("\n");
	            }
}