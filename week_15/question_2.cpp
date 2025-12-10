/* Name: [Your Name]
Course: COMPE 160
Week: 15 Question: 2
Brief: Open a file for update, read each byte, flip letter case in place. */

#include <stdio.h>

int main() {
    const char *fileName = "Mike.txt";   // change if needed

    // Open existing file for reading and writing, no truncation
    FILE *fp = fopen(fileName, "r+b");
    if (fp == NULL) {
        printf("Error: could not open file '%s'\n", fileName);
        return 1;
    }

    int ch = fgetc(fp);   // read first byte

    while (ch != EOF) {
        int newCh = ch;

        if (ch >= 'a' && ch <= 'z') {
            newCh = ch - 'a' + 'A';   // to uppercase
        } else if (ch >= 'A' && ch <= 'Z') {
            newCh = ch - 'A' + 'a';   // to lowercase
        }

        if (newCh != ch) {
            // Current file position is one byte *after* the character we just read
            long pos = ftell(fp);          // remember current position
            if (pos == -1L) {
                printf("Error: ftell failed\n");
                fclose(fp);
                return 1;
            }

            // Go back to where that character is located
            if (fseek(fp, pos - 1, SEEK_SET) != 0) {
                printf("Error: fseek failed\n");
                fclose(fp);
                return 1;
            }

            // Overwrite it with the flipped character
            if (fputc(newCh, fp) == EOF) {
                printf("Error: fputc failed\n");
                fclose(fp);
                return 1;
            }

            // Move back to the position after the character, ready for next read
            if (fseek(fp, pos, SEEK_SET) != 0) {
                printf("Error: fseek failed (restore)\n");
                fclose(fp);
                return 1;
            }
        }

        // Read next byte
        ch = fgetc(fp);
    }

    fclose(fp);
    return 0;
}
