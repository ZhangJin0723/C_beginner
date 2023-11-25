#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4]){
    int i,j,h;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(h=0;h<3;h++){
                int temp=0;
                temp=a[i][h]*b[h][j];
                c[i][j]+=temp;            
            }
        }
    }

}


int main(){
    int i,j;
    int a[4][3],b[3][4],c[4][4];

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("b[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    mat_mul(a,b,c);

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}