void swap(int* nums, int a, int b){
    int t = nums[a];
    nums[a] = nums[b];
    nums[b] = t;
    }

void sortColors(int* nums, int numsSize){
    int l=0;
    int r=numsSize-1;
    while(l<r){
        if(nums[l] == 2) {
            swap(nums, l, r);
            r--;
        }
        else if(nums[l] == 1){
            int t = l+1;
            while(t < r && nums[t] != 0) t++;
            if(nums[t] == 0) swap(nums, l, t);
            l++;
        }
        else l++;
    }
}
