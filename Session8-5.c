#include <stdio.h>
int main() {
	// khai bao mang 
	int n;
	// nhap gia tri tu nguoi dung va kiem tra so nguyen
	do{
		printf("nhap 1 so nguyen bat ky: ");
		scanf("%d", &n);
	}while(n < 0);
	
	printf("\n");
	// khai bao mang 2 chieu
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Moi ban nhap arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);  
		}
	}
	
	//Tinh tong cac phan tu duong bien
  	int s=0;
	for(int i=0;i<n;i++)
	{
	    s=s+arr[i][0]+arr[i][n-1];
	}
	for(int j=1;j<n-1;j++)
	{
	    s=s+arr[0][j]+arr[n-1][j];
	}
  
  printf("\n");
  printf("Tong cac phan tu duong bien cua ma tran tren la: %d", s);
  return 0;
}
