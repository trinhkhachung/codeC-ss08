#include <stdio.h>

int main() {
    int a[] = {1, 3, 4, 5, 7, 9};
    int n = sizeof(a) / sizeof(a[0]); 
    int x, found = 0;
    printf("moi nhap so can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) { 
            printf("vi tri phan tu la: %d\n", i);
            found = 1; 
            break;   
        }
    }
    if (!found) {
        printf("ko tim thay\n");
    }

    return 0;
}

