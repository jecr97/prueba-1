#include<stdio.h>//libreria de e/s
float a;
float b;
float x;

int main ()
{//inicio
         printf("ingresa un numero ");
         scanf("%f",&a);
         printf("ingresa un numero ");
         scanf("%f",&b);
         x= a+b;
         printf("el resultado de %.0f + %.0f es: %.2f\n",a,b,x);
         x=a-b;
         printf("el resultado de %.0f - %.0f es: %.2f\n",a,b,x);
         x=a*b;
         printf("el resultado de %.0f * %.0f es: %.2f\n",a,b,x);
         x=(float)a/b;
         printf("el resultado de %.0f / %.0f es: %.2f\n",a,b,x);
        }//fin
