#include "Header.h"
#include <iostream>
using namespace std;

//#include "Header.h"



//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int ex[Y] = { 0 }, n = N, mex[M] = { 0 };
//	char names[N][10] = { 0 };
//	PedExcursion exc[Y]; MixExcursion mexc[M];
//	exc[0].SetName("Exc1");
//	exc[0].SetDate(28, 12, 2018);
//	exc[0].SetDuration(10);
//	exc[0].SetPrice(500);
//	exc[0].SetGuide("Vova");
//	exc[0].SetFraction(100);
//	exc[0].SetNumb(0);
//	exc[1].SetName("Exc2");
//	exc[1].SetDate(25, 11, 2017);
//	exc[1].SetDuration(40);
//	exc[1].SetPrice(1500);
//	exc[1].SetGuide("Vova");
//	exc[1].SetFraction(10);
//	exc[1].SetNumb(0);
//	mexc[2].SetName("Exc3");
//	mexc[2].SetDate(8, 11, 2018);
//	mexc[2].SetDuration(25);
//	mexc[2].SetPrice(300);
//	mexc[2].SetGuide("Vasia");
//	mexc[2].Setdriver("slender");
//	mexc[2].Setn(2);
//	mexc[2].SetFraction(20);
//	mexc[2].SetNumb(1);
//	mexc[3].SetName("Exc4");
//	mexc[3].SetDate(5, 11, 2017);
//	mexc[3].SetDuration(5);
//	mexc[3].SetPrice(150);
//	mexc[3].SetGuide("Petya");
//	mexc[3].Setdriver("Vakus");
//	mexc[3].Setn(3);
//	mexc[3].SetFraction(30);
//	mexc[3].SetNumb(2);
//	mexc[4].SetName("Exc5");
//	mexc[4].SetDate(5, 1, 2017);
//	mexc[4].SetDuration(55);
//	mexc[4].SetPrice(2000);
//	mexc[4].SetGuide("Petya");
//	mexc[4].Setdriver("Oleg");
//	mexc[4].Setn(3);
//	mexc[4].SetFraction(30);
//	mexc[4].SetNumb(2);
//		for (int i = 0; i < N; i++) {
//		if (exc[i].GetNumb() == 0) {
//			strcpy_s(names[0], exc[i].GetGuide());
//			ex[0] += exc[i].Income();
//		}
//		else if (mexc[i].GetNumb() == 0) {
//			strcpy_s(names[0], mexc[i].GetGuide());
//			ex[0] += mexc[i].Income();
//		}
//		else if (exc[i].GetNumb() == 1) {
//			strcpy_s(names[1], exc[i].GetGuide());
//			ex[1] += exc[i].Income();
//		}
//		else if (mexc[i].GetNumb() == 1) {
//			strcpy_s(names[1], mexc[i].GetGuide());
//			ex[1] += mexc[i].Income();
//		}
//		else if (exc[i].GetNumb() == 2) {
//			strcpy_s(names[2], exc[i].GetGuide());
//			ex[2] += exc[i].Income();
//		}
//		else if (mexc[i].GetNumb() == 2) {
//			strcpy_s(names[2], mexc[i].GetGuide());
//			ex[2] += mexc[i].Income();
//		}
//		else if (exc[i].GetNumb() == 3) {
//			strcpy_s(names[3], exc[i].GetGuide());
//			ex[3] += exc[i].Income();
//		}
//		else if (mexc[i].GetNumb() == 3) {
//			strcpy_s(names[3], mexc[i].GetGuide());
//			ex[3] += mexc[i].Income();
//		}
//		else if (exc[i].GetNumb() == 4) {
//			strcpy_s(names[4], exc[i].GetGuide());
//			ex[4] += exc[i].Income();
//		}
//		else if (mexc[i].GetNumb() == 4) {
//			strcpy_s(names[4], mexc[i].GetGuide());
//			ex[4] += mexc[i].Income();
//		}
//	}
//	inclusionSort(ex, N);
//	for (int i = 0; i < N; i++) {
//		if (ex[i] == 0) continue;
//		cout << names[i] << ": " << ex[i] << endl;
//	}
//	getchar(); getchar();
//	return 0;
//}
//
//void inclusionSort(int *num, int size)
//{
//	for (int i = 1; i < size; i++)
//	{
//		int value = num[i];
//		if (num[i] == 0) continue;
//		int index = i;
//		while ((index > 0) && (num[index - 1] > value))
//		{
//			num[index] = num[index - 1];
//			index--;
//		}
//		num[index] = value;
//	}
//}

