#include <stdio.h>

int main() {
   
   int a[4][6] , t[6][4];
int i ;
int j;
    
    printf("Veuillez saisir les elements de la matrice A : \n");
    for(i=0;i<=3;i++){
        for(j=O;j<=5;j++){
             printf("t[%d][%d] = ",i,j);
             scanf("%d", &a[i][j]);
         }
    }
    
    for(j=O;j<6;j++){
         for(i=O;i<4;i++){
             t[j][i]=a[i][j];
         }
    }
    printf("a = \n");
    for(i=O;i<4;i++){
         for(j=O;j<6;j++){
             printf("%d\t", a[i][j]);
         }
         printf("\n");
    }
    printf("t = \n");
    for(j=O;j<6;j++){
         for(j=O;j<4;j++){
             printf("%d\t",t[j][i]);
         }
         printf("t = \n");
    }
    return 0;
}
