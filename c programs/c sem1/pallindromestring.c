#include <stdio.h>
void main() {
    char a[20];
    int c = 0,i,flag = 1;
    printf("enter string: ");
    gets(a);
    while (a[c] != '\0') {
        c++;
    }
    for (i = 0; i < c / 2; i++) {
        if (a[i] != a[c - i - 1]) {
            flag = 0; 
            break;
        }
    }

    if (flag) {
        printf("%s is a palindrome.\n", a);
    } else {
        printf("%s is not a palindrome.\n",a);
    }
}