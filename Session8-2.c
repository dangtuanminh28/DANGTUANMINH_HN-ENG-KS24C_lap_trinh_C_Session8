#include <stdio.h>
int main(){
	// khai bao mang va gan gia tri cho 1 mang
	int arr[5] = {3, 5, 5, 3, 7};
	int n;
	// yeu cau nguoi dung nhap vao 1 phan tu 
	printf("nhap 1 phan tu bat ky: ");
	scanf("%d", &n);
	// kiem tra phan tu co ton tai trong mang
	for(int i = 0; i < 5; i++){
		if(arr[i] == n){
			printf("vi tri phan tu trong mang la: %d \n", i);
			return 0;
		}   	
	}
	printf("phan tu khong ton tai trong mang.");
	return 0;
}
