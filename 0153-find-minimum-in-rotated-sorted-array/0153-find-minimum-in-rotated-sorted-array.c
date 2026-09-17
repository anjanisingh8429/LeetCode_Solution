int findMin(int* nums, int numsSize) {
    int low = 0;
    int high = numsSize - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[high]) {
            // Minimum element is on the right side
            low = mid + 1;
        } 
        else {
            // Minimum is at mid or on the left side
            high = mid;
        }
    }

    return nums[low];
}