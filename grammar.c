#include <stdio.h>
#include <string.h>
int checkGrammar(char *str) {
    int countA = 0, countB = 0;
    int i, len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == 'a')
            countA++;
        else if (str[i] == 'b')
            countB++;
        else {
            printf("Invalid character found: %c\n", str[i]);
            return 0; 
        }
    }
    if (countA == 2 * countB)
        return 1; 
    else
        return 0; 
}
int main() {
    char input[100];

    printf("Enter a string consisting of 'a' and 'b': ");
    scanf("%s", input);

    if (checkGrammar(input))
        printf("The input string satisfies the grammar.\n");
    else
        printf("The input string does not satisfy the grammar.\n");

    return 0;
}
