#include <stdio.h>
#include <stdlib.h>
#include "basicx.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <source>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *source = malloc(file_size + 1);
    if (!source) {
        perror("Error allocating memory");
        fclose(file);
        return 1;
    }

    fread(source, 1, file_size, file);
    source[file_size] = '\0';
    fclose(file);

    Node *ast = parse(source);
    if (!ast) {
        fprintf(stderr, "Error parsing source\n");
        free(source);
        return 1;
    }

    int result = interpret(ast); // Ensure `interpret` is defined and working correctly
    printf("Result: %d\n", result);

    free_node(ast);
    free(source);

    return 0;
}
