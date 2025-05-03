#include <stdio.h>
int  Tong(int n){
	if (n == 0){
		return 1;
	}else {
		return (2*n+1) + Tong(n-1);;
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
	
	int kq = Tong(n);
	printf ("\nTong  s(%d) = %d\n", n, kq);
	return 0;
}
