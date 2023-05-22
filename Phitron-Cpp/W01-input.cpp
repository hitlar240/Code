#include<iostream> // header file -> input output stream
#include<iomanip> // header file -> input output manipulation

// using namespace std; // standard namespace library

int main()
{
    int a,b;
    std::cin>>a>>b;
    // cin>>a>>b;

    std::cout<<"roll:"<<" "<<a<<" gpa:"<<b<<std::endl;
    // cout<<"roll:"<<" "<<a<<" gpa:"<<b<<endl;

    float c;
    std::cin>>c;

    std::cout<<"c="<<c<<std::endl;
    // cout<<"c="<<c<<endl;
    std::cout<<"c="<<std::fixed<<std::setprecision(2)<<c<<std::endl;
    // cout<<"c="<<fixed<<setprecision(2)<<c<<endl;

return 0;
}