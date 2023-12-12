#include "W00-tomheader.cpp"  //userdefined
// using namespace inout; //userdefined namaespace

int main()
{
    int a = intgr::input("Enter Integer: ");
    intgr::print("Integer a = ",a);

    float b = flt::input("Enter Float: ");
    flt::print("Float b = ",b);

    std::string name = str::input("Enter Name: ");
    str::print("Name: ",name);

return 0;
}