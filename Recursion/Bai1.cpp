#include <iostream>
#include <math.h>
using namespace std;

struct Bai1
{
    
};

double S1(int n)
{
    if (n == 1)
        return 1;
    return 1 / (float)n + S1(n - 1);
}
double T(int n)
{
    if (n == 1)
        return 1;
    return n * T(n - 1);
}
double S2(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return pow(x, n) + S2(x, n - 1);
}
double S3(int x, int n)
{
    if (n == 1)
        return x;
    return pow(x, 2 * n + 1) + S3(x, n - 1);
}
double S4(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return pow(x, n) / (T(n - 1) * n) + S4(x, n - 1);
}
int main()
{
    int n = 5;
    int x = 2;
    printf("S1(%d) = %.3lf \n", n, S1(n));
    printf("T(%d) = %.0lf \n", n, T(n));
    printf("S2(%d , %d) = %.0lf \n", n, x, S2(x, n));
    printf("S3(%d , %d) = %.0lf \n", n, x, S3(x, n));
    printf("S4(%d , %d) = %.3lf \n", n, x, S4(x, n));
    cout<<"ahihi";
    int* a= new int [10];
        
    delete[] a;
    return 0;
}