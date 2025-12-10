/* Name: Andy Chen
Course: COMPE 160
Week: 15 Question: 1
Brief: Read characters from input file, flip letter case, and write to output file. */

#include <stdio.h>

int main() {
    // You can change these file names if needed
    const char *inputFileName  = "input.txt";
    const char *outputFileName = "output.txt";

    FILE *fin  = fopen(inputFileName, "r");
    if (fin == NULL) {
        printf("Error: could not open input file '%s'\n", inputFileName);
        return 1;
    }

    FILE *fout = fopen(outputFileName, "w");
    if (fout == NULL) {
        printf("Error: could not open output file '%s'\n", outputFileName);
        fclose(fin);
        return 1;
    }

    int c = fgetc(fin);      // fgetc returns int, to hold all chars + EOF

    while (c != EOF) {
        if (c >= 'a' && c <= 'z') {
            // lowercase to uppercase
            c = c - 'a' + 'A';
        } else if (c >= 'A' && c <= 'Z') {
            // uppercase to lowercase
            c = c - 'A' + 'a';
        }
        // all other characters stay unchanged

        fputc(c, fout);      // write the (possibly modified) character

        c = fgetc(fin);      // read next character
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
