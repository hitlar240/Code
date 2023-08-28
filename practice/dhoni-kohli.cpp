//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;

class Cricketer
{
    public:
	int jersey_no;
	char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 07;
    char c[100] = "India";
    strcpy(dhoni->country, c);


    Cricketer *kohli = new Cricketer;
    kohli = dhoni;
    // kohli->jersey_no = dhoni->jersey_no;
    // strcpy(kohli->country, dhoni->country);

    // delete dhoni;

    cout<<dhoni->jersey_no<<endl;
    cout<<dhoni->country<<endl;

    cout<<kohli->jersey_no<<endl;
    cout<<kohli->country<<endl;

return 0;
}