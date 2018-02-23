
//sorting.cpp	

#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>

using namespace std;

int main()
{
	std::vector<int> v{3,4,5,6,8,23,23,23,45,24,-3,-65,23, 0 , -19}	;
	auto v2=v;
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
   	 	std::cout << *i << ' ';
    	cout << endl;
	sort(begin(v2), end(v2));
	for (std::vector<int>::const_iterator i = v2.begin(); i != v2.end(); ++i)
    	std::cout << *i << ' ';
    	cout << endl;

	sort(begin(v2), end(v2), [](int e1, int e2){return e1>e2;});
	for (std::vector<int>::const_iterator i = v2.begin(); i != v2.end(); ++i)
    	std::cout << *i << ' ';
    	cout << endl;

	sort(begin(v2), end(v2), [](int e1, int e2){return abs(e2)>abs(e1);});
	for (std::vector<int>::const_iterator i = v2.begin(); i != v2.end(); ++i)
    	std::cout << *i << ' ';
    	cout << endl;


auto sorted = is_sorted(begin(v2),end(v2));
sorted = is_sorted(begin(v2), end(v2), [](int e1, int e2){return abs(e2) > abs(e1);});
cout << sorted;
	return 0;
}