#include <stdio.h>
int  Tich(int n){
	if (n == 0){
		return 1;
	}else {
		return (2*n+1) * Tich(n-1);
	} 
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
	
	int kq = Tich(n);
	printf ("\nTich  P(%d) = %d\n", n, kq);
	return 0;
}
