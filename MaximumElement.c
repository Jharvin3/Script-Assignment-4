#include <stdio.h>

//Function to find the maximum value in the list
int maxElement(int arr[], int size)
{
    int max = arr[0];
    //Checking each value in the list and comparing it to max
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {5, 8, 43, 56, 9, 23, 62, 77, 3, 71};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_value = maxElement(arr, size);

    printf("The maximum value in the list is %d\n", max_value);
    printf("The time complexity of finding the maximum value in the list is O(n) because it checks each element only once.\n");

    return 0;
}