#include <stdio.h>

int main() {
    int a[50][50], m, n, i, j;

    // Nh?p s? dòng và s? c?t c?a ma tr?n, yêu c?u nh?p l?i n?u không h?p l?
    do {
        printf("Nhap so dong cua ma tran: ");
        scanf("%d", &m);
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &n);
        if (m <= 0 || n <= 0) {
            printf("Nhap sai! Yeu cau nhap so dong va so cot lon hon 0.\n");
        }
    } while (m <= 0 || n <= 0);

    // Nh?p ma tr?n t? ngu?i dùng
    printf("Nhap cac phan tu cua ma tran %d x %d:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Xu?t ma tr?n v?a nh?p
    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // Tính tích các ph?n t? trong ma tr?n
    int T = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            T *= a[i][j];
        }
    }
    printf("\nTich cua ma tran: %d", T);

    // Tính t?ng các s? ch?n trong ma tr?n
    int s = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] % 2 == 0) {
                s += a[i][j];
            }
        }
    }
    printf("\nTong cac so chan trong ma tran: %d", s);

    // Ð?m s? lu?ng s? âm trong ma tr?n
    int dem = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < 0) {
                dem++;
            }
        }
    }
    printf("\nCo %d so am trong ma tran", dem);

    // Tìm giá tr? l?n nh?t trong ma tr?n
    int max = a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    printf("\nGia tri lon nhat trong ma tran la: %d", max);

    // Tìm giá tr? nh? nh?t trong ma tr?n
    int min = a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("\nGia tri nho nhat trong ma tran la: %d", min);

    // Tìm và in ra v? trí c?a s? nguyên x trên ma tr?n
    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);
    int timThay = 0;
    printf("Vi tri cua %d tren ma tran:\n", x);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == x) {
                printf("(%d, %d)\n", i, j);
                timThay = 1;
            }
        }
    }
    if (!timThay) {
        printf("Khong tim thay %d tren ma tran.\n", x);
    }

    // Kiem tra ma tran có chua toàn so duong hay không và tìm so âm lon nhat
    int soam = 0;
    for (i = 0; i <m ; i++){
    	for (j = 0; j <n ; j++){
    	if (a[i][j] < 0){
    	     soam++ ;
    	}
    }
    }
    printf ("\nCo %d so am tren mang 2 chieu", soam);
    
    int maxam = min;
    int coam = 0;
    for (i = 0; i <m ; i++){
    	for (j = 0; j <n ; j++){
    	if (a[i][j] < 0){
    	     coam++ ;
    	     if (a[i][j] > maxam ){
    	     maxam = a[i][j];
    	     
    	}
    	}
    }
    }
    
    if (coam == 0){
    	printf("\nMang chua toan so duong");
    }else{
    	printf("\nSo am lon nhat trang mang: %d", maxam);
    }
    
    
    // Nhap so nguyên r (0 <= r < m) và tìm giá tri nho nhat trên dòng r cua ma tran
     int r;
    do {
        printf("\nNhap r (0 <= r < %d): ", m);
        scanf("%d", &r);
        if (r < 0 || r >= m) {
            printf("Nhap sai! Yeu cau nhap r thoa man 0 <= r < %d.\n", m);
        }
    } while (r < 0 || r >= m);

    int minR = a[r][0];
    for (j = 1; j < n; j++) {
        if (a[r][j] < minR) {
            minR = a[r][j];
        }
    }
    printf("Gia tri nho nhat tren dong %d cua ma tran la: %d\n", r, minR);

    
     // Nhap so nguyên c (0 <= c < n) và tinh tich tat ca cac phan tu  trên dòng c cua ma tran
    int c;
    do{
    	printf ("\nNhap c:  ");
    	scanf ("%d", &c);
    	if(c < 0  || c > n){
    		printf ("\nNhap sai !!! ");
    	}
    }while (c < 0  || c > n) ;
    
    int Tich = 1;
    for (i = 0; i <m ; i++){
    	for (j = 0; j <n ; j++){
    	if (j == c){
    		Tich *= a[i][j];
    	}
    }
    }
    
    printf ("\nTich tat ca cac phan: %d", Tich);
    return 0;
}

