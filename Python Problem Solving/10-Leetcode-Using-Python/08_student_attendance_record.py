class Solution:
    def checkRecord(self, s: str) -> bool:
        absent = 0
        ls = 0
        cnt = 0
        for ch in s:
            if ch == 'A':
                absent += 1
                ls = max(ls, cnt)
                cnt = 0
            if ch == 'L':
                cnt += 1
            else:
                ls = max(ls, cnt)
                cnt = 0
        if cnt:
            ls = max(ls, cnt)
        print(ls, absent)

        if absent < 2 and ls < 3:
            return True
        return False
