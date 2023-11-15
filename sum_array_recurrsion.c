#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fun(int x, int arr[]);

int main() {
    int x;
    scanf("%d", &x);
    int arr[x];
    
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", fun(x, arr));

    return 0;
}

int fun(int x, int arr[]) {
    if (x == 0) {
        return 0;
    } else {
        return arr[x - 1] + fun(x - 1, arr);
    }
}
