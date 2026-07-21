int searchInsert(int* nums, int numsSize, int target) {
      if (numsSize == 0) return 0;
      //int curr;
      for(int i=0;i<numsSize;i++){
        if(nums[i]>=target){
            return i;
        }}return numsSize;
}