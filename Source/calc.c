#include "E:\C_advanced\baivenha2\Header\calc.h"
void nhapmang(int arr[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
int tongArr(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int maxOfArr(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int minOfArr(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n; i++){
        if(min < arr[i]){
            min = arr[i];
        }
    }
    return min;
}
void timkiemArr(int arr[], int n){
    int a;
    printf("Nhap so can tim = ");
    scanf("%d",&a);
    int count = 0;
    printf("Vi tri can tim = ");
    for(int i=0; i<n; i++){
        if(arr[i] == a){
            printf("%d ", i);
            count++;    
        }
    }
    printf("\n");
    if(count == 0){
        printf("khong tim thay gia tri %d trong mang\n",a);
    }
}