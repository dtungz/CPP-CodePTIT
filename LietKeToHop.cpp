#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

int a[21] ={0};
int t, n, k;

void ktao()
{
	for(int i = 1; i <= k; i++)
		a[i] = i;
}

void in()
{
	for(int i = 1; i <= k ; i++)
		cout << a[i] ;
	cout << " ";
}

void Try()
{
	in();
	int i = k;
	while(i > 0 && a[i] == i + (n - k))
		i--;
	if(i == 0)
		return;
	a[i]++;
	for(int j = i + 1; j <= k; j++)
		a[j] = a[j-1] + 1;
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
		cin >> n >> k;
		ktao();
		Try();
		cout << endl;
	}
	return 0;
}
