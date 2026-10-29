int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int max_so_far = nums[0];
    int min_so_far = nums[0];
    int result = nums[0];
    for (int i = 1; i < numsSize; i++) {
        int curr = nums[i];
        if (curr < 0) {
            int temp = max_so_far;
            max_so_far = min_so_far;
            min_so_far = temp;
        }
        max_so_far = (curr > max_so_far * curr) ? curr : (max_so_far * curr);
        min_so_far = (curr < min_so_far * curr) ? curr : (min_so_far * curr);
        if (max_so_far > result) {
            result = max_so_far;
        }
    }

    return result;
}