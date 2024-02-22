class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        trust_count = [0] * (n + 1)  # Initialize trust count for each person
        trusted_count = [0] * (n + 1)  # Initialize trusted count for each person
    
    # Count trust relationships and trusted relationships
        for a, b in trust:
            trust_count[a] += 1
            trusted_count[b] += 1
    
    # Check if there is a person who is trusted by everyone and trusts nobody
        for i in range(1, n + 1):
            if trusted_count[i] == n - 1 and trust_count[i] == 0:
                return i
    
        return -1