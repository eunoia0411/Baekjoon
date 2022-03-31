#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
int main() {

    int n;
    char s[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int sum = 0, add = 1; 
        scanf("%s", s); 

        for (int j = 0; j < strlen(s); j++) { 
            if (s[j] == 'O') {
                sum += add; 
                add++; 
            }
            if (s[j] == 'X') {
                add = 1;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
