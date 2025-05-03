#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf ("Nhap a: ");
	scanf ("%d", &a);
	printf ("Nhap b: ");
	scanf ("%d", &b);
	printf ("Nhap c: ");
	scanf ("%d", &c);
	
	int delta = b*b-4*a*c;
	
	if (delta > 0) {
		int x1 = (-b+sqrt(delta))/(2*a);
		int x2 = (-b-sqrt(delta))/(2*a);
		printf("\nNghiem cua X1 = %d X2 = %d", x1, x2);
	} else if (delta < 0){
		printf ("\nPhuong trinh vo nghiem");
	}else {
		int x = - b/(2*a);
		printf("\nNghiem cua x = %d", x);
	}
    return 0; 
}
