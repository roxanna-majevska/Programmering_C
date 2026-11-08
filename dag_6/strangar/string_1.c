#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[50];
    char s2[50];
    char s3[50];
    char result[160];

    printf("Enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;

    printf("Enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    printf("Enter string 3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0;

    sprintf(result, "%s %s %s", s1, s2, s3);
    printf("Result: %s\n", result);
     
    return 0;
}