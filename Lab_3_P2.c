#include<stdio.h>

int main(){

    int a = 20;
    int b = 15;
    int c = 10;

    // Arithmetic operators
    printf("Addition of a & b: %d\n", a+b);
    printf("Substraction of a & b: %d\n", a-b);
    printf("Multiplication of a & b: %d\n", a*b);
    printf("Division of a & b: %d\n", a/b);
    printf("Remainder of a & b: %d\n", a%b);

    // Relational operators
    printf("a==b : %d\n", a==b); // equal
    printf("a!=b : %d\n", a!=b); // not equal
    printf("a>b  : %d\n", a>b);  // greater than
    printf("a<b  : %d\n", a<b);  // less than
    printf("a>=b : %d\n", a>=b); // greater than or equal
    printf("a<=b : %d\n", a<=b); // less than or equal

    // Logical operators
    printf("a&&b : %d\n", a&&b);
    printf("a||b : %d\n", a||b);
    printf("!b   : %d\n", !b);
    printf("!c   : %d\n", !c);

    // bitwise operator
printf("a&b:%d\n", a&b);   //bitwise AND
printf("a|b:%d\n", a|b);   //bitwise OR
printf("a^b:%d\n", a^b);   //bitwise XOR
printf("~c:%d\n", ~c);     //bitwise NOT
printf("a<<2:%d\n", a<<2); //left shift
printf("a>>2:%d\n", a>>2); //right shift

    return 0;
}