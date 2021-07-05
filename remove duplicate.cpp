class Solution {
public:
    int removeDuplicates(vector<int>& num) {
        int n=num.size();
        if(n==0 || n==1) return n;
	int i=0, j=1;
	while(j<n)
	{
		if(num[j]!=num[i])
		{
			i++;
			num[i]=num[j];
			j++;
		}
		else
		{
			j++;
		}
	}
	return (i+1);
    }
};

