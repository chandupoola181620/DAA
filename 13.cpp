#include <stdio.h>

void reverseString(char str[]) {
    if (str[0] == '\0') // Base case: end of string
        return;
    
    reverseString(&str[1]); // Recursive call with the next character
    
    printf("%c", str[0]); // Print the first character after all others have been printed
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);
    printf("Reversed String: ");
    reverseString(str);
    
    return 0;
}

