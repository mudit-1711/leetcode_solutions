class Solution(object):
    def smallestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        freq=26*[0]
        for c in s:
            freq[ord(c)-ord('a')]+=1
        left=""
        mid=""
        for i in range(len(freq)):
            left+= chr(ord('a') + i)*(freq[i]//2)
            if(freq[i]%2==1):
                mid+=chr(ord('a') + i)    
        right=left[::-1]
        return left+mid+right
        