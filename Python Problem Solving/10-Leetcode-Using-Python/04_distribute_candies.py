from typing import List

class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        aliceCanEat = len(candyType) // 2

        distinct = len(set(candyType))

        if distinct <= aliceCanEat:
            return distinct

        return aliceCanEat