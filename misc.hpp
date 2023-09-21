template <typename T>
T ArrayMax(T arr[]) { 
    T max = arr[0];
    for (T num : arr) {
        if ( num > max) {
            max = num;
        }
    }
    return max;
}