#include<stdio.h>

int main(){
    int n,i;
    printf("enter n\n");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i, i*n);
      
    }


    return 0;
}