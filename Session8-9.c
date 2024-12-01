#include <stdio.h>
int main() {
// Khai bao mang
	int arr[] = {2, 4, 2, 7, 4, 9, 2};
	int count,n;
	int count_max = 0;
// Duyet tung phan tu neu phan tu do lap lai thi tang 
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
        count = 0;
        for (int j = 0; j < sizeof(arr)/sizeof(int); j++){
            if (arr[i]==arr[j])
            {
                count++;
            }
        
        }
        if (count > count_max){
            count_max = count;
            n = arr[i];
        }
    }
    // In ra ket qua
    printf("Phan tu xuat hien nhieu nhat la: %d\n",n);
    printf("So lan xuat hien: %d\n", count_max);
    return 0;
}
