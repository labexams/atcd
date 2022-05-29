#include<stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("./program_for_lex.txt", "r");

    char keywords[32][50] = {"auto", "break", "case", "char", "const",
    "continue", "default", "do", "double", "else", "enum", "extern",
    "float", "for", "goto", "if", "int", "long", "register",
    "return", "short", "signed", "sizeof", "static", "struct",
    "switch", "typedef", "union", "unsigned", "void", "volatile",
    "while"};

    char specialChars[32] = {'`', '~', '@', '!', '$', '#', '^', '*', '%', '&', '(', ')', '[', ']', '{', '}', '<', '>', '+', '=', '_', '–', '|', '/', '\\', ';', ':', '‘$

    char c[100];

    while (fscanf(fptr, "%s ", c) != EOF) {
        if (strcmp(c, "#include") == 0) {
            printf("%c is a special character\n", c[0]);
            printf("include is a keyword\n");
            printf("< is a special character\n");
            fscanf(fptr, " <%s", c);
            c[strlen(c) - 1] = '\0';
            printf("%s is a header file\n", c);
            printf("> is a special character\n");
        } else if (isdigit(c[0])) {
            printf("%s is a number\n", c);
        } else if (isalpha(c[0])) {
            int i = 0;
            int found = 0;
            while(i < 32 && keywords[i]) {
                if(strcmp(keywords[i], c) == 0) {
                    found = 1;
                    break;
                }
                i++;
            }
            if (found) {
                printf("%s is a keyword\n", c);
            } else {
                printf("%s is a identifier\n", c);
            }
        } else {
            for (int i = 0; i < 32; i++) {
                if (c[0] == specialChars[i]) {
                    printf("%c is a special character\n", c[0]);
                    break;
                }
            }
        }
    }
}
