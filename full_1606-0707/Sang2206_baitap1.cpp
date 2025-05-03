#include <stdio.h>
int main(){
	int n, i=1, giaithua=1;
	
	do {
		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n < 0){
			printf ("\nNhap sai!!");
		}
	}while (n <0);
	
	while (i<=n){
		giaithua*=i;
		i++;
		printf ("\nIn ra: %d", i);
	}
	printf("\n %d!=%d", n, giaithua);
	return 0;
}
