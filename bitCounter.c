/*Напишете функция, която получава като параметър две числа
и връща като резултат броя на позициите в битовото представяне
на числата, на които двете числа имат различни стойности.*/
#include <stdio.h>

int bitCounter(int a, int b);

int main(void){
    int a,b;
    printf("Insert number 1: ");
    scanf("%d", &a);
    printf("Insert number 2: ");
    scanf("%d", &b);
    printf("Number of positions with different bits: %d\n", bitCounter(a, b));
    return 0;
}

int bitCounter(int a, int b){
    if(a<0){
        a = ~a;
        a += 1;
    }
    if(b<0){
        b = ~b;
        b += 1;
    }
    int result = a^b;
    int counter = 0;
    int remainder;
    while (result > 0){
        remainder = result%2;
        result /= 2;
        if(remainder==1){
            counter++;
        }
    }
    return counter;
}
