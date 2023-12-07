#include <stdio.h>

enum gender {male,female};
enum season {spring,summer,autumn,winter};

int main(){
    enum gender a;
    do{printf("0>>>男,1>>>女。");
      scanf("%d",&a);
    }while (a<male || a>female);

  
    switch (a)
    {
     case 0:printf("男\n");
        break;
        
    default:printf("女\n");
        break;
    }

    return 0;
   
}