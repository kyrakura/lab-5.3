#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
    double kp, kk, p;
    int n;
    cout << "kp = "; cin >> kp;
    cout << "kk = "; cin >> kk;
    cout << "n = "; cin >> n;
    double dk = (kk - kp) / n;
    double k = kp;
    while (k <= kk)
    {
        p = z(1 - pow(k, 2)) + pow(z(1 + z(k)), 2);
        cout << k << " " << p << endl;
        k += dk;
    }
    return 0;
}
double z(const double x)
{
    if (abs(x) >= 1)
        return (1 - sin(x)) / (exp(x) + pow(cos(x), 2));
    else
    {
        double S = 0;
        int j = 0;
        double a = 1;
        double b = 1 / exp(-x);
        S = a * b;
        do
        {
            j++;
            double R = -x * x / (2 * j - 1) * (2 * j - 1) * 3 * j;
            a *= R;
            S += a;
        } while (j < 7);
        return S;
    }
}