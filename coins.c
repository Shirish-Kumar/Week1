#include<stdio.h>   
#include<cs50.h>

int main(void)
{
   do
   { 
    
       float n = get_float("Enter the change in dollars:");
       if(n>0)
       {
    int i=0;
    while(n>=0.5)
    {
        n=n-0.5;
        i++;
    }
    while(n>=0.25)
    {
        n=n-0.25;
        i++;
    }
    while(n>=0.1)
    {
        n=n-0.1;
        i++;
    }
    while(n>=0.05)
    {
        n=n-0.05;
        i++;
    }
    while(n>=0.01)
    {
        n=n-0.01;
        i++;
    }
    printf("You need to give %i coins\n",i);
   }
   else
   {
       printf("Change needs to be positive!\n");
   }
   }
   while(true)
   ;
}