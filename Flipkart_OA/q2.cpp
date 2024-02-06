#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &v, int k)
{
	int n  = v.size();
	int cnt = 0;
	int i = 0;
	while (i<n) {
		if (v[i] == 0) {
			i+=k;
			cnt+=1;
		}
		else i++;
	}
	return cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
	cout << f(v, k);
}
