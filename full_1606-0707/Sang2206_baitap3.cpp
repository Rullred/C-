#include <stdio.h>
int main (){
	int a, b;
	do{
		printf ("Nhap a: ");
		scanf ("%d", &a);
		printf ("Nhap b: ");
		scanf ("%d", &b);
		if (a< 0 && b < 0){
			printf ("\nNhap sai ");
		}
	}while (a<0 && b<0);
	
	printf("\nHinh chu nhat dac: \n");
	int i=0 , j;
	while (i<a){
		j = 0; 
		while (j <b ){
			printf ("* ");
			j++;
		}
		printf ("\n");
		i++;
	}
	
	printf("\nHinh chu nhat rong: \n");
    i = 0 , j;
	while (i<a){
		j = 0; 
		while (j <b ){
			if ( i ==0 || i == a -1 || j == 0 || j == b-1){
			    printf ("* ");	
			} else {
				printf ("  ");	
			}
			j++;
		}
		printf ("\n");
		i++;
	}
	
	return 0;
}
