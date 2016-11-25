#include "BST.cpp"

int main()
{
	BST<string> t;
	string s;
	ifstream myfile("Dictionary.txt");
	while (!myfile.eof())
	{
		getline(myfile, s);
		t.insert(s);
	}
	while ("SirRiddle")
	{
		cin >> s;
		if (t.search(s))
		{
			cout << "Word found correctly\n";
		}
		else
		{
			cout << "Word wasn't found\n";
		}
	}

	return 0;
}