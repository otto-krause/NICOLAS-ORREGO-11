#include<stdio.h>
void num(int a, int b){
	printf("el numero es: %d ",a);
	printf("\nel segundo numero es: %d",b);
}
int main(){
 int n1,n2;
 printf("ingrese dos numeros: ");
 scanf("%d",&n1);
 scanf("%d",&n2);
 
 num(n1,n2);	
}
