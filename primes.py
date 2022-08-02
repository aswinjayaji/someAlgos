class Solution:
    # @param A : integer
    # @return a list of integers
    
    def sieve(self, A):
       lst=list()
       def isPrime(A):
        if A<2:
         return 0
        for i in range(initi,int(math.sqrt(A))+1):
            if A%i==0:
             return 0
        return A
       for i in range(2,A):
          if num==isPrime(i)!=0:
             lst.append()
       return lst
        