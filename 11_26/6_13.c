#include <stdio.h>

void mat_add(const int a[4][3],const int b[4][3],int c[4][3][2]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            c[i][j][0]=a[i][j];
            c[i][j][1]=b[i][j];
        }
    }
}


void mat_print(const int m[4][3][2]){
    int i,j,l;
    for(l=0;l<2;l++){
        printf("第%d次考试的分数\n",l+1);
        for(i=0;i<4;i++){
            for(j=0;j<3;j++){
                printf("%4d ",m[i][j][l]);

            }
            printf("\n");
        }
    }
}

int main(){
    int tensu1[4][3]={{91,63,78},{67,72,46},{89,34,53},{32,54,34}};
    int tensu2[4][3]={{97,67,82},{73,43,46},{97,56,21},{85,46,35}};
    int tensu[4][3][2];

    mat_add(tensu1,tensu2,tensu);
    mat_print(tensu);

    return 0;
}