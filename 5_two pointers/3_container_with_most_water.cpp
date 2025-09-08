int maxArea(vector<int>& arr) {
    // Write your code here.
    int left = 0, right = arr.size()-1;
    int area = 0;
    while (left<right){
        area = max(area, (right -left)*min (arr[left], arr[right]));
        if (arr[left]< arr[right])  left++;
        else    right--;
    }
    return area;
}