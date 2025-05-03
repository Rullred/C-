#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	
	printf("Gia tri lon nhat: ");
	if (a==b || b==c || c == a){
		printf ("%d = %d = %d", a,b,c);
	}else if (a>b && a>c ){
		printf ("a = %d ",a);
	}else if (b>a && b>c ){
		printf ("b = %d ",b);
	}else if (c>b && c>a ){
		printf ("c = %d ",c);
	}
	
	printf("\nGia tri nho nhat: ");
	if (a<b && a<c ){
		printf ("a = %d ",a);
	}else if (b<a && b<c ){
		printf ("b = %d ",b);
	}else if (c<b && c<a ){
		printf ("c = %d ",c);
	}
	
	return 0;
}
