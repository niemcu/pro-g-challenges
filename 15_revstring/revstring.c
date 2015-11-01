#include <stdio.h>
#include <stdlib.h>

int count_chars(char *input) {
    int i = 0;
    for(;;) {
        if (input[i] == '\0')
            return i;
        i++;
    }
}

char* reverse_string(char *input, size_t len) {
    unsigned int i;
    char *ret = malloc(sizeof(*input)*len);
    for(i = 0; i < len; i++)
        ret[i] = input[len-1-i];
    return ret;
}

int main(int argc, char **argv) {
    char *input_string = argv[1];
    int chars;

    if(argc < 2)
        printf("podaj argument.");
    else {
        chars = count_chars(input_string);
        printf("%s\n", reverse_string(input_string, chars));
    }
    return 0;
}
