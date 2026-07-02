class Solution:
    def rot(self,nums: List[int])->None:
        d = nums[0]
        nums.pop(0)
        nums.append(d)
    def rotateElements(self, nums: List[int], k: int) -> List[int]:
        idx=set()
        pos=[]
        for i in range(len(nums)):
            if nums[i]>=0 :
                pos.append(nums[i])
                idx.add(i)
        
        if len(pos) == 0:
            return nums        
        if len(pos) > 0:
            k = k % len(pos)

        while k>0 :
            self.rot(pos)
            k=k-1
        j=0
        for i in range(len(nums)):
            if i in idx :
                nums[i]=pos[j]
                j+=1
        return nums               
