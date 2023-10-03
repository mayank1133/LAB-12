int main() {
    int n = 15; // Number of terms to use in the approximation
    double e = 1.0; // Initialize e to 1.0, the first term of the series
    double factorial = 1.0; // Initialize the factorial to 1.0

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial; 
    }
    printf("Estimated value of e with %d terms: %lf\n", n, e);

    return 0;
}
