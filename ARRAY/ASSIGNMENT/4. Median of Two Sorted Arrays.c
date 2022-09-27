double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
int i=0,j=0,k=0;
double x;
int arr[2000];
while(i<nums1Size && j<nums2Size)
{
    if(nums1[i]<nums2[j])
    {
        arr[k++]=nums1[i++];
    }
    else
    {
        arr[k++]=nums2[j++];
    }
}
if(i<nums1Size)
{
    while(i<nums1Size)
    {
        arr[k++]=nums1[i++];
    }
}
else
{
    while(j<nums2Size)
    {
        arr[k++]=nums2[j++];
    }
}
k--;
if(k%2==0)
{
   x=arr[k/2];
}
else
{
    x=(arr[(k-1)/2]+arr[(k+1)/2])/2.0;
}
return x;
}
