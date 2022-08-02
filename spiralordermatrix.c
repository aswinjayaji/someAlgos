/**
 * Algorithm:https://www.youtube.com/watch?v=siKFOI8PNKM
 * @input A : Read only ( DON'T MODIFY ) 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */


int* spiralOrder(const int** A, int n11, int n12, int *len1) {
    int T=0,B=n11-1,L=0,R=n12-1,dir=0;
    int *arr = (int *)malloc(sizeof(int)*n11*n12);
    int len=0,p=0,k=0;
    while(L<=R && T<=B){
        if(dir==0){
            for(k=L;k<=R;k++){
                arr[p++]=A[T][k];
            }
            T++;
        }
        else if(dir==1){
            for(k=T;k<=B;k++){
                arr[p++]=A[k][R];
            }
            R--;
        }
        else if(dir==2){
            for(k=R;k>=L;k--){
                arr[p++]=A[B][k];
            }
            B--;
        }
        else if(dir==3){
            for(k=B;k>=T;k--){
                arr[p++]=A[k][L];
            }
            L++;
        }
        dir=(dir+1)%4;
    }
    *len1=p;
    return arr;
}
