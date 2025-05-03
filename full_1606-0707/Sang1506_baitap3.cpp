#include <stdio.h>
int main(){
	int n; 
	printf("Nhap 1 so nguyen duong n co 3 chu so: ");
	scanf ("%d", &n);
	int tram = n/100;
	int chuc = (n%100)/10;
	int donvi = (n%100)%10;
	
	int tong = tram + chuc + donvi ;
	int tich = tram * chuc * donvi;
	printf ("\nTong: %d\nTich: %d", tong, tich);
}
