#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

// void fun(int* p) // value of pointer var. Pn (address of n)
// {
//     *p = 20; // changing value of the var. at address Pn 
// }

void fun(int* &P) // & (reference) P = Pn
{
// not a copy of Pn
    cout<<"P= "<<P<<endl; // p = Pn
    cout<<"address of P= "<<&P<<endl; //  address of P = address of Pn

    P = NULL; // Pn = NULL
}

int main()
{
    int n = 10;
    int* Pn; // pointer var.  
    Pn = &n; // assign address of n

    cout<<"Pn= "<<Pn<<endl; // address of n
    cout<<"address of Pn= "<<&Pn<<endl; // address of pointer Pn
    cout<<"n= "<<*Pn<<endl; // n

    fun(Pn); // passing pointer

    cout<<"Pn = "<<Pn<<endl;
    // cout<<*Pn<<endl;

return 0;
}