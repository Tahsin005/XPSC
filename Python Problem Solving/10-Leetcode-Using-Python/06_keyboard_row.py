from typing import List

class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        firstRow = set("qwertyuiop")
        secondRow = set("asdfghjkl")
        thirdRow = set("zxcvbnm")
        ans = []
        for word in words:
            w = set(word.lower())
            if w <= firstRow or w <= secondRow or w <= thirdRow:
                ans.append(word)

        return ans
