long marcsCakewalk(vector<int> calorie) {
int n = calorie.size();
int temp=n-1;
long total = 0;
sort(calorie.begin(), calorie.end());
for(int i=0;i<n;i++){
    total += calorie[i] * pow(2, temp--);
}
return total;
}
