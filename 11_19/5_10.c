#include <stdio.h>

int main(){
    int a[4][3];
    int b[3][4];
    int result[4][4]={0};
    int i,j,h;


    printf("输入矩阵a的元素。\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }


    printf("输入矩阵b的元素。\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(h=0;h<3;h++){
                int temp[3];
                temp[h]=a[i][h]*b[h][j];
                result[i][j]+=temp[h];

            }
            

        }
    }

    printf("结果为：\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%3d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

