#include <stdio.h>

void convertToASCII(const char* filename,const char* outputFile) {
    FILE* file = fopen(filename, "r");
    FILE* output= fopen(outputFile, "w");
    if (file == NULL) {
        printf("Error: Failed to open the file\n");
        return;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int asciivalue = (int)c;
            fprintf(output,"%c: %d\n", c, asciivalue);
        }
    }

    fclose(file);
    fclose(output);
}

int main() {
    const char* inputfilename = "input.txt";
    const char* output = "ascii.txt";
    convertToASCII(inputfilename,output);

    return 0;
}
