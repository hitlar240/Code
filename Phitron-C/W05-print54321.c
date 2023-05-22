#include<stdio.h>

void loop(int i)
{
    if(i == 0) return; // base case
    
    printf("%d ",i);

    //i--;
    loop(i-1); // loop() waiting for another copy of loop()
    //loop(--i); // pre-decrement
}

int main()
{
    //int x = 5;
    //loop(x); 
    loop(5); // man() waiting for loop()

return 0;
}