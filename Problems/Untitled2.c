#include <stdio.h>

int main() {
    int t1 = 1, t2 = 1, nextTerm = 0;
    int sum = 0;

    printf("Fibonacci series up to 1000: %d, %d, ", t1, t2);

   /* for (nextTerm = t1 + t2; nextTerm <= 1000; nextTerm = t1 + t2) {
        printf("%d, ", nextTerm);
        if (nextTerm % 3 == 0 || nextTerm % 5 == 0 || nextTerm % 7 == 0) {
            sum += nextTerm;
        }
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7: %d\n", sum);*/

    return 0;
}