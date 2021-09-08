#include<stdio.h>
void cv(int hombres,int mujeres){
	int total,resultado,resultado2;
	total=hombres+mujeres;
    resultado= total*hombres/100;
    printf("el resultado de hombres es: %d",total);	
}
void cv2(int hombres,int mujeres){
	int total1,resultado,resultado2;
	total1=hombres+mujeres;
    resultado= total1*mujeres/100; 
    printf("\nel resultado de mujeres es: %d",total1);
	
}
int main(){
	int a,b;
	printf("ingrese los cv de hombres: ");
	scanf("%d",&a);
	printf("\ningrese el cv de las mujeres: ");
    scanf("%d",&b);
    cv(a,b);
    cv2(a,b);
    
    
    
    
}
