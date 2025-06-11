#include<bits/stdc++.h>
using namespace std;

int char_to_digit(char ch)
{
    return ch - '0';
}

char digit_to_char(int d)
{
    return d + '0';
}

int main()
{
    string a; cin >> a;
    int b; cin >> b;
    string res = "";
    reverse(a.begin(),a.end());
    
    int carry = 0;
    for(int i = 0; i < a.size(); i++)
    {
        int product = char_to_digit(a[i]) * b + carry;
        int ans = product%10;
        res+=digit_to_char(ans);
        carry = product/10;
    }
    while(carry)
    {
        res+=digit_to_char(carry%10);
        carry/=10;
    }
    reverse(res.begin(),res.end());
    cout << res << endl;
}
