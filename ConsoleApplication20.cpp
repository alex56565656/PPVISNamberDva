#include "pch.h"
#include <iostream>
#include<string>
#include "Source.h"
using namespace std;
using namespace university;

int main()
{
	setlocale(LC_ALL, "Russian");
	BSUIR bsu(1964, 44, 7, "Богуш Вадим Анатольевич", 25);

	cout << " Количество экономических дисциплин, преподаваемых в данном ВУЗе - " << bsu.numberOfEconomicsDisciplines(10) << endl;
	cout << " Количество естественных дисциплин, преподаваемых в данном ВУЗе - " << bsu.numberOfNaturalDisciplines(17) << endl;
	cout << " Количество гуманитарных дисциплин, преподаваемых в данном ВУЗе - " << bsu.numberOfHumanitiesDisciplines(30) << endl;
	bsu.information();
	cout << endl;
	cout << " Количество факультетов составляет " << bsu.numberOfFaculties(7) << " штук; обучается в общей сложности здесь " << bsu.numberOfStudents(10000)
		<< " студентов\n Количество предметов составляет " << bsu.numberOfSubjects(34);
	cout << endl;
}

