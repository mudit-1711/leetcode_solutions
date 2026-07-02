class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        r = 30/60
        m = minutes*6
        h = r*minutes + hour*30
        return min(360-abs(h-m),abs(h-m))