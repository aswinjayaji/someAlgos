import math
class Solution:
    # @param A : integer
    # @return an integer
    #use sqrt as well as i+=2
    def isPrime(self, A):
        if A<2:
         return 0
        for i in range(2,int(math.sqrt(A))+1):
            if A%i==0:
             return 0
        return 1
