#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> a{2,2};
	std::vector<int> b{1, 2, 54, 6, 8, 0};
	bool same = a.size() == b.size();
	for (size_t i = 0; i < a.size()&&same; ++i)
	{
		if(a[i] != b[i]){
			same = false;
		}
	}
	//equal i mismatch
	same = equal(begin(a), end(a), b.begin(), b.end());
	auto firstchange = mismatch(a.begin(), a.end(), b.begin());  // mismatch zwroci pare iteratorow
	int avalue = *(firstchange.first);
	int bvalue = *(firstchange.second);
	auto distance = firstchange.first - begin(a);
	cout << "distance: " << distance << endl;


	//acuumulate - sumuje wszystkie wartosci
	int total = 0;
	total = accumulate(a.begin(), a.end(), 0);
	cout << "acuumulate: " << total << endl;
	//modyfikacja accumulate lambda
	total = accumulate(a.begin(), a.end(), 0 , [](int total, int i ){if(i%2) return total + i; return total;});
	cout << "acuumulate 2: " << total << endl;
	total = accumulate(a.begin(), a.end(), 3, [](int total, int i){return total*i;});
	cout << "acuumulate 3: " << total << endl;
	//accumulate ze stringami
	std::vector<string> words{"one","two", "three"};
	auto allwords = accumulate(words.begin(), words.end(), string{});
	cout << "acuumulate words 1: " << allwords << endl;
	allwords = accumulate(words.begin(), words.end(), string{"words are: "}, [](const string& total, string& s){return total + " " + s;});
	cout << "acuumulate words 2: " << allwords << endl;

	return 0;
}