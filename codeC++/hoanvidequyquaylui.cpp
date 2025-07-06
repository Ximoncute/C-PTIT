#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void permute(int arr[], int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = l; i <= r; i++) {
            swap(&arr[l], &arr[i]);          
            permute(arr, l + 1, r);          
            swap(&arr[l], &arr[i]);          
        }
    }
}
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    permute(arr, 0, n - 1);
    return 0;
}

