#include <stdio.h>

int main() {
    int a[5], n, x, i, flag = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    // Linear Search Logic
    for(i = 0; i < n; i++) {
        if(a[i] == x) {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("Element is present at position %d\n", i + 1);
    else
        printf("Element not found\n");
        
    return 0;
}