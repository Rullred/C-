#include <stdio.h>
int main(){
	float a,b,cn;
	printf("Nhap a la Hk1: ");
	scanf("%f",&a);
	printf("Nhap b la Hk2: ");
	scanf("%f",&b);
    cn = (a+2*b)/3;
	
	printf("\nDiem ca nam: %.2f", cn); 
    if (cn >= 5){
    	printf("\nDuoc len lop ");
	} else {
		printf("\nO lai lop");
	}
    
    if (cn>=9){
    	printf("\nXuat sac: %.2f",cn);
	} else if (9>=8){
    	printf("\nGioi: %.2f",cn);
	} 
	 else if (8>=6.5){
    	printf("\nKha: %.2f",cn);
	} 
	 else if (6.5>=5){
    	printf("\nTrung binh: %.2f",cn);
	} 
     else if (cn < 5){
    	printf("\nYeu: %.2f",cn);
	} 
	return 0;
}
