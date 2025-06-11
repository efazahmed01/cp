#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int> &a, int no)
{
	int carry = 0;
	for(int i = 0; i < a.size(); i++)
	{
		int product = a[i] * no + carry;
		a[i] = product % 10;
		carry = product / 10;
	}
	while(carry)
	{
		a.push_back(carry % 10);
		carry /= 10;
	}
}

void bigFactorial(int n)
{
	vector<int> a;
	a.push_back(1);
	for(int i = 2; i <= n; i++)
	{
		multiply(a, i);
	}
	for(int i = a.size() - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	bigFactorial(n);
	return 0;
}
