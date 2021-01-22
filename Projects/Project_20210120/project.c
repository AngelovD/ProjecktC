#include <stdio.h>

/*Напишете функция, която получава като параметър две числа, и връща като резултат броя позициите в бит-овото представяне на числата, на които двете числа имат различни стойности.
Водещите нули да се игнорират(тоест броенето да започне от най-старшия вдигнат бит на по-голямото число).
Пример:
Вход: 15 8
Изход: 3
Обяснение: 15 -> 1111, 8 -> 1000, двете числа имат различни битове на позиции 1, 2 и 3. */

unsigned int findDif(int a, int b);
void deciKumBin(int n);

int main(void){

    int a, b;

    printf("\nEnter decimal value for A: ");
    scanf("%d", &a);

    if (a < 0){
        a = ~a;
        a += 1;
    }
    printf("You entered A with absolute value of %d.\n", a);
    deciKumBin(a);


    printf("\n\nEnter decimal value for B: ");
    scanf("%d", &b);

    if (b < 0){
        b = ~b;
        b += 1;
    }
    printf("You entered B with absolute value of %d.\n", b);
    deciKumBin(b);


    printf("\n\nThe sum of the differences between the numbers on bit level is: %d.\n\n", findDif(a, b));

    return 0;
}

unsigned int findDif(int a, int b){
    int res = a ^ b;
    unsigned int counter = 0;
    unsigned char cCheck = 1;

    while (res > 0){
        counter += res & cCheck;
        res = res >> 1;
    }
    return counter;
}

void deciKumBin(int n){

    printf("Binary value is: ");

    unsigned i;
    unsigned iCheck = 31;
    for (i = 1 << iCheck; i > 0; i = i >> 1){
        (n & i) ? printf("1") : printf("0");
    }
}