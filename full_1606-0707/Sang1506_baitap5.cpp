#include <stdio.h>
int main(){
	int a, b;
	printf ("Nhap a: ");
	scanf ("%d", &a);
	printf ("Nhap b: ");
	scanf ("%d", &b);
	if(a==0 && b==0){
		printf ("Phuong trinh vo so nghiem");
	}else if(a==0 && b!=0){
		printf ("Phuong trinh vo nghiem");
	}else if(a!=0){
		int x=-b/a;
		printf("\nPhuong trinh co 1 nghiem  x = %d", x);
	}
}
