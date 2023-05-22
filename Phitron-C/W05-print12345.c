#include<stdio.h>

void loop(int i)
{
    printf("%d ",i);

    if(i == 5) // base case
        return; // when loop(0) returns all waiting... loop(i+1) returns
    //i++;
    loop(i+1); // loop() waiting for another copy of loop()
    //loop(++i); // pre-increment
}

int main()
{
    //int x = 1;
    //loop(x); 
    loop(1); // man() waiting for loop()

return 0;
}