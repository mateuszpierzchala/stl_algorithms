// stable_sorting_classes.cpp
// STABLE SORT - w przypadku dwoch rownych obiektów zostawia je w zastanym porzadku


#include <vector>
#include <algorithm>
#include <cmath>
#include <random>
#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	std::vector<Employee> staff
	{
		{"Kate", "Gregory", 1000},
		{"Kate", "Abnory", 2500},
		{"Kate", "Rubnory", 500},
		{"Adam", "Gregory", 12550},
		{"Louise", "Jones", 1556},
	};


	std::sort(begin(staff), end(staff), [](Employee e1, Employee e2){return e1.getSalary() < e2.getSalary();}); //sortowanie wg zarobkow
	
   
	std::sort(begin(staff), end(staff), [](Employee e1, Employee e2){return e1.getSortingName() < e2.getSortingName();}); // sortowanie po naziwsku

	std::stable_sort(begin(staff), end(staff), [](Employee e1, Employee e2){return e1.getSalary() < e2.getSalary();}); // sortowanie po zarobkach z zachowaniem kolejnosci wpisow w przypadku remisow - istota stable_sort

}
