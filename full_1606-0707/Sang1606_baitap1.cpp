#include <stdio.h>
int main(){
	int n;
	do {
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n<=0){
			printf ("\nNhap sai!");
		}
	}while (n<=0);
	if ((n%2==0)&&(n%3==0)){
		printf ("\n%d la so chan chia het cho 3!", n);
	}else {
			printf ("\n%d khong la so chan chia het cho 3!", n);
	}
	return 0;
}
