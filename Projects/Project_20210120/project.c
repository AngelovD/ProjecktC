#include <stdio.h>

int findDif(int a, int b){

    int res = a^b;
    int counter=0;
    unsigned char cCheck = 1;

    while(res>0){
        counter+=res&cCheck;
        res=res>>1;
    }
    return counter;
}

int main(void){

    int x,y;

    printf("First number= ");
    scanf("%d",&x);
    printf("Second number= ");
    scanf("%d",&y);

    int res = findDif(x,y);

    printf("%d",res);


    return 0;
}