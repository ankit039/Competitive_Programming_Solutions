#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the isValid function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//

char* isValid(char* s) {

    char *str = malloc(sizeof(char)*4);
    strcpy(str, "YES");
    int i = 0, j = 0, a[26] ={0}, vcount = 0, count = 0, invalid = -1;

    for(i = 0; s[i] != '\0'; i++)
        a[s[i] - 97]++;

    for(int j = 0; j < 26; j++) {
        if(a[j] == 0)
            continue;
        if(vcount == 0)
            vcount = a[j];
        else if(a[j] == vcount) {
            count = vcount;
            break;
        }
    }

    for(int j = 0; j < 26; j++) {
        if(a[j] == 0)
            continue;
        if(count == 0)
            count = a[j];
        else if(a[j] == count)
            continue;
        else if((a[j] == count+1 || a[j] == 1) && invalid == -1)
            invalid++;
        else {
            strcpy(str,"NO");
            return str;
        } 
    }
    return str;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = isValid(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
