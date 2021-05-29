int beautifulPairs(vector<int> A, vector<int> B) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int N=A.size(),count=0;
    for(int i=0,j=0;i<N && j<N;i++,j++)
    {        
        while(j<N && A[i]!=B[j]){            
            if(A[i]>B[j])
            j++;
            while(i<N && A[i]<B[j])
            i++;
        }
        if(A[i]==B[j])
            count++;
    }
    if(count<N)
    return count+1;
    else        //count == N i.e., no duplicates present
    return count-1;
}
