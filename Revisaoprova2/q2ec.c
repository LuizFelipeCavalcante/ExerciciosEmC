#include <stdio.h>

int contar(char *s) {
    if (*s == '\0') return 0;
    char c = *s;
    int vogal = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    return vogal + contar(s + 1);
}

int main() {
    char str[101];
    scanf(" %100[^\n]", str);
    printf("%d\n", contar(str));
    return 0;
}
