int stepPerms(int n) {
if(n==1)return 1;
if(n==2)return 2;
if(n==3)return 4;
int arr[36];
arr[0]=1;arr[1]=2;arr[2]=4;
for(int i=3;i<36;i++){
    arr[i]=(arr[i-1]%10000000007+
            arr[i-2]%10000000007+
            arr[i-3]%10000000007)%10000000007;
}
return arr[n-1];
}
