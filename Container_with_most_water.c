int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize -1;
    int max_area = 0;
    int h= 0;

    while (left < right){
        if (height[left] < height[right]){
            h = height[left];
        } else {h = height[right];}
        int width = right - left;
        int area = h *width;
        if (area > max_area){
            max_area = area;
        }
        if (height[left] > height[right]){
            right--;
        } else {left++;}

    }
    return max_area;
}
