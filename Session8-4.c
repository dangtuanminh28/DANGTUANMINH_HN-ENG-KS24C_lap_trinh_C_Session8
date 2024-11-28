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
  
  int max = arr[0][0];
  //Tim phan tu lon nhat trong mang
  for(int i = 0; i < n; i++){
  	for(int j = 0; j < n; j++){
		if(arr[i][j] > max)
		{
			max = arr[i][j];
		}
	}
  }
  
  printf("\n");
  printf("Gia tri lon nhat trong mang la: %d", max);
  return 0;
}
