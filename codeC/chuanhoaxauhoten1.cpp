#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR_LEN 1000
#define MAX_WORD_LEN 50

typedef struct {
    int first;
    int second;
} pii;

typedef struct {
    long long first;
    long long second;
} pll;

typedef struct {
    char data[MAX_WORD_LEN];
} String;

typedef struct {
    String words[MAX_STR_LEN];
    int size;
} StringVector;

void string_vector_push_back(StringVector *v, const char *word) {
    if (v->size < MAX_STR_LEN) {
        strcpy(v->words[v->size].data, word);
        v->size++;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();  // Consume newline after reading 't'

    while (t--) {
        char s[MAX_STR_LEN];
        fgets(s, sizeof(s), stdin);

        // Process the string
        char *token = strtok(s, " \t\n");
        StringVector v;
        v.size = 0;

        while (token != NULL) {
            // Convert word to lowercase
            for (int i = 0; token[i] != '\0'; i++) {
                token[i] = tolower(token[i]);
            }

            // Capitalize the first letter
            token[0] = toupper(token[0]);

            // Push word to vector
            string_vector_push_back(&v, token);

            // Get next token
            token = strtok(NULL, " \t\n");
        }

        // Output processed words
        for (int i = 0; i < v.size; i++) {
            printf("%s ", v.words[i].data);
        }
        printf("\n");
    }

    return 0;
}
