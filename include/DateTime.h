#ifndef DATETIME_H
#define DATETIME_H
#include <ctime>
#include <string>
class DateTime
{
private:
	time_t time_in_sec;
	tm timetable;
public:
	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	std::string getToday(); //- ����������� ������� ���� � ���� ������, � ��������� ��� ������ � �������� ������(�������� 07 november 2018, wedensday);
	std::string getYesterday(); //- ����������� ���� ���������� ��� � ���� ������.
	std::string getTomorrow(); //- ����������� ���� ����������� ��� � ���� ������.
	time_t getFuture(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	time_t getPast(unsigned int N); //- ����������� ���� ����� N ���� � �������;
	time_t getDifference(DateTime&); //- ��� ������� �������(� ����) ����� ����� ������

};
#endif