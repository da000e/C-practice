#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if ((ch >= 65) && (ch <= 90)) {
        printf("대문자\n");
    } else if ((ch >= 97)&&(ch <= 123)) {
        printf("소문자\n");
    } else {
        printf("다른 문자\n");
    }
}
