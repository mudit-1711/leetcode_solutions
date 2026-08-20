class Solution(object):
    def resultArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        arr1=[]
        arr2=[]
        arr1.append(nums[0])
        arr2.append(nums[1])
        idx1=0
        idx2=0
        for i in range(2,len(nums)):
            if arr1[idx1]>arr2[idx2]:
                arr1.append(nums[i])
                idx1+=1
            else:
                arr2.append(nums[i])
                idx2+=1
        return arr1+arr2