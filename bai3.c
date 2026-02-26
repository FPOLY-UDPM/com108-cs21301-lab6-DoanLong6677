/******************************************************************************
 * Họ và tên: Phan Lạc Đoàn Long
 * MSSV:      PS47837
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size) {
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// HÀM SẮP XẾP MẢNG THEO THỨ TỰ GIẢM DẦN
void sortDescending(int arr[], int size) {
    int i, j, temp;
    for(i = 0; i < size; i++){ 
        for(j = 0; j < size; j++){ 
    
        //Nếu mang[i] > mang[j] thì hoán đổi
        if(arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        } 
    }

    //Xuat mang
    printf("Kết quả mảng đã sắp xếp là: ");
    for(i = 0; i < size; i++){ 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];

    randomArray(arr, n, 0, 100);
    printArray(arr, n);

    sortDescending(arr, n); // Sắp xếp mảng theo thứ tự giảm dần

    return 0;
}