#include<iostream>
#include<math.h>
using namespace std;
void chuyen_doi(int n)
{
	int mu = 0;
	int thap_phan = 0;
	while (n > 0)
	{
		thap_phan += (n % 10) * pow(2, mu);
		mu++;
		n /= 10;
	}
	cout << "Chuyen ve so he thap phan: " << thap_phan;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so nhi phan: ";
		cin >> n;
	} while (n < 0);
	chuyen_doi(n);
	return 0;
}