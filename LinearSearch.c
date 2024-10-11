#include <stdio.h>

//Function to linearly search through the list
int search(int arr[], int len, int val)
{
    for(int i = 0; i < len; i++){
        if(arr[i] == val){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int val = 8;
    //Calling function and saving it into a variable
    int found = search(arr, len, val);
    if(found == 0){
        printf("Value was not found in the list.\n");
    }
    else{
        printf("Value was found in the list!!!\n");
    }
    printf("The time complexity of a linear search is O(n) because it checks each element once.\n");

    return 0;
}