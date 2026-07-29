int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;       
            *returnSize = digitsSize;
            return digits;}
        digits[i] = 0; 
    }
    *returnSize = digitsSize + 1;
    int* newarray = (int*)calloc(*returnSize, sizeof(int)); 
    newarray[0] = 1;

    return newarray;
}