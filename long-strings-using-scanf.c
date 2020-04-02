#include <stdio.h>

int main() {
    char s[] = "Test string with spaces ";
  
    char ss[256]; 

    printf("enter string");
    // Escape the unwanted breakline after entering spaces
    scanf("%[^\n]s", ss);

    // Concatenate and print the String variables on a new line

    printf("%s%s\n", s, ss);

    return 0;
}
