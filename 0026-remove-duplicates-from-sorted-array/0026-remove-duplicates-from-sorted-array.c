int removeDuplicates(int* nums, int numsSize) {
    if (nums==0)return 0;
    int curr=0;
    //int node=numsSize-1;
    for (int i=0;i<numsSize;i++){
        if(nums[i]!=nums[curr]){
            curr+=1;
        nums[curr]=nums[i];

        }
    }return curr+1;
        }
