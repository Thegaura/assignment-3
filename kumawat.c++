#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 100

void generateRandomString(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    s[len] = '\0';
}

int main() {
    char s[MAX_LENGTH];
    srand(time(NULL));
    generateRandomString(s, 10);
    printf("%s\n", s);
    return 0;
}
