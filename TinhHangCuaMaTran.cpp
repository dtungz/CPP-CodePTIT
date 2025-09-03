#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FOL(i, a, b) for(int i = a; i >= b; i--)
#define FOE(it, a) for(int& it : a)

void swapMatrix(double a[100][100], int col1, int col2, int rank)
{
	for(int i = 0; i < rank; i++)
		swap(a[col1][i], a[col2][i]);
}

int rankMatrix(double a[100][100], int n, int m)
{
	int rank = m;
	for(int i = 0; i < rank ; i++)
	{
		if(a[i][i])
		{
			for(int j = 0; j < n; j++)
				if(i != j)
				{
					double x = a[j][i] / a[i][i];
					for(int k = 0; k < rank ; k++)
						a[j][k] -= x * a[i][k];
				}
		}
		else
		{
			bool ok = true;
			for(int j= i + 1; j < n; j++)
			{
				if(a[j][i])
				{
					swapMatrix(a, i, j, rank);
					//rank--;
					ok = false;
					break;
				}
			}
			if(ok)
			{
				rank--;
				for(int j = 0; j < n; j++)
					a[j][i] = a[j][rank];
			}
			i--;
		}
	}
	return rank;
}

void solve()
{
	int n, m; 	cin >> n >> m;
	double a[100][100];
	for(int i = 0; i< n; i++)	for(int j = 0; j < m; j++)	cin >> a[i][j];
	cout << rankMatrix(a, n, m) << "\n";
}

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;	cin >> t;
	while(t--)
		solve();
	return 0;
}