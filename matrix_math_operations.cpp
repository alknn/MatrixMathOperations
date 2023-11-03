
#include <vector>
#include <iostream>
#define STD std::
typedef STD vector<int> vi;
typedef long long ll;
#define FOR(i,n) for(i=0;i<n;i++)
const int mod = 1e9 + 7;

struct matrix {
	int n, m;
	STD vector<vi> mat;
	matrix() { ; }

	matrix(int x, int y, int ident = 0)
	{
		n = x, m = y; 
		if (y == 0) m = n;
		mat = STD vector<vi>(n, vi(m, 0));
		if (ident) 
		{
			int i; 
			FOR(i, n) mat[i][i] = 1;
		}
	}

	void out()
	{
		int i, j;
		FOR(i, n) { FOR(j, m) STD cout << mat[i][j] << " " << STD endl; }
	}

	int rowsum(int x) 
	{
		int i;
		ll  ans = 0;
		FOR(i, m)
		{
			ans += mat[x][i];
			if (ans >= mod) ans -= mod;
		}
		return ans;
	}
	int colsum(int x)
	{
		int i;
		ll ans = 0;
		FOR(i, n)
		{
			ans += mat[i][x];
			if (ans >= mod) ans -= mod;
		}
		return ans;
	}
};

matrix operator *(matrix a, matrix b)
{
	matrix c = matrix(a.n,0,0);
	int i, j, k, n = c.n;
	FOR(i, n) FOR(j, n)
	{
		int& val = c.mat[i][j];
		val = 0;
		FOR(k, n)
		{
			val += (a.mat[i][k]*)
		}
	}
		

	return c;
}
