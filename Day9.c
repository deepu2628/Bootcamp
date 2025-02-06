
//Q1.To find duplicate character
#include <stdio.h>
#include <string.h>

void findDuplicates(char str[]) {
    int freq[256] = {0}; 
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("Duplicate character found: %c\n", i);
        }
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    findDuplicates(str);
return 0;
}