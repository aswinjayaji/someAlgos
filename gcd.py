class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def gcd(self, A, B):
       if A>B:
           while True:
            if B==0:
              return A 
            rem=A%B
            A=B
            B=rem
              
       else:
         A,B = B,A
         while True:
            if B==0:
              return A 
            rem=A%B
            A=B
            B=rem
            
           
