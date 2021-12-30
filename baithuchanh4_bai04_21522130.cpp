#include <iostream>
using namespace std;
long long n_gt_gt(int n)
{
	if (n == 1 or n==2) return n;
    if (n % 2 == 0) return n*n_gt_gt(n - 2);
	else return n * n_gt_gt(n - 2);
}
int main()
{
	int n;
	do { cout << "Nhap n : "; cin >> n; } while (n <= 0);
	cout<<n_gt_gt(n);
	return 0;
}