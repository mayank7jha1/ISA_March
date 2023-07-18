#include <iostream>
using namespace std;
int main()
{

	int n=6;

	for(int i=0;i<n;i++)
	{

		// print n-i spaces in every row before printing stars
		for(int j=0;j<(n-i);j++)
		cout<<" ";



		// print i+1 stars in every row
		for(int j=0;j<(i+1);j++)
		cout<<"*";

		cout<<endl;
	}


}