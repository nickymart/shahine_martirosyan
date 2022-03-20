#include <iostream>
#include <string>
using namespace std;

void permute(string a, int l, int r);
int main()
{
	string word ;
	cout << "Input:";
	cin >> word;
	int size = word.size();
	permute(word, 0, size);
	return 0;
}
void permute(string word,int l, int size)
{
	if (l == size) {
		cout<< word <<endl;
	}
	else
	{
		for (int i = l; i < size; i++)
		{
			swap(word[l], word[i]);
			permute(word, l+1, size);
			swap(word[l], word[i]);
		}
	}
}
