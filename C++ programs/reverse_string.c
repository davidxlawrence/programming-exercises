#include <stdio.h>
#include <string.h>
 
/* Reverses a string in place */
void reverse(char *string){
    int end = strlen(string) - 1;
    int beginning = 0;
    
    while (beginning < end) {
        char c = string[beginning];
        string[beginning] = string[end];
        string[end] = c;
        
        beginning++;
        end--;
    }
}
 
int main(void){
    char s[] = "hello world!";
    reverse(s);
    printf(s);
}