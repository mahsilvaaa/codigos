#include <stdio.h>

int main () {
    char alfabeto[26];

    for(int i = 0; i < 26; i++) {
    alfabeto[i]= 'A' + i;
    }

    printf("Letras do alfabeto: \n");

    for(int i = 0; i < 26; i++)

    printf("%c ", alfabeto[i]);

return 0;
}
