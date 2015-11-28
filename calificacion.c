#include<stdio.h>
#include<stdlib.h>

int a;

int main()
{
    printf("introduce tu edad a\n");
    printf("introduce tu edad ");
    scanf("%d",&a);
    printf("tu edad es: %d\n", a);
      if(a>= 2)
{
	printf("eres un bebe :3\n"); 
	}    
	else
	{
	printf("niño\n");
	}
	if(a<=12)
	{
		printf("eres un adolecente\n");
	}
	else
     {
     printf("eres un joven");
     }
		
	if(a<=28)	
	{
	printf("eres un adulto")
	}
	else
	{
	printf("adulto mayor\n");
   }