int main()
{
	int ex[N] = { 0 };
	char names[N][10] = { 0 };
	PedExcursion exc[N]; MixExcursion mexc[N];
	exc[0].SetName("Exc1");
	exc[0].SetDate(28, 12, 2018);
	exc[0].SetDuration(10);
	exc[0].SetPrice(500);
	exc[0].SetGuide("Vova");
	exc[0].SetFraction(100);
	exc[0].SetNumb(0);
	exc[1].SetName("Exc2");
	exc[1].SetDate(25, 11, 2017);
	exc[1].SetDuration(40);
	exc[1].SetPrice(1500);
	exc[1].SetGuide("Vova");
	exc[1].SetFraction(10);
	exc[1].SetNumb(0);
	exc[2].SetName("Exc3");
	exc[2].SetDate(8, 11, 2018);
	exc[2].SetDuration(25);
	exc[2].SetPrice(300);
	exc[2].SetGuide("Vasia");
	exc[2].SetFraction(10);
	exc[2].SetNumb(1);
	exc[3].SetName("Exc4");
	exc[3].SetDate(5, 11, 2017);
	exc[3].SetDuration(5);
	exc[3].SetPrice(150);
	exc[3].SetGuide("Petya");
	exc[3].SetFraction(30);
	exc[3].SetNumb(2);
	mexc[4].SetName("Exc5");
	mexc[4].SetDate(5, 1, 2017);
	mexc[4].SetDuration(55);
	mexc[4].SetPrice(2000);
	mexc[4].SetGuide("Petya");
	mexc[4].Setdriver("Pvo");
	mexc[4].SetFraction(35);
	mexc[4].SetNumb(2);
	mexc[4].Setn(2);
	for (int i = 0; i < N; i++) {
		if (exc[i].GetNumb() == 0) {
			strcpy_s(names[0], exc[i].GetGuide());
			ex[0] += exc[i].Income();
		}
		else if (mexc[i].GetNumb() == 0) {
			strcpy_s(names[0], mexc[i].GetGuide());
			ex[0] += mexc[i].Income();
		}
		else if (exc[i].GetNumb() == 1) {
			strcpy_s(names[1], exc[i].GetGuide());
			ex[1] += exc[i].Income();
		}
		else if (mexc[i].GetNumb() == 1) {
			strcpy_s(names[1], mexc[i].GetGuide());
			ex[1] += mexc[i].Income();
		}
		else if (exc[i].GetNumb() == 2) {
			strcpy_s(names[2], exc[i].GetGuide());
			ex[2] += exc[i].Income();
		}
		else if (mexc[i].GetNumb() == 2) {
			strcpy_s(names[2], mexc[i].GetGuide());
			ex[2] += mexc[i].Income();
		}
		else if (exc[i].GetNumb() == 3) {
			strcpy_s(names[3], exc[i].GetGuide());
			ex[3] += exc[i].Income();
		}
		else if (mexc[i].GetNumb() == 3) {
			strcpy_s(names[3], mexc[i].GetGuide());
			ex[3] += mexc[i].Income();
		}
		else if (exc[i].GetNumb() == 4) {
			strcpy_s(names[4], exc[i].GetGuide());
			ex[4] += exc[i].Income();
		}
		else if (mexc[i].GetNumb() == 4) {
			strcpy_s(names[4], mexc[i].GetGuide());
			ex[4] += mexc[i].Income();
		}
	}
	inclusionSort(ex, N);
	for (int i = 0; i < N; i++) {
		if (ex[i] == 0) continue;
		cout << names[i] << ": " << ex[i] << endl;
	}
	getchar(); getchar();
	return 0;
}

void inclusionSort(int *num, int size)
{
	for (int i = 1; i < size; i++)
	{
		int value = num[i];
		if (num[i] == 0) continue;
		int index = i;
		while ((index > 0) && (num[index - 1] > value))
		{
			num[index] = num[index - 1];
			index--;
		}
		num[index] = value;
	}
}