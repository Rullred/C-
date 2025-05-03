 #include <stdio.h>
 int main(){
 	int n; 
 	do {
 		printf ("Nhap n: ");
		scanf ("%d", &n);
		if (n<0){
			printf ("nhap sai\n");
		}	
	 }while (n<0);
	 printf ("In ra: ");
	 if (n%2==0){
	 	 	for (int i=2; i<=n; i+=2 ){
	 		printf ("%4d",i);
	      }
	 }
	 return 0;
 }
