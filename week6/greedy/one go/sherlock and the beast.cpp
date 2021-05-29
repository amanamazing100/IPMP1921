void decentNumber(int n) {
int f_count=5;
int temp=n;
while(temp>=0){
    if(temp%3==0)
    break;
    temp-=f_count;
}
if(temp<0){
    cout<<-1<<endl;
    return;
}
string x;
f_count=n-temp;
while(temp!=0){
x+='5';
temp--;}
while(f_count!=0){
x+='3';
f_count--;}
cout<<x<<endl;
return;
}
