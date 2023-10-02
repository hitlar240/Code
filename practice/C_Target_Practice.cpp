#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int sum = 0;
        for(int i=1; i<=10; i++)//row
        {
            for(int j=1; j<=10; j++) //column
            {
                char ch; cin>>ch;
                if(ch=='X')
                {
                    if(i>=5 && i<=6 && j>=5 && j<=6)
                        sum += 5;
                    else if(i>=4 && i<=7 && j>=4 && j<=7)
                        sum += 4;
                    else if(i>=3 && i<=8 && j>=3 && j<=8)
                        sum += 3;
                    else if(i>=2 && i<=9 && j>=2 && j<=9)
                        sum += 2;
                    else //if(i>=1 && i<=10 && j>=1 && j<=10)
                        sum += 1;
                }
            }
        }
        cout<<sum<<endl;
    }

return 0;
}