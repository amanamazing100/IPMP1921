class Solution {
public:
    int minFlips(int a, int b, int c) {
        //or a and b
        //count the number of set bits in xor of OR and c
        //and a and b
        //count the set bits of c if its ste in the and
        int orab = a|b;
        int xororc=orab^c;
        int count=0;
        while(xororc!=0){
            if(xororc%2)
                count++;
            xororc>>=1;
        }
        int andab=a&b;
        while(andab!=0){
            if(andab%2==1 && c%2==0){
                count++;
            }
            andab>>=1;
            c>>=1;
        }
        return count;
    }
};
