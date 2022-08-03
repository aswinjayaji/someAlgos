int Solution::maxProduct(const vector<int> &A) {
    int ans = A[0];
    int maxProduct = 1, minProduct = 1;
    for(int i =0;i<A.size();i++){
        int temp = maxProduct;
        maxProduct = max(A[i], max(A[i]*maxProduct, A[i]*minProduct));
        minProduct = min(A[i], min(A[i]*temp, A[i]*minProduct));
        ans = max(ans, maxProduct);
    }
    return ans;
}