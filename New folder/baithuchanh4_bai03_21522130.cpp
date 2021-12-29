#include <iostream>
using namespace std;
double tinh_xmun(int x, int n)
{
    int P = 1;
    for (int i = 1; i <= n; i++)
    {
        P = P * x;
    }
    return P;
}
int main()
{
    int x, n;
    do { cout << "Nhap x: "; cin >> x; } while (x <= 0);
    do { cout << "Nhap n: "; cin >> n; } while (n <= 0);
    cout << "Tong x^n la : " << tinh_xmun(x, n);
    return 0;
}
