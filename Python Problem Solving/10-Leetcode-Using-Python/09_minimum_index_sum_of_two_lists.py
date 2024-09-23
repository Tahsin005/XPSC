from typing import List

class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        index_sum = float('inf')
        result = []
        
        map_list1 = {}
        for i in range(len(list1)):
            map_list1[list1[i]] = i
        
        for j in range(len(list2)):
            if list2[j] in map_list1:
                i = map_list1[list2[j]]
                idx_sum = i + j
                
                if idx_sum < index_sum:
                    index_sum = idx_sum
                    result = [list2[j]]
                    
                elif idx_sum == index_sum:
                    result.append(list2[j])
        
        return result