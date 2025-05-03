 #include <stdio.h>
 int main(){
 	int n,i, kq; 
 	float x;
 	
 	printf ("Nhap n: ");
	scanf ("%d", &n);
	printf ("Nhap x: ");
	scanf ("%f", &x);
	
	if (n<0 && x<0){
		printf("\nNhap sai nhap theo yeu caau n>0 va x>0 ");
    }
	 for(  i = 0 ; i < n; i++){
    	kq*=x;
	}
	printf("\nIn ra: Ket qua: %d", kq);
	 return 0;
 }
