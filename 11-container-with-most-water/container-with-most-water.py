class Solution:
    def maxArea(self, height: List[int]) -> int:
        mxarea=-1
        l=0
        r=len(height)-1
        while(l<r):
            area = (abs(l-r))*(min(height[l],height[r]))
            mxarea=max(area,mxarea)
            if height[l]>height[r]:
                r-=1
            else:
                l+=1
        return mxarea            