#include <stdio.h>
int main() {
int arr[100], n, i, position;
printf("Enter number of elements in array : ");
scanf("%d", &n);
printf("Enter %d elements : ", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the position (0 to %d) of the element to delete : ", n -
1);
scanf("%d", &position);
if (position < 0 || position >= n) {
printf("Invalid position!\n");
return 1;
}
for (i = position; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
n--;
printf("Array after deletion : ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
