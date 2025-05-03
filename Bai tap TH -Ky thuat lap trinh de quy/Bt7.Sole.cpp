#include <stdio.h>
int  Sole(int n){
	
}
int main(){
	int n;
	do {
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n < 0){
			printf ("\nNhap sai!!! Nhap theo yeu cau n>0");
		}
	}while (n<0);
	
	
	return 0;
}
