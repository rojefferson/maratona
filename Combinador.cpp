#include <bits/stdc++.h>
using namespace std;
int main()
{
	int qtd;

	cin>> qtd;

	for (int i = 0; i < qtd; ++i)
	{
	  string texto1,texto2;

	  cin >> texto1 >>  texto2;

	  int index = 0;

	  while(true)
	  {
	  	cout << texto1[index];
	  	cout << texto2[index];
	  	if(index == texto1.size() -1 || index == texto2.size()-1)
	  	{
	  		break;	
	  	}
	  	index++;	
	  }

	  if(index < texto1.size() -1)
	  { 
	  	for (int j = index+1; j< texto1.size(); ++j)
	  	{
	  		cout << texto1[j];
	  	}
	 
	  }

	  if(index <texto2.size()-1)
	  {
	  	for (int j = index+1; j < texto2.size(); ++j)
	  	{
	  		cout << texto2[j];
	  	}

	  }

	  cout << endl;
	}
}	