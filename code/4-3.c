#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int size = 5; 
    int index;

    if (scanf("%d", &index) != 1) {
        return 1;
    }

    if (index >= 0 && index < size) {
        printf("%d\n", arr[index]);
    } else {
        printf("Error!\n");
    }
    return 0;
}
