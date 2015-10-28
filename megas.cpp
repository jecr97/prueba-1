
#include <stdio.h>//libreria de e/s
#include <stdlib.h>
float num;
float bits = 8388608;
long byte = 1048576;
float kilobyte = 1024;
float gigabyte = 0.0009765626;
float terabyte = 0.00000095367;
int main ()
{//inicio
	printf ("ingresa la cantidad de megas:\n\n");
	scanf("%f", &num);
	bits =(float)num * 8388608;
	byte = (long)num * 1048576;
    kilobyte = num * 1024;
    gigabyte = num * 0.0009765626;
	terabyte = num * 0.00000095367;
	printf ("El resultado a bits es %f\n",bits);
    printf ("El resltado a byte es %d\n",byte);
    printf ("El resultado a kilobyte es %f\n",kilobyte);
    printf ("El resultado a gigabyte es %f\n",gigabyte);
	printf ("El resultado a terabyte es %f\n",terabyte);
}//fin
