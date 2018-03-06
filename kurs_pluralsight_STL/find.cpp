
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>

using namespace std;

int main()
{
	void wypisz(vector<int> v);
	vector<int> v{0,4,17,6,8,8,23,23,23,45,24,-3,-65,23, 8, 23, 0, -19}	;	
	string s{"Hello I am a sentence"};

	//find first values
	auto result = find(v.begin(), v.end(), 23);
	int weLookedFor = *result;
	cout << weLookedFor << endl;	
	auto letter = find(begin(s), end(s), 'a');
	char a = *letter;
	cout << a << endl;
//fin_if- zwraca pierwszy napotkany element zwracajacy warunek
	result = find_if(v.begin(), v.end(), [](auto elem){return elem % 2 != 0;});
	weLookedFor = *result;
	cout << "rezultat z find_if: " << weLookedFor << endl;
//fin_if_not- zwraca pierwszy napotkany element zwracajacy warunek
	result = find_if_not(v.begin(), v.end(), [](auto elem){return elem % 2 != 0;});
	weLookedFor = *result;
	cout << "rezultat z find_if_not: " << weLookedFor << endl;
	//find_first_of znajduje elementy z drugieg zbioru ktore wystepuja w pierwszym zbiorze
	std::vector<int> primes{1,2,3,5,7,11,13,17};
	result = find_first_of(v.begin(), v.end(), primes.begin(), primes.end());
	weLookedFor = *result;
	cout << "rezultat z find_first_of: " << weLookedFor << endl;
	//search- znajduje sekwencje z drugiego zbioru ktore wystepuja w pierwszym zbiorze
	// i zwraca adres pierwszego elementu z szukanej sekwencji
	std::vector<int> subsequence{23,23,45};
	result = search(v.begin(), v.end(), subsequence.begin(), subsequence.end());
	//result++;
	//result++;
	weLookedFor = *result;
	cout << "rezultat z search: " << weLookedFor << endl;
	string am = "am" ;
	letter = search(s.begin(), s.end(), am.begin(), am.end());
	a = *letter;
	char b = *++letter; //++ ma wiekszy priorytet
	cout << "rezultat z search w stringu: " << a << b << endl;
	//find_end - uwaga! find_end działa jak search ale zwraca adres
	//pierwszego elem z ostatniego z wystapien szukanej sekwencji
	result = find_end(v.begin(), v.end(), subsequence.begin(), subsequence.end());
	result++;
	result++;
	weLookedFor = *result;
	cout << "rezultat z find_end: " << weLookedFor << endl;

	//search_n - znajduje powtorne wystapienia elementów zaraz po sobie np 2,2,2...
	// arg: (1-poczatek, 2-koniec, ilosc wystapien, wartosc elementu)
	//zwraca pierwszy element  z pierwszej sekwencji wystapien
	result = search_n(v.begin(), v.end(), 2, 23);
	weLookedFor = *result;
	cout << "rezultat z search_n: " << weLookedFor << endl;
	//adjacent_find - znajduje powtórne wystapienie elementu w kolekcji ale tylko jesli
	//elementy wystepuja zaraz po sobie8
	result = adjacent_find(v.begin(), v.end());
	//result++;
	//result++;
	//result++;
	weLookedFor = *result;
	cout << "rezultat z adjacent_find: " << weLookedFor << endl;


	return 0;
}

void wypisz(vector<int> someVector)
	{
		for (auto i: someVector)
		//for (std::vector<int>::iterator i = someVector.begin(); i != someVector.end(); ++i)
		cout << i << ' ';
    	cout << endl;
		
	}