#include <stdio.h>

int findMax(int x, int y)
{
   return (x > y) ? x : y;
   // if x > y return x else return y
}

int main(){

    // tenary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
     
     int max = findMax(3,4);

     printf("%d",max);
    return 0;
}