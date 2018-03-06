#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

void wypisz(vector<int> someVector);

	std::vector<int> a{1, 2, 3, 4, 5, 6};
	std::vector<int> b{1, 2, 54, 6, 8, 0};
	b=a;
	for(auto it = begin(b); it!=end(b); it++)
	{
		*it = 0;
	}
	wypisz(b);

	for(auto& i : b)
	{
		i = 2;
	}
	wypisz(b);

	for_each(begin(b), end(b), [](int& elem){elem *= 2;});
	wypisz(b);

	b=a;
	auto firstthree = find(b.begin(), b.end(),3);
	for_each(firstthree,end(b), [](int& elem){elem=0;});
	wypisz(b);

	return 0;
}

void wypisz(vector<int> someVector)
	{
		//for (auto i: someVector) -> taka petla operuje na typie zdeklarowanym jako typ elementu vectora
		for (std::vector<int>::iterator i = someVector.begin(); i != someVector.end(); ++i)  // taka zoperuje na iteratorach
		cout << *i << ' '; //dla drugiej wersji wskaznik bo wskaznik na iterator pokazuje wartosc elementu 
							// dla pierwszej wersji bez * bo operuje na type zadeklarowanym
    	cout << endl;
		
	}