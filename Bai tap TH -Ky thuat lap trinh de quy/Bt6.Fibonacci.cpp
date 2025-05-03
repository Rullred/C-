#include <stdio.h>
int fibonacii(int i){
	if (i == 0){
		return 0;
	}if (i == 1){
		return 1;
	} else {
		return fibonacii(i - 1 ) + fibonacii(i - 2 );
	}
}
int main (){
	int n;
	do {
		printf("Nhap n:");
		scanf("%d", &n);
		if (n<0){
			printf("\nNhap sai!!!");
		}
	}while (n<0);
	int i;
	for (i = 0 ; i<n ; i++){
		printf ("%5d", fibonacii(i));
	}
	return 0;
}
