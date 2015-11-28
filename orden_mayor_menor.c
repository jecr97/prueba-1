#include<stdio.h>
#include<stdlib.h>

int a[20],b,c,d;
int main()
{
	for(b=0;b<20;b++)
	{
		printf("este programa ordena los numeros de mayor a menor\n");
		printf("ingresa un numero:\n");
		scanf("%d",&a[b]);
	}
		for(b=0;b<19;b++)
		for(c=b+1;c<20;c++)
		if(a[b]<a[c])
		{
		d=a[b];
		a[b]=a[c];
		a[c]=d;
		}
		{
			printf("su orden de los numeros es:\n");
			for(b=0;b<20;b++)
				printf("%d\n",a[b]);

		}
		system("pause");
}

