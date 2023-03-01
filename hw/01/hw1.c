#include <stdio.h>

double integrate(double (*f)(double),double a, double b, double step) {
    double sum=0.0;
    for (double x=a; x<b; x+=step){
        sum += f(x)*step;
    }
    return sum;
}

double func(double x) {
    return x*x*x + 2*x - 1;
}

int main() {
    double a = 1.0;
    double b = 2.0;
    double step = 0.001;
    printf("integrate(f, %f, %f)=%f\n", a, b, integrate(func, a, b, step));
    return 0;
}
