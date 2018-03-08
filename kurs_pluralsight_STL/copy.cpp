#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>
#include <numeric>
#include <string>
using namespace std;

int main(){
void wypisz(vector<int> someVector);
std::vector<int> source{3,6,1,0,-2,5};
std::vector<int> v2(source.size()); // inicjuje wektor v2 o rozmiarze wektora source i wypełnia go zerami

wypisz(v2);
copy(begin(source), end(source), begin(v2));
wypisz(v2);
auto v3 = v2;
wypisz(v3);

auto position = find(begin(source), end(source) , 1);
std::vector<int> v4(source.size());
//copy(begin(source), position, begin(v4)); // kopije az natknie sie na arg2
copy(begin(source), position+1, begin(v4)); // skopuje razem z arg2
wypisz(v4);

std::vector<int> v5(source.size());
copy_if(source.begin(), source.end(), begin(v5), [](int elem){return elem % 2 == 0;});//kopuje tylko liczby spelniajace war z lambdy
wypisz(v5);

copy_n(begin(v5), 3, begin(v2)); // (poczatek, ilosc elem z kolekcji arg1, cel)
wypisz()
copy(begin(source), position+1, position+1); // arg1 - zrodlo,pocztek zakresu / arg2-koniec zakresu/ arg3-cel
//copy(begin(s))
copy_backward(begin(source),end(source)-1, end(source)); // przesuwanie elem w prawo
wypisz(source);
}




void wypisz(vector<int> someVector)
	{
		//for (auto i: someVector) -> taka petla operuje na typie zdeklarowanym jako typ elementu vectora
		for (std::vector<int>::iterator i = someVector.begin(); i != someVector.end(); ++i)  // taka zoperuje na iteratorach
		cout << *i << ' '; //dla drugiej wersji wskaznik bo wskaznik na iterator pokazuje wartosc elementu 
							// dla pierwszej wersji bez * bo operuje na type zadeklarowanym
    	cout << endl;
		
	}