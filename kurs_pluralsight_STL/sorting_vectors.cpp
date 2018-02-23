
//sorting.cpp	

#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>

using namespace std;

int main()
{
	void wypisz(vector<int>& v);

	vector<int> v{3,4,5,6,8,23,23,23,45,24,-3,-65,23, 0 , -19}	;
	auto v2=v;
	wypisz(v);
	sort(begin(v2), end(v2));
	wypisz(v2);

	sort(begin(v2), end(v2), [](int e1, int e2){return e1>e2;});
	wypisz(v2);
	sort(begin(v2), end(v2), [](int e1, int e2){return abs(e2)>abs(e1);});
	wypisz(v2);


	auto sorted = is_sorted(begin(v2),end(v2));
	sorted = is_sorted(begin(v2), end(v2), [](int e1, int e2){return abs(e2) > abs(e1);});
	cout << sorted;
	

		return 0;
}

void wypisz(vector<int>& v)
	{
		for (auto i: v)
    	cout << i << ' ';
    	cout << endl;
		
	}
