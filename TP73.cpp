#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVector (vector<int> A, int n);
vector<int> SumarVectores (vector<int> A, vector<int> B, int n);
void MostrarVector(vector<int> A);

int main()
{
	vector<int> A;
	vector<int> B;
    vector<int> C;
    int N=10;
	A = GenerarVector(A, N);
	B = GenerarVector(B, N);
    C = SumarVectores(A, B, N);
	MostrarVector(A);
	MostrarVector(B);
	MostrarVector(C);
	return 0;
}
vector<int> GenerarVector (vector<int> V, int n)
{
	int i;
	int e;
	srand (time (NULL));
	for(i=0; i<n; i++)
	{
		e=rand()%1500;	
		V.push_back (e);
	}
	return V;
}

vector<int> SumarVectores (vector<int> A, vector<int> B, int n)
{
	int i;
	vector<int> C;
	int e;
	for(i=0; i<A.size(); i++)
	{
		e = A[i]+B[i];
		C.push_back (e);
	}
	return C;
}

void MostrarVector(vector<int> A)
{
	int i;
	for(i=0; i<A.size(); i++)
	{
		cout<<A[i]<<"/";
	}
	cout<<endl;
}
