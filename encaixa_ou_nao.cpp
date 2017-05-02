#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int qtd;
	cin >> qtd;

	for (int i = 0; i < qtd; ++i)
	{
		string str1, str2;

		cin  >> str1 >> str2;
		if(str2.size() >  str1.size())
		{		
			printf("nao encaixa\n");
			continue;
		}

		std::string::size_type sz;


		
		int tam1 = str1.size();
		int tam2 = str2.size();
		
		string aux  = str1.substr(tam1-tam2,tam2);

		int dif = 1;
		for (int  j= 0; j < tam2; ++j)
		{
			if(str2[j] !=aux[j])
			dif = 0;
		}

		if(dif)
		{
			printf("encaixa\n");
		}
		else
		{
			printf("nao encaixa\n");
		}

	}



}	