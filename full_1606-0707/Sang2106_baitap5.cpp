 #include <stdio.h>
 int main(){
 	int n,i , kq = 1; 
 
 	printf ("Nhap n: ");
	scanf ("%d", &n);
    
    for (int i =1 ; i <= 10; i ++){
        kq = n * i;
    	printf ("\n%d x %d = %d", n , i , kq);
	}
	 return 0;
 }
