/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include<stdio.h>

int main(){
    //printf("Truong Van Hien - 20194276\n");
    int a[7] = {13, -355, 235, 47, 67, 943, 1222}; 
    printf("address of first five elements in memory.\n");
    for(int i = 0; i < 5; i++)  printf("\ta[%d]                ",i);
    printf("\n");
    for(int i = 0; i < 5; i++)  printf("\t%p ",&a[i]);
    return 0;
}