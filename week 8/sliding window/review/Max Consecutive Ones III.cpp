class Solution {
public:
    /*
         Keep count of the number of 0s found in the current window.
         If count is > K, then increment l until the count goes to <=K.
         At each iteration find the maxLen.
    */
    int longestOnes(vector<int>& A, int K) {
        int zeroCount = 0, l = 0;
        int maxLen = 0;
        for( int r = 0 ; r < A.size() ; ++r ) {
            if( A[ r ] == 0 ) ++zeroCount;
            while( zeroCount > K ) {
                if( A[ l ] == 0 ) --zeroCount;
                ++l;
            }
            maxLen = max( maxLen, r - l + 1 );
        }
        return maxLen;
    }
};
