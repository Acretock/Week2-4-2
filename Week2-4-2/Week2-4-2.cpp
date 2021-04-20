#include <map>
#include <set>
#include <string>
#include <iostream>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& map) {
	set<string> res;
	for (auto i : map)
		res.insert(i.second);
	return res;
}

int main()
{
	map<int,string>values = { {1,"odd"},{2,"even"},{3,"odd"},{4,"even"},{5,"odd"} };
	set<string>res = BuildMapValuesSet(values);
	for (const string& value : res) {
		cout << value << endl;
	}
}
