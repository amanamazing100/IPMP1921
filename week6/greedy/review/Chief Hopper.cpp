
int chiefHopper(vector<int> arr) {
    int i, n=arr.size();
    int reverse_energy=0;
for(i=n-1; i>=0; i--)
    reverse_energy = (reverse_energy + arr[i] + 1) / 2;
return reverse_energy;
}
