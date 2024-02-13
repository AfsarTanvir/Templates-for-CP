


bool searchInARotatedSortedArray(vector<int>&A, int key) {
    int l=0, h=A.size()-1, m;
    while (l<=h)
    {
        m = (l+h)>>1;
        if(A[m]==key){
            return true;
        }if(A[m]==A[l] && A[m]==A[h]){
            ++l,--h;
            continue;
        }else if(A[l] <= A[m]){
            if(A[l]<=key && key<=A[m]){
                h = m-1;
            }else{
                l = m+1;
            }
        }else{
            if(A[m]<=key && key<=A[h]){
                l = m+1;
            }else{
                h = m-1;
            }
        }
    }
    return false;
}
