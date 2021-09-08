
#include<stdio.h>
void total(int fuerza, int superficie){
	int presion;
	presion=fuerza/superficie;
	printf("el resultado es: %d",presion);
}
int main(){
	int a,b;
	printf("ingrese la fuerza: ");
	scanf("%d",&a);
	printf("ingrese la superficie: ");
	scanf("%d",&b);
     total(a,b);
}
