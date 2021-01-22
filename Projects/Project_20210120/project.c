#include <stdio.h>

/*Напишете функция, която получава като параметър две числа, и връща като резултат броя позициите в бит-овото представяне на числата, на които двете числа имат различни стойности. Водещите нули да се игнорират(тоест броенето да започне от най-старшия вдигнат бит на по-голямото число).
Пример:
Вход: 15 8
Изход: 3
Обяснение: 15 -> 1111, 8 -> 1000, двете числа имат различни битове на позиции 1, 2 и 3. */

unsigned int findDif(unsigned int a,unsigned int b){

    unsigned int res = a^b;
    unsigned int counter=0;
    unsigned char cCheck = 1;

    while(res>0){
        counter+=res&cCheck;
        res=res>>1;
    }
    return counter;
}

int main(void){

    unsigned int x,y;

    printf("First number= ");
    scanf("%d",&x);
    printf("Second number= ");
    scanf("%d",&y);

    unsigned int res = findDif(x,y);

    printf("Binary difference: %d",res);


    return 0;
}