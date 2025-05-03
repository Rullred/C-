#include <stdio.h>
int Giai_Thua(int n){
	if (n == 0 || n == 1){
		return 1;
	}else {
		return (n * Giai_Thua(n-1));
	}
}
int main (){
	int n;
	do{
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n<0){
			printf ("\nNhap sai");
		}
	}while (n<0);
	int kq = Giai_Thua(n);
	printf("\n%d! = %d", n,kq);
}
