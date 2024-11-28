#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 3, 5, 7},
        {2, 8, 6, 4},
        {0, 9, 11, 10}
    };
    int rows = 3, cols = 4;
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("max: %d\n", max);
    return 0;
}

