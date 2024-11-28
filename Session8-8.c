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
	
	int sum = 0;
  	for (int i = 0; i < n; i++){
        for (int j = n-1; j >= 0; j--){
        	//tinh tong cac phan tu tren duong cheo phu
        	if(i + j == n - 1){
				sum = sum + arr[i][j];
			}	
        }
    }
  
  printf("\n");
  printf("Tong cac phan tu tren duong cheo phu cua ma tran la: %d", sum);
  return 0;
}
