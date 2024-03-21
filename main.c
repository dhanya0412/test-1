#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
printf("enter the no. of integers:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    printf("enter the number at %d index\n",i);
    scanf("%d",arr[i]);
}
int left=0;
int right=n-1;
int key;
printf("enter the number to be searched:");
scanf("%d",&key);
binary_search(arr,left,right,key);
}
