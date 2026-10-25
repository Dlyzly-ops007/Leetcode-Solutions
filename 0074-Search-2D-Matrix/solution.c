bool searchMatrix(int** matrix, int m, int* c, int target) {
    int n = c[0]; 
    int left = 0, right = m * n - 1;
    while (left <= right) {
        int mid=left+(right-left) / 2;
        int val=matrix[mid / n][mid % n];
        if (val==target) 
        return true;
        if (val<target) 
        left=mid+1;
        else 
        right=mid-1;
    }   
    return false;
}