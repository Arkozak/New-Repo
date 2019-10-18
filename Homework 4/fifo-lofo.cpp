
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

bool TestFifo(vector<string>& container, const string& item)
{
	if (container[0] == item)
	{
		cout << "It will work" << endl;
		return 1;
	}
	else
	{
		cout << "It wont work" << endl;
		return 0;
	}
}

bool TestLifo(vector<string>& container, const string& item)
{
	if (container[container.size()-1] == item)
	{
		cout << "It will work" << endl;
		return 1;
	}
	else
	{
		cout << "It wont work" << endl;
		return 0;
	}
}

bool IsContainerEmpty(const vector<string>& container)
{
	if (container.empty())
	{
		cout << "Refilling the container with what you had before." << endl;
		return 1;
	}
	else
	{
		cout << "The container is full" << endl;
		return 0;
	}
}

void PrintContainer(const vector<string>& container)
{
	for (auto i = 0; i < container.size(); i++)
	{
		cout << container[i] << " ";
	}
	cout << endl;
}

void FifoPush(vector<string>& container, const string& item)
{
	cout << "Now we put the final string in the front of the vector." << endl;
	container.insert(container.begin(),item);
	PrintContainer(container);
}

void FifoPop(vector<string>& container, const string& item)
{
	TestFifo(container, item);
	cout << "Removing front to back." << endl;
	int x = container.size();
	for (int i = 0; i < x; i++)
	{
		cout << i << "." << container[0] << endl;
		container.erase(container.begin());
	}
	cout << endl;
}

void LifoPush(vector<string>& container, const string& item)
{
	cout << "Now we put the final string in the back of the vector." << endl;
	container.push_back(item);
	PrintContainer(container);
}

void LifoPop(vector<string>& container, const string& item)
{
	TestLifo(container, item);
	int x = container.size();
	cout << "Removing front to back." << endl;
	for (int i = 0; i < x; i++)
	{
		cout << i <<"." << container[container.size() - 1] << endl;
		container.pop_back();
	}
	cout << endl;
}

int main()
{
	string str;
	vector<string> container;
	vector<string> filler;

	cout << "Please enter some strings.";
	cout << " To end type end." << endl;

	while (str != "end" && str != "END" && str != "End") 
	{
		cin >> str;
		container.push_back(str);
	}
	
	cout << "Enter a final string: ";
	cin >> str;

	filler = container;

	FifoPush(filler, str);

	FifoPop(filler, str);

	if (IsContainerEmpty(filler) == 1)
	{
		filler = container;
	}

	LifoPush(filler, str);

	LifoPop(filler, str);

	if (IsContainerEmpty(filler) == 1)
	{
		filler = container;
	}


}