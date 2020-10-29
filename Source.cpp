#include "pch.h"
#include<stdlib.h>
#include<string>
#include"Source.h"
using namespace university;

university::University::University(int yearOfFoundation, int numberOfSpecialities, int numberOfBuildings, string rector) {
	this->yearOfFoundation = yearOfFoundation;
	this->numberOfSpecialities = numberOfSpecialities;
	this->numberOfBuildings = numberOfBuildings;
	this->rector = rector;
}

int university::University::numberOfStudents(int numberOfStudents)
{
	this->students = numberOfStudents;
	return students;
}

int university::University::numberOfFaculties(int numberOfFaculties)
{
	this->faculties = numberOfFaculties;
	return faculties;
}

int university::University::numberOfSubjects(int numberOfSubjects)
{
	this->subjects = numberOfSubjects;
	return subjects;
}

university::TechnicalUniversity::TechnicalUniversity(int numberOfTechnicalDisciplines)
{
	this->technicalDisciplines = numberOfTechnicalDisciplines;

}

university::HumanitiesUniversity::HumanitiesUniversity() {
}

int university::HumanitiesUniversity::numberOfHumanitiesDisciplines(int numberOfHumanitiesDisciplines)
{
	this->humanitiesUniversity = numberOfHumanitiesDisciplines;
	return humanitiesUniversity;
}

university::NaturalUniversity::NaturalUniversity() {
}

int university::NaturalUniversity::numberOfNaturalDisciplines(int numberOfNaturalDisciplines)
{
	this->naturalDisciplines = numberOfNaturalDisciplines;
	return naturalDisciplines;
}

university::EconomicsUniversity::EconomicsUniversity() {
}

int university::EconomicsUniversity::numberOfEconomicsDisciplines(int numberOfEconomicsDisciplines)
{
	this->economicsDisciplines = numberOfEconomicsDisciplines;
	return economicsDisciplines;
}

university::BSUIR::BSUIR(int yearOfFoundation, int numberOfSpecialities, int numberOfBuildings, string rector, int numberOfTechnicalDisciplines) : University(yearOfFoundation, numberOfSpecialities, numberOfBuildings, rector), TechnicalUniversity(numberOfTechnicalDisciplines), HumanitiesUniversity(), EconomicsUniversity(), NaturalUniversity() {}

void university::BSUIR::information()
{
	cout << " Белорусский государственный университет информатики и радиоэлектроники был основан в " << yearOfFoundation << " году. БГУИР в себе содержит " << numberOfBuildings << " корпусов, количество специальностей составляет число "
		<< numberOfSpecialities << ". Ректором этого университета является " << rector << ". А теперь более подробная информация:" << endl;
}

