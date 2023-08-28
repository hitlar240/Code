//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
// Modifiers
    // s+= -> append another string.
    // s.append() -> append another string.
    // s.push_back() -> add character to the last of the string.
    // s.pop_back() -> remove the last character of the string.
    // s= -> assign string.
    // s.find() -> find the starting index of portion of string
    // s.assign() -> assign string.
    // s.erase() -> erase characters from the string.
    // s.replace() -> replace a portion of the string.
    // s.insert() -> insert a portion to a specific position.
//------------------------------------------------------------//


    // string a;
    // a = "Hello"; //assign string
    // // a.assign("Hello"); //assign string

    // string b = "World";

    // // a += b; // a = a + b; //operator overloading
    // // a.append(b);

    // // b += "!"; //b = b + "!";
    // // b.push_back('!'); //add character to the last

    // // b.pop_back(); //remove the last character - worl
    // // b.pop_back(); //remove the last character - wor

    // cout<<a<<endl;
    // cout<<b<<endl;


    string c = "tom al";

    cout<<c.find("all")<<endl; // -1 if not found
    int i = c.find("all");
    cout<<i<<endl;

    // s.erase(index,length);
    // c.erase(3,1); // tomal
    // c.erase(3,3); // tom
    // c.erase(3); // tom

    // s.replace(index,length,string);
    // c.replace(3,1,"BAL"); // replace = erese + insert

    // c.replace(4,0,"BAL "); // insert at c[4]
    c.insert(4," BAL "); // insert at c[4]

    cout<<c<<endl;


return 0;
}