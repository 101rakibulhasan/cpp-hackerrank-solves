#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long long int b;
    char c;
    float d;
    double e;

    scanf("%d %lld %c %f %lf", &a,&b,&c,&d,&e);
    printf("%d\n%lld\n%c\n%.2f\n%.5lf\n", a,b,c,d,e);
    return 0;
}
