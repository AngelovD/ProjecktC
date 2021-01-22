#include <stdio.h>

/* Напишете функция, която получава като параметър две числа, 
и връща като резултат броя позициите в бит-овото представяне
на числата, на които двете числа имат различни стойности. 
Водещите нули да се игнорират(тоест броенето да започне от
най-старшия вдигнат бит на по-голямото число).
Пример:
Вход: 15 8
Изход: 3
Обяснение: 15 -> 1111, 8 -> 1000, двете числа имат 
различни битове на позиции 1, 2 и 3. */

long deciKumBin(int n);
int bitovoPred(int A, int B, int nCount);

int main(){
    
    int A, B, nCount = 0;
    printf("Enter decimal value for A: ");
    scanf("%d", &A);
    printf("You entered A with value of %d.\nInto binary this is: %ld\n", A, deciKumBin(A));
    printf("\nEnter decimal value for B: ");
    scanf("%d", &B);
    printf("You entered B with value of %d.\nInto binary this is: %ld\n", B, deciKumBin(B));
    printf("The sum of the differences between the numbers on bit level is: %d.\n", bitovoPred(A, B, nCount));
    
    return 0;
}

int bitovoPred(int A, int B, int nCount){
    int C, i = 0;
    C = A ^ B;
    for (;i<(sizeof(int)*8);i++) {
        if(1&C) {
            nCount++;
            C = C>>1;
        }
    }
    return nCount;
}

long deciKumBin(int n) {
    int rem;
    long binary = 0, i = 1;
  
    while(n != 0) {
        rem = n%2;
        n = n/2;
        binary = binary + (rem*i);
        i = i*10;
    }
    return binary;
}