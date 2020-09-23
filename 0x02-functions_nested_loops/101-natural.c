#include<stdio.h>
/**
* main- void
* 
* description: computing sum of numbers
* Return: 0
*/

int main()
{
  int sum;
  int i;
  sum=0;
  for(i=0;i<1024;++i)
    {
      if((i%3==0)||(i%5==0))
	{
	  sum=sum+i;
	}
    }

  printf("%d",sum);

}
