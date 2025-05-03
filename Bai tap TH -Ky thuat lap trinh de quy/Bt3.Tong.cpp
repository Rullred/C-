#include <stdio.h>
int  Tong(int n){
	if (n == 0){
		return 0;
	}else {
		return n + Tong(n-1);;
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
	printf ("\nTong tu 1 den %d : %d\n", n, kq);
	return 0;
}
