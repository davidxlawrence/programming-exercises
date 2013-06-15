#include <stdio.h>

int add1(int val) {
    int num = 1;
    while (val != 0)
    {
        int carry = num & val;  
        num = num ^ val; 
        val = carry << 1;
    }
    return num;
}

int main(void) {
    int value = add1(555);
    printf("%d\n", value);
    return 0;
}