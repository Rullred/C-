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
	
	int t=0;
	for (int i=0; i<=n; i++ ){
		t+=i; 
	 	printf ("\nIn ra: %d",i);
	 }
	 printf ("\nTong: %d", t);
	 return 0;
 }
