 #include <stdio.h>
 int main(){
 	int n, i=2 , T = 0;
 	do{
 		printf("Nhap n: ");
 		scanf("%d", &n);
 		if (n<0){
 			printf ("\nNhap sai");
		 }
	 }while (n<0);
	 
	 while (i<n){
	 	T+=i;
	 	i+=2;
	 	printf ("\nIn ra: %d", i);
	 }
	 printf("\nIn ra: Tong cac so chan = %d", T);
	 return 0;
 }
