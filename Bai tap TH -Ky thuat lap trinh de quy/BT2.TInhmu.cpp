#include <stdio.h>
int Tinh_mu(int x, int n){
	if (n == 0){
		return 1;
	}else {
		return (x * Tinh_mu(x, n-1));
	}
}
int main (){
	int x,n;
	do{
		printf ("Nhap x: ");
		scanf ("%d", &x);
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (x<0 || n<0){
			printf ("\nNhap sai");
		}
	}while (x<0 ||n<0);
	int kq = Tinh_mu(x, n);
	printf("\n%d ^ %d : %d",x, n,kq);
}
