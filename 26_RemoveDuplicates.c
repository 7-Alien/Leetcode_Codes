#include<stdio.h>
int removeDuplicates(int *nums, int numsSize){
    /* nums is an sorted integer array and numsSize is the size of nums array */

    int k=1; // Initialize a counter 'k' to keep track of the new array's size
    
    for(int i=1; i<numsSize; i++){

        if(nums[i]!=nums[i-1]){/* Compare the current element 'nums[i]' with the previous element 'nums[i - 1]' */

            nums[k]=nums[i]; // If they are not equal, store the current element at index 'k' in the array
            k++;
        }
    }
    return k;// Return the new size of the array with duplicates removed
}

int main(){
    int size;

    printf("Enter size of the array:\n");
     scanf("%d", &size);

    int nums[size];

    printf("Enter %d elements:\n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &nums[i]);
    }

    int newsize = removeDuplicates(nums, size);

    printf("Modified array without duplicates:\n");

    for (int i = 0; i < newsize; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}