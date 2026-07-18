#include <stdbool.h>

bool isValid(char* s) {
    char stack[100005]; 
    int tops = -1;

    for (int i = 0; s[i] != '\0'; i++) {
               if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            tops += 1;
            stack[tops] = s[i];
        } 
        else if (s[i] == ')') {
            if (tops == -1 || stack[tops] != '(') {
                return false;
            }tops--;
        } 
        else if (s[i] == ']') {
            if (tops == -1 || stack[tops] != '[') {
                return false;
            }
            tops--; 
        } 
        else if (s[i] == '}') {
            if (tops == -1 || stack[tops] != '{') {
                return false;
            }
            tops--; 
        }
    }
    return (tops == -1);
}