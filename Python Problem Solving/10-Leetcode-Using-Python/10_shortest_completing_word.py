from typing import List

class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        cnt = {}
        shortest_word = None
        shortest_len = float('inf')

        for char in licensePlate:
            if char.isalpha():
                char = char.lower()
                cnt[char] = cnt.get(char, 0) + 1
        
        for word in words:
            word_cnt = {}
            for char in word:
                word_cnt[char] = word_cnt.get(char, 0) + 1
            is_valid = True

            for char, freq in cnt.items():
                if word_cnt.get(char, 0) < freq:
                    is_valid = False
                    break

            if is_valid:
                if len(word) < shortest_len:
                    shortest_len = len(word)
                    shortest_word = word

        return shortest_word