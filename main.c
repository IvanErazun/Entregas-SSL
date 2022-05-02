//Iván Erazun

#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    do{
        c = getchar();
        while (isdigit(c))
            c = getchar();
        if (isalpha(c)){
            if (islower(c)){
                c = toupper(c);
            } else c = tolower(c);
        }
        putchar(c);
    } while (c != '\n');
    return 0;
}