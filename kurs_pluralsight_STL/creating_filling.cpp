
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>
#include <numeric>
#include <string>
using namespace std;

int main()
{

		void wypisz(vector<int> v);
		vector<int> v6(10);
		fill(v6.begin(), v6.end(),  1); //zapelnia wektor jedynkami
		iota(v6.begin(), v6.end(),7); // wypelnia wektor 1,2,3 ..... zaczynajac od arg3
		wypisz(v6);

		int index = 10;
	// generate zapelnia kolekcje wynikami wyrazenia lamda
		generate(v6.begin(), v6.end(), [&index](){return index--; });
		wypisz(v6);
		index = 1;
		// generate_n wypelnia pierwszych arg2 pozycji wynikami lambdy
		generate_n(begin(v6), 7, [&index](){return (index*=2); });
		wypisz(v6);
//zamienia wszystkie elementy o wartosci 2 na wart 7
		replace(v6.begin(), v6.end(), 2 , 7);
		wypisz(v6);
// zamienia wszystkie elem spelniajace arg3 na arg4
		replace_if(v6.begin(), v6.end(), [](int elem){return elem<16;}, 7);
		wypisz(v6);
//transform- zmienia wartosci elementow w kolekcji poprzez lambde
		std::vector<int> v7{5,2,6,3,8,1,2,3};
		transform(v7.begin(), v7.end(),begin(v7), [](int elem){return elem*2;});
		wypisz(v7);
		std::vector<int> v8(8);
//transform- inne arg- bierze pare elementów arg1 i arg3 (konczy na arg 2)- wykonuje na nich lambde i wynik zapisuje do arg4
//mozna uzywac do porownywania roznych kolekcji albo np dodawac do siebie elem dwoch wektorow i zapisac w trzecim		
transform(begin(v7), end(v7)-1, begin(v7)+1, begin(v8) , [](int elem1, int elem2){return elem1-elem2; } );
		wypisz(v8);
		//usuwanie duplikatow nastepujacych po sobie z kolekcji
		v8.erase(unique(v8.begin(), v8.end()), v8.end());
		wypisz(v8);
	unique_copy(v8.begin(), v8.end(),begin(v7));
	wypisz(v7);
//odwracanie stringa
	string sentence = "Hello world!";
	reverse(sentence.begin(), sentence.end());
	cout << sentence << endl;




}		
void wypisz(vector<int> someVector)
	{
		for (auto i: someVector)
		//for (std::vector<int>::iterator i = someVector.begin(); i != someVector.end(); ++i)
		cout << i << ' ';
    	cout << endl;
		
	}
