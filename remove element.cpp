class Solution {
public:
    int removeElement(vector<int>& number, int value) {
        
    int n=number.size();
        
	if(n==0) return n;
	int i=0, j=n-1;
	while(i<=j)
	{
		if(number[i]!=value)
		{
			i++;
		}
		else if(number[i]==value)
		{
			number[i]=number[j];
			j--;
		}
	}
	return i;
    }
};