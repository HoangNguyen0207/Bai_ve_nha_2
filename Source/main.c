#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include "E:\C_advanced\baivenha2\Header\calc.h"
#include"E:\C_advanced\baivenha2\Header\convert.h"
#include"E:\C_advanced\baivenha2\Header\m_string.h"
#define MAX 1000

int main(){
    //------check m_string, calc---------------
    int arr[MAX];
    int n;
    printf("nhap so phan tu mang = ");
    scanf("%d",&n);
    nhapmang(arr,n);
    tongArr(arr,n);
    maxOfArr(arr,n);
    minOfArr(arr,n);
    timkiemArr(arr,n);
    chen_mang(arr,n);

    //------check convert----------------
    Hex2Dec(100);
    printf("%d\n",Decimal2Binary(15));
    
    return 0;
}