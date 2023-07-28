/* HO VA TEN: TRUONG VAN HIEN
MSSV: 20194276
Lop thuc hanh: 710817 */

#include <stdio.h>
#include <stdlib.h>
int *a;
int n, tmp;
int main(){
    //printf("Truong Van Hien - 20194276\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int *) malloc( n * sizeof( int ));

    for(int i = 0; i < n; i++)
    scanf("%d", a + i);
    printf("The input array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(*(a+i)>*(a+j)){
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    }

    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
    free(a);
    return 0;
}