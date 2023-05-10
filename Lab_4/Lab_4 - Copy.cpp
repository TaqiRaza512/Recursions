#include<iostream>
#include<vector>
#include<string>
using namespace std;
int SimpleSum(int N)
{
	if (N==0)
		return 0;
	return N+SimpleSum(N - 1);
}
int OddSum(int N)
{
	if (N ==1)
		return 1;
	return N + OddSum(N - 2);
}
long long Power2(int N)
{
	if (N == 0)
		return 1;
	return pow(2,N)+Power2(N-1);
}
long long Power3(int N)
{
	if (N == 0)
		return 1;
	return pow(3, N) + Power3(N - 1);
}
int GM3(int N)
{
	if (N == 0)
		return 0;
	return N+GM3(N/3);

}
int GM2(int N)
{
	if (N == 0)
		return 0;
	return N + GM3(N / 2);

}
int DecToBin(int N)
{
	if (N == 0)
		return 0;
	return N%2+DecToBin(N / 2)*10;
}
string ItoString(int N,int remainder)
{
	if (N == 0)
	{
		char(remainder + 48);
		string result(1, char(remainder + 48));
		return result;
	}
	return ItoString(N / 10, N % 10) + char(48 + remainder);
}
int GCD(int A, int B)
{
	if (A % B == 0)
		return B;
	return GCD(B, A % B);

}
int SearchLastEntry(int arr[], int size,int value)
{
	if (size== 0)
		return -1;

	if (arr[size - 1] == value)
		return size-1;

	return SearchLastEntry(arr, size - 1, value);
}
int SearchFirstEntry(int arr[], int size,int n, int value)
{
	if (n==size)
		return -1;

	if (arr[n] == value)
		return n;

	return SearchFirstEntry(arr, size,n+1,value);
}
int BinarySearch(int Arr[],int size,int value,int si,int ei)
{
	if (si <= ei)
	{
		int mid = si + (ei - si) / 2;

		if (Arr[mid] == value)
			return mid;

		if (Arr[mid] > value)
		{
			ei = mid;
		}
		else if (Arr[mid] < value)
		{
			si = value;
		}
		BinarySearch(Arr, size, value, si, ei);
	}
	else
	{
		return -1;
	}
}
int Power(int X, int Y,int Mod)
{
	if (Y == 0)
		return 1;
	int R = Power(X, Y - 1,Mod);
    return X*R%Mod;
}
int PowerFast(int X, int Y, int Mod)
{
	if (Y == 0)
		return 1;
	int R = PowerFast(X, Y / 2,Mod);

	if (Y % 2 == 0)
		return (R*R)%Mod;
	else if (Y % 2 == 1)
	{
		return (X*R*R)%Mod;
	}
}
int Mult(int A, int B)
{
	if (B == 0)
		return 0;
	return A+Mult(A, B - 1);
}
int Div(int A, int B,int count)
{
	if (A<B)
		return 0;
	A -= B;
	return count+Div(A,B,count);
}
int FastDiv(int A, int B, int count,int remainder)
{
	int temp = B,Quotient=0;

		if (remainder<= B)
			return 0;
		while (B + B <= remainder)
		{
			B += B;
			count += count;
		}
		remainder -= B;
		Quotient+= count;
		count = 1;
		B = temp;
		return Quotient+FastDiv(A,temp,count,remainder);
}
int FastRemainder(int A, int B, int count, int remainder)
{
	int temp = B;

	if (remainder < B)
		return remainder;
	while (B + B < remainder)
	{
		B += B;
	}
	remainder -= B;
	B = temp;
	return FastRemainder(A, B, count, remainder);
}
int Remainder(int A, int B)
{
	if (A<B)
		return A;
	A -= B;
	return Remainder(A, B);
}
int FastMult(int A, int B,int count)
{
	int temp = A;
	int Total = 0;
	if (B == 0)
		return 0;
	while (count + count <= B)
	{
		A += A;
		count += count;
	}
	B -= count;
	Total += A;
	A = temp;
	count = 1;
	return Total+FastMult(temp,B,count);
}
long long Fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	return Fib(n - 1) + Fib(n - 2);
}
long long FibFast(vector<int>& Vs, int N)
{
	if (Vs[N] != -1)
		return Vs[N];
	return Vs[N] = FibFast(Vs, N - 1) + FibFast(Vs, N - 2);
}

long long MemoryBasedFib(int N)
{
	vector <int> Fs(N + 1, { -1 });
	Fs[0] = 0;
	Fs[1] = 1;
	return FibFast(Fs, N);
}
long long TriSumFast(vector<int>& Vs, int N)
{
	if (Vs[N] != -1)
		return Vs[N];
	return Vs[N] = TriSumFast(Vs, N - 1) + TriSumFast(Vs, N - 2) + TriSumFast(Vs, N - 3);
}

long long MemoryBasedTriSum(int N)
{
	vector <int> Fs(N + 1, { -1 });
	Fs[0] = 1;
	Fs[1] = 2;
	Fs[2] = 3;
	return TriSumFast(Fs, N);
}

int main()
{
	//==========Question No 1============
	//cout<<SimpleSum(100)<<endl;
	//cout << OddSum(9)<<endl;
	//cout << Power2(6)<<endl;
	//cout << Power3(36)<<endl;
	//cout << GM3(9)<<endl;
	//cout << GM2(8)<<endl;
	//cout << DecToBin(65);
	//cout<<"\n"<<ItoString(9024483857/10, 1024483857 % 10)<<"\n";
	//cout << GCD(1000,100);
	int Arr[] = { 1,2,3,4,5,6,7,8 };
	int size = sizeof(Arr) / sizeof(Arr[0]);
	//cout<<SearchLastEntry(Arr, sizeof(Arr)/sizeof(Arr[0]), 8)<<endl;
	//cout<<SearchFirstEntry(Arr, sizeof(Arr)/sizeof(Arr[0]),0, 8);
	//cout << BinarySearch(Arr, size, 4, 0, size - 1) << endl;
	//cout<<Power(2, 11, 10000);
	//cout << endl;
	//cout<<PowerFast(2,11,10000);
	//cout << endl;
	//cout << Mult(8, 438);
	//cout << endl;
	//cout << " =========================\n";
	//cout << FastMult(2, 102434768,1);
	//cout << Div(1500, 3, 1);
	//cout << endl;
	//cout << FastDiv(1500, 0, 1,1500);
	//cout<<FastRemainder(1509, 5, 1, 1509);
	//cout << endl << endl;
	//cout << Remainder(1504, 5);
	cout << MemoryBasedTriSum(50);

}