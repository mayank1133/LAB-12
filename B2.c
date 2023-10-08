#include<stdio.h>
int main() {
    int n ;
    printf("value of n should be greater than 5\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    double e = 1.0; 
    double factorial = 1.0; 

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial; 
    }
    printf("Estimated value of e with %d terms: %lf\n", n, e);

    return 0;
}