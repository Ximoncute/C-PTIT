#include <stdio.h>
#include <string.h>

void compress_string(const char* s, char* compressed) {
    int n = strlen(s);
    int count = 1;
    int j = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            j += sprintf(compressed + j, "%c%d", s[i - 1], count);
            count = 1;
        }
    }
   
    j += sprintf(compressed + j, "%c%d", s[n - 1], count);

    compressed[j] = '\0';  
}

int main() {
    char S[] = "aaabbbccccdzaa";
    char compressed[50];  

    compress_string(S, compressed);

    printf("%s\n", compressed);  

    return 0;
}


