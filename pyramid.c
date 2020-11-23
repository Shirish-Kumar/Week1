#include<stdio.h>
#include<cs50.h>

int main(void)
{
  do
  { 
   int n = get_int("ENTER THE HEIGHT OF YOUR PYRAMID: ");
   int i,d;
    
    if(n<8 && n>0)
    { 
        for(i=0;i<n;i++)
    {
        d = n-i;
        for(int k=0;k<=d;k++)
        {
            printf(" ");
        }
        for(int l=0;l<=i;l++)
        {
            printf("#");
        }
        printf("  ");
         for(int l=0;l<=i;l++)
        {
            printf("#");
        }
        for(int k=0;k<=d;k++)
        {
            printf(" ");
        }
        printf("\n");

    }
    }
    else
    {
        printf("Height should be an integer between 1 and 8\n");
    }
  }
  while(1);
    
   
}
