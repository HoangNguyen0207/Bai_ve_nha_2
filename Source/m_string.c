#include"E:\C_advanced\baivenha2\Header\m_string.h"
#include "E:\C_advanced\baivenha2\Header\calc.h"
//fuction compares 2 Array
int is_equal_arr(int arr1[], int num1, int arr2[], int num2){
   if(num1 != num2) return 0;
   else{
       for(int i=0; i<num1; i++){
           if(arr1[i] != arr2[i]) return 0;
       }
       return 1;
   }
}
//-----------------------------------------------------------
//fuction inserts numbers into exsisting array
void xuatmang(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void chen_mang(int arr[], int n){
    const int number;
    int index;
    do{
        printf("Nhap so phan tu muon chen = ");
        scanf("%d",&number);
    }while(number < 0);
    do{
        printf("Nhap index chen = ");
        scanf("%d",&index);
    }while(index >= n && index < 0);
    int arr_insert[100];
    printf("nhap mang muon chen co %d phan tu = ",number);
    nhapmang(arr_insert,number);
    int arr2[100];
    for(int i=0; i<(n+number); i++){
        int count = number;
        if(i < index){
            arr2[i] = arr[i];
        }
        if(i == index){
            while(count > 0){
                arr2[i] = arr_insert[i - index];
                count--;
                i++;
            }                                                                                                                                                             
        }
        if(i > index){
            arr2[i] = arr[i-number];
        }
    }
    xuatmang(arr2,n+number);
}