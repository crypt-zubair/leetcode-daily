/**
 * Note: The returned array must be malloced, assume caller calls free().
 */int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), compare);
qsort(nums2, nums2Size, sizeof(int), compare);
    int p1=0;
    int p2=0;
    int max=0;
    if(nums1Size < nums2Size){
        max=nums1Size;
    }else{
        max=nums2Size;
    }
    int *result=(int*)malloc(max*sizeof(int));
    int k=0;
    while(p1< nums1Size && p2<nums2Size){
        if(nums1[p1]<nums2[p2]){
            p1++;
        }else if(nums1[p1]>nums2[p2]){
            p2++;
        }else if(nums1[p1]==nums2[p2]){
            if(k==0 || result[k-1]!=nums1[p1]){
                result[k]=nums1[p1];
                k++;
            }
            p1++;
            p2++;
        }
     
    }
    *returnSize=k;
    return result;
}