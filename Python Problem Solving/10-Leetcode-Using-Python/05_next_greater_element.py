from typing import List

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        for i in range(len(nums1)):
            val = nums1[i]
            found = False
            tempFound = False
            for j in range(len(nums2)):
                if nums2[j] == val:
                    found = True
                if found == True and nums2[j] > val:
                    ans.append(nums2[j])
                    tempFound = True
                    break
            if tempFound == False:
                ans.append(-1)
        return ans