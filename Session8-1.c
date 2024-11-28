#include <stdio.h>
int main(){
	// khai bao mang va gan gia tri cho 1 mang
	int arr[5] = {3, 5, 5, 3, 7};

	// In ra tung phan tu trong mang tu cuoi ve dau
    for (int i = 4; i >= 0;i--){
    	printf("%d \n", arr[i]);
	}	
	return 0;
}
