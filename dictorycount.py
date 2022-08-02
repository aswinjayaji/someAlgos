import math as m
class Solution:
    # @param A : tuple of integers
    # @return an integer
    def majorityElement(self, A):
        fl=len(A)/2
        freq=dict()
        for i in A:
            # if(i>=fl):
              if (i in freq):
                freq[i] += 1
              else:
                freq[i] = 1
        return max(zip(freq.values(), freq.keys()))[1]