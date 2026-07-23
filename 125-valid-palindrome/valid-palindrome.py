class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        n=""
        s=s.lower()
        print(s)
        for i in s:
            if 'a' <= i <= 'z' or '0' <= i <= '9':
                n += i
        i=0
        j=len(n)-1
        print(n)
        while i<j:
            if n[i]==n[j]:
                i+=1
                j-=1  
            else:
                return False        
        return True                  
            