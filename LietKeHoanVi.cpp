#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int a[21];
int t, n;

void ktao()
{
	for(int i = 1; i <= n; i++)
		a[i] = i;
}

void in()
{
	for(int i = 1; i <= n ; i++)
		cout << a[i];
	cout << " ";
}

void Try()
{
	in();
	int i = n - 1, j = n;
	while(i > 0 && a[i] > a[i+1])
		i--;
	if(i == 0)
		return;
	while(j > i && a[j] < a[i])
		j--;
	swap(a[i], a[j]);
	int l = i + 1, r = n;
	while(l <= r)
	{
		swap(a[l], a[r]);
		l++;
		r--;
	}
	Try();



}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		cin >> n;
		ktao();
		Try();
		cout << endl;
	}
	
	return 0;
}