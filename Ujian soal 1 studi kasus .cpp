#include <stdio.h>
#include <math.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long f(int n) {
    unsigned long long fact = factorial(n);
    double denominator = pow(2, n);  
    double result = (double)fact / denominator;
    return (unsigned long long)ceil(result);
}

int main() {
    int n;
    printf("Masukkan nilai bilangan: ");
    scanf("%d", &n);
    printf("f(%d) = %llu\n", n, f(n));
    return 0;
}

