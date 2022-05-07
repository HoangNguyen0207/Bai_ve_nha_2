#include"E:\C_advanced\baivenha2\Header\convert.h"
//function converts Decimal to Binary
long Decimal2Binary(int n){
    long binary = 0;
    int count = 0;
    while(n>0){
        binary += (n%2) * pow(10,count);
        n /= 2;
        count++;
    }
    return binary;
}
//--------------------------------------
//function converts Hexa to Decimal
void inverse_hexArr(char arr[], int n){
    int j = n-1;
    for(int i=2; i<j; i++){
        char tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        j--;
    }
}
void Hex2Dec(int n){
    char hex[100];
    int index = 2;
    hex[0] = '0';
    hex[1] = 'x';
    while(n>0){
        if(n%16 >= 0 && n%16 <= 9){
            hex[index] = n%16 + 48;
            index++;
            n /= 16;
        }
        if(n%16 >= 10 && n%16 <= 15){
            hex[index] = n%16 + 55;
            index++;
            n /= 16;
        }
    }
    inverse_hexArr(hex,strlen(hex));
    printf("%s\n",hex);
}