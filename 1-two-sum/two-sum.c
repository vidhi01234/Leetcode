/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i,j;
    int *p;
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                p= malloc(sizeof(int)*2);
                p[0]=i;
                p[1]=j;
                *returnSize=2;
                return p;
            }
        }
    }
    *returnSize=0;
    return malloc(sizeof(int)*0);
}
