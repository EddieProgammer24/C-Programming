# include <stdio.h>
# include <stdbool.h>

int main(){

    char a = 'C'; // single character %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
    //double d = 3.141592653589793; //8 bytes (64 bits of precision) 15 - 16 digits %1f

    //bool e = true; //1 byte (true or false) %d

    //char f = 100; //1 byte (-128 tp +127) %d or %c
    //unsigned char g = 255; // 1 byte (0 to 255) %d ot %c

    //short int h = 32767; //2 bytes (-32,768 to +32,767) %d

    //long long int 1 = 9223372036854775807; // 8 bytes 
    //unsigned long long int m = 18446744073709551615U;

    //printf("%c\n", a); //char
    //printf("%s\n", b); // character array
    printf("%f\n",c); //float
    printf("%lf\n",d); // double
    //printf("%d\n", e); //bool
    //printf("%d\n, f"); // char as numeric value
    //printf()

    }