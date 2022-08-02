/*
Can we improve the above solution? 
If we look carefully, all the divisors are present in pairs. For example if n = 100, then the various pairs of divisors are: (1,100), (2,50), (4,25), (5,20), (10,10)
Using this fact we could speed up our program significantly. 
We, however, have to be careful if there are two equal divisors as in the case of (10, 10). In such case, we’d print only one of them. 
*/
#include <cmath>
using namespace std;
vector<int> Solution::allFactors(int A) {
    vector<int> list;
    for(int i=1;i<=sqrt(A);i++){
        if(A%i==0){
            if(A/i == i)
                 list.push_back(i);
            else{
                list.push_back(i);
                list.push_back(A/i);
            }
              
           
        }
    }
    sort(list.begin(), list.end());
    return list;
}
