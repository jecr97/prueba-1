#include<stdio.h>
#include<stdlib.h>

int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int k;
int l;
int m;
int n;

int  main()
{
  printf("=========TIENDA DOÑA PELOS=========\n");
  printf("para compras ingresa 1\n para saber tus ganancias ingresa 2\n  ");
  scanf("%d",&a);
	
switch(a)  
{
              case 1:{
                   printf("selecciona el numero de acuerdo a tu  producto\n");
                   printf("1=chetos---$6\n 2=agua---$8\n 3=chicles---$2\n 4=cigarros---$37\n 5=cafe---$10\n");
                      scanf("%d",&b);
                      switch(b){
                                  case 1:{
                                       printf("cuantas bolsas de chetos?\n");
                                       scanf("%d",&c);
                                       d=c*6;
                                       printf("%d\n",d);
                                         }break;
                                  case 2:{
                                       printf("cuantas botellas de agua?\n");
                                       scanf("%d",&e);
                                       f=e*8;
                                       printf("lo que debes pagar es %d",f);
                                         }break;
                                  case 3:{
                                        printf("cuantas cajitas de chicles?\n");
                                       scanf("%d",&g);
                                       h=g*2;
                                       printf("%d",h);
                                         }break;
                                  case 4:{
                                       printf("cuantas cajetillas de cigarros?\n");
                                       scanf("%d",&i);
                                       j=i*37;
                                       printf("%d",j);
                                         }break;
                                  case 5:{
                                       printf("cuantas tazas de cafe?\n");
                                       scanf("%d",&k);
                                       l=k*10;
                                       printf("%d",l);
                                         }break;
                                       
									   
                                  default:{
                                         printf("solo pueden ser los numeros:\n1\n2\n3\n4\n5\n");
                                          }   
                                  }
                                      
                                    
                      }break;
              case 2:{
                   printf("a continuacion se presentan tus ganancias :v\n");
                   n=500+m;
                   printf("  $   %d ",n);
                   
                     }break;
                       
                  
                  
                  
                  
                  
                  
         default :{printf("solo\n 1\n 2\n ");
                    }
                                  
} 
     

}
