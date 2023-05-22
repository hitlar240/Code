#include<stdio.h>

void loop(int i)
{

    if(i == 5+1) // base case
        return; // when loop(6) returns all waiting... loop(i+1) returns
                // loop(6) returns to loop(5) and then print 5 then loop(5) returns to loop(4)... 
                // ... loop(1) print 1 and return to main()
    //i++;
    loop(i+1); // loop(i) waiting for another copy of loop(i+1)
    //loop(++i); // pre-increment
    
    printf("%d ",i);
}

int main()
{
    //int x = 1;
    //loop(x); 
    loop(1); // man() waiting for loop()

return 0;
}