#include <stdio.h>


int main(){
    char input;
    int output;

    printf("Please input a character: ");
    scanf("%c", &input);

    output = (int)input;

    printf("ASCII code  = %d.\n", output);


    return 0;
}
