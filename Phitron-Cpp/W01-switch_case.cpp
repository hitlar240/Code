#include<iostream>
using namespace std;

int main()
{
//even-odd
    int n;
    cin>>n;

    switch (n%2)
    {
    case 0: cout<<"even "<<n<<endl;
            break;
    //case 1: cout<<"odd "<<n<<endl;
            //break;
    
    default: cout<<"case odd "<<n<<endl;
            //break;
    }


//vowel-consonant
    // char c;
    // cin>>c;

    // switch (c)
    // {
    // case 'a': cout<<"vowel "<<c<<endl;
    //         //break;
    // case 'e': cout<<"vowel "<<c<<endl;
    //         //break;
    // case 'i': cout<<"vowel "<<c<<endl;
    //         //break;
    // case 'o': cout<<"vowel "<<c<<endl;
    //         //break;
    // case 'u': cout<<"vowel "<<c<<endl;
    //         //break;
    
    // default: cout<<"consonant "<<c<<endl;
    //         //break;
    // }


return 0;
}