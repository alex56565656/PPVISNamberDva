#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace university
{
	class University
	{
	protected:
		int yearOfFoundation;
		int numberOfSpecialities;
		int numberOfBuildings;
		int students;
		int faculties;
		int subjects;
		string rector;

	public:
		University(int yearOfFoundation, int numberOfSpecialities, int numberOfBuildings, string rector);
		int numberOfStudents(int numberOfStudents);
		int numberOfFaculties(int numberOfFaculties);
		int numberOfSubjects(int numberOfSubjects);
		virtual void information() = 0;
	};

	class TechnicalUniversity : protected virtual University
	{
	protected:
		int technicalDisciplines;
	public:
		TechnicalUniversity(int numberOfTechnicalDisciplines);
	};

	class HumanitiesUniversity : protected virtual University
	{
	protected:
		int humanitiesUniversity;
	public:
		HumanitiesUniversity();
		int numberOfHumanitiesDisciplines(int numberOfHumanitiesDisciplines);
	};

	class NaturalUniversity : protected virtual University 
	{
	protected:
		int naturalDisciplines;
	public:
		NaturalUniversity();
		int numberOfNaturalDisciplines(int numberOfNaturalDisciplines);
	};

	class EconomicsUniversity : public virtual University
	{
	protected:
		int economicsDisciplines;
	public:
		EconomicsUniversity();
		int numberOfEconomicsDisciplines(int numberOfEconomicsDisciplines);
	};


	class BSUIR : private TechnicalUniversity, public HumanitiesUniversity, public NaturalUniversity, public EconomicsUniversity
	{
	public:
		BSUIR(int yearOfFoundation, int numberOfSpecialities, int numberOfBuildings, string rector, int numberOfTechnicalDisciplines);
		void information() override;
	};

}