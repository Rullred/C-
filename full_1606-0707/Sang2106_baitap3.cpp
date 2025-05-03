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
	
	int t=1;
	for (int i=1; i<=n; i+=2 ){
		t*=i; 
	 	printf ("\nIn ra: %d",i);
	 }
	 printf ("\nTich cac so le: %d", t);
	 return 0;
 }
