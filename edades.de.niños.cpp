#include<stdio.h>
#include<stdlib.h>

int edad;
int main()
{//inicio
 printf("Programa que te dice si es joven o viejo\n");
 printf("Ingresa tu edad ");
 scanf("%d",&edad);
  if(edad >=0 && edad<=2)
 {
	printf(" Eres un bebe :3\n");
}
if(edad >=3 && edad<=12)
{
	printf("Eres un niño \n");
}
if(edad >=13 && edad<=18)
{
	printf(" Eres un adolecente\n");
}
if(edad >=19 && edad<=29)
{
	printf("eres un joven \n");
}
if(edad >=30 && edad<=59)
{
	printf(" eres un adulto\n");
}
if(edad >= 60) 
{
	printf(" Eres un adulto mayor :v /n");
}
	system("pause");
}
