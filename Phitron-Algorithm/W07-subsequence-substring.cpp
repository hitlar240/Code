#include<bits/stdc++.h>
using namespace std;

int sub(string a, int i, string b, int j) //subsequence
{
    int cnt = 0;
    while(i!=0 && j!=0)
    {
        if(a[i-1]==b[j-1])
        {
            cnt++; i--; j--;
        }
        else
        {
            j--;
        }
    }
    return cnt;
}

// int sub(string a, int i, string b, int j) //substring
// {
//     int cnt = 0;
//     while(i!=0 && j!=0)
//     {
//         if(a[i-1]==b[j-1])
//         {
//             cnt++; i--; j--;
//         }
//         else
//         {
//             cnt = 0;
//             i = a.size();
//             j--;
//         }
//     }
//     return cnt;
// }

int main()
{
    string a,b; cin>>a>>b;

    if(a.size()==sub(a,a.size(),b,b.size())) //O(s1+s2)
        cout<<"A is a subsequence/string of B\n";
    else
        cout<<"A is not a subsequence/string of B!\n";

return 0;
}