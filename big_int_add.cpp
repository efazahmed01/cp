#include<bits/stdc++.h>
using namespace std;

int char_to_degit(char ch)
{
    return ch - '0';
}

char degit_to_char(int d)
{
    return d + '0';
}

int main()
{
    string a,b; cin >> a >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    string ans = "";
    
    if(a.size() < b.size())
        swap(a,b);
    
    int carry = 0;
    
    for(int i = 0; i < b.size(); i++)
    {
        int sum = char_to_degit(a[i]) + char_to_degit(b[i]) + carry;
        carry = sum/10;
        int res = sum%10;
        ans+=degit_to_char(res);
    }
    
    for(int i = b.size(); i < a.size(); i++)
    {
        int sum = char_to_degit(a[i]) + carry;
        carry = sum/10;
        int res = sum%10;
        ans+=degit_to_char(res);
    }
    
    if(carry)
    {
        ans+='1';
    }
    
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
}
