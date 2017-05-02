#include <bits/stdc++.h>
using namespace std;
int main()
{
	string palavra;
	int qtd;
	cin >> qtd;

	std::vector<string> textos;

	textos.push_back("one");
	textos.push_back("two");
	for (int i = 0; i < qtd; ++i)
	{
		int maior = 0;
		int contador = 0;
		int index =0;

		cin >> palavra;
		if(palavra.size() == 5)
		{
			printf("3\n");
			continue;
		}
		for (int j = 0; j < 2; ++j)
		{
			for (int l = 0; l < 3; ++l)
			{
				if(textos[j][l] == palavra[l])
				{
					contador++;
				}
			}
			if(contador >= 2)
			{
				printf("%d\n",j+1);
			}
			contador = 0;
		}
	}

}	