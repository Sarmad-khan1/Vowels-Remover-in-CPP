#include <iostream>
using namespace std;
int main()
{
	string word;
	cout<<"Enter word: ";
	getline (cin, word);
	string storerOFstring=" ";
	
for ( int i=0; i<word.length(); i++)
{
	char letters = word[i];
	if( letters == 'a'|| letters == 'e'|| letters == 'i' || letters == 'o' || letters == 'u')
	{
		continue;
	}	
	storerOFstring = storerOFstring + letters;
	
}
cout<<"Word without vowels comes out to be: "<<storerOFstring<<endl;
}