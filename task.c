#include <stdio.h>

long deciKumBin(long n);
int bitovoPred(int A, int B, int nCount);

int main(){
    
    int A, B, nCount = 0;
    printf("Enter decimal value for A: ");
    scanf("%d", &A);
    printf("You entered A with value %d.\nInto binary this is: %ld\n", A, deciKumBin(A));
    printf("\nEnter decimal value for B: ");
    scanf("%d", &B);
    printf("You entered B with value %d.\nInto binary this is: %ld\n", B, deciKumBin(B));
    long bA = deciKumBin(A);
    long bB = deciKumBin(B);
    printf("%ld\n", bA);
    printf("%ld\n", bB);
    printf("%d\n", bitovoPred(A, B, nCount));
    
    return 0;
}

int bitovoPred(int A, int B, int nCount){
    int C, i = 0;
    C = A ^ B;
    for (;i<(sizeof(int)*8);i++) {
        if(1&C) nCount++; C = C>>1;
    }
    return nCount;
}

long deciKumBin(long n) {
    int rem;
    long binary = 0, i = 1;
  
    while(n != 0) {
        rem = n%2;
        n = n/2;
        binary= binary + (rem*i);
        i = i*10;
    }
    return binary;
}