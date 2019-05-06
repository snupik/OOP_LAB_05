#pragma once
#define M 3
#define Y 2
#define N 5

void inclusionSort(int*, int);

class Excursion
{
protected:
	char name[10];
	int day;
	int month;
	int year;
	int duration;
	int price;
	char guide[20];
	int fraction;
	int numb;
public:
	Excursion();
	~Excursion();
	void SetName(const char*);
	void SetDate(int, int, int);
  void SetDuration(int);
	void SetPrice(double);
	char* GetName() { return name; }
	int GetDay() { return day; }
	int GetMonth() { return month; }
	int GetYear() { return year; }
	 int GetDuration() { return duration; }
	 virtual int GetPrice() { return price; }
	void SetGuide(const char*);
	void SetFraction(double);
	void SetNumb(int);
	char* GetGuide() { return guide; }
	int GetFraction() { return fraction; }
	int GetNumb() { return numb; }
	double Income();
};

class PedExcursion :
	public Excursion
{
private:

public:
	PedExcursion();
	~PedExcursion();

};

class MixExcursion :
	public Excursion
{
private:
	char driver[20];
	   	int n;
public:
	MixExcursion();
	~MixExcursion();
	int GetPrice() override;
	void Setdriver(const char*);
	void Setn(int);
	char* Getdriver() { return driver; }
	int Getn() { return n; }

	//double cmp(char*, char*);
};
