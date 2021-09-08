#include<stdio.h>
void perimetro(int a, int b){
	int pe =2*a+2*b;
	printf("el resutado del perimetro es: %d",pe);
}
void area(int a, int b){
	int ar = a*b;
	printf("\nel resultado del area es: %d",ar);
}
int main(){
	int n1,n2;
	printf("ingrese dos numeros: ");
	scanf("%d",&n1);
    scanf("%d",&n2);
    
    perimetro(n1,n2);
    area(n1,n2);
    
}
