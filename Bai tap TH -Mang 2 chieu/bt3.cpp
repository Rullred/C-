#include <stdio.h>
int main(){
	int n,a[50][50],i,j;
	do {
		printf ("Nhap n: ");
		scanf ("%d", &n);
	}while (n<0);
	
	// Nhap 
	for (i = 0; i <n ; i++){
		for (j = 0; j <n ; j++){
		printf ("a[%d][%d] = ", i, j);
		scanf ("%d", &a[i][j]);
	    }
	}
	
	
	//Xuat
	printf ("\nXuat gia tri cua ma tran:  ");
	for (i = 0; i <n ; i++){
		printf ("\n");
		for (j = 0; j <n ; j++){
		printf ("%3d",a[i][j]);
	    }
	}
	
	//Tong
	int s=0;
	for (i = 0; i <n ; i++){
		for (j = 0; j <n ; j++){
			if(i==j) {
				s += a[i][j];
			}
		 
	    }
	}
	printf("\nTong cac phan tu tren duong cheo: %d", s); 
	
	// Min 
	int min = a[n-1][0];
	for (i = 0; i<n ; i++){
		for (j = 0; j<n ; j++){
			if(i+j == n-1 && a[i][j] < min) {
				min = a[i][j];
			}
		 
	    }
	}
    printf("\nPhan tu nho nhat tren duong cheo phu cua ma tran: %d", min); 
    
    // Dem so chan    
    int dem = 0;
    printf("\nCo so chan nam trong tam giac tren duong cheo chinh");
    printf("\nIn ra: ");
    for (i = 0; i<n ; i++){
		for (j = 0; j<n ; j++){
			if( i < j && a[i][j] % 2 == 0) {
				printf("%4d ", a[i][j]);
				dem ++;	
			 }		 
	    }
	}
	
	
	// Cac so le nam trong tam giac duoi duong cheo phu
	printf("\nCac so le nam trong tam giac duoi cua duong cheo phu:\n");
	printf("\nIn ra: ");
	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j >= n - 1  && a[i][j] % 2 != 0) {
                printf("%3d ", a[i][j]);
            }
        }
    }
	return 0;
}
