from typing import List

class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        ans = 0

        for i in range(len(timeSeries) - 1):
            ans += min(duration, timeSeries[i + 1] - timeSeries[i])
        
        return ans + duration