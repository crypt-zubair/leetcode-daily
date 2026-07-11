/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int l=0;
    int r=numbersSize-1;
    while(l<r){
        int sum=numbers[l]+numbers[r];
        if(sum==target){
            int *result=(int*)malloc(2*sizeof(int));
            result[0]=l+1;
            result[1]=r+1;
            *returnSize=2;
            return result;
        }else if(sum< target){
            l++;
            
        }else{
            r--;
        }
    } return NULL;
}