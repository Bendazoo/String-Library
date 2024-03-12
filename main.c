#include <stdio.h>
#include <strings.h>

int str_len(char *word[15]);

int main() {

    char *word[15];

    printf("Give me a word: ");
    scanf("%p", word);

    printf("%d",str_len(word));


    return 0;
}

int str_len(char *word[15]){

    int counter = 0;
    for (int i = 0; i <= sizeof(*word); i++){
        counter++;
    }
    return counter;
}
