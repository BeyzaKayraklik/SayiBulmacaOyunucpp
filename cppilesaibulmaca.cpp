#include <stdio.h> 
#include <stdlib.h>
#include<time.h>
#include <iostream>

#include <string>
#include <vector>
using namespace std;

int main() {

	int TahminHak;
	int tryNumber;
	int i;
	int randomNumber;

	bool hepsiFarkliMi = false;
	cout << "**Dort basamakli ve rakamlari birbirinden farkli olmali**" << endl;
	do
	{
		srand(time(0));
		randomNumber = 1000 + (rand() % 1000);


		int a, b, c, d;
		a = (randomNumber / 1000) % 10;
		b = (randomNumber / 100) % 10;
		c = (randomNumber / 10) % 10;
		d = randomNumber % 10;

		if (a != b && a != c && a != d && b != c && b != d && c != d)
		{
			hepsiFarkliMi = true;

			break;

		}
		cout << randomNumber << endl;

	} while (!hepsiFarkliMi);
	int hak = 0;
	int puan;

	while (hak <= 10) {

		int digitOk = 0;
		int digitNotOk = 0;



		cout << "Bir sayi tahmin ediniz: " << endl;

		cin >> tryNumber;


		string dizirandomNumber;
		dizirandomNumber = to_string(randomNumber);

		string dizitryNumber;
		dizitryNumber = to_string(tryNumber);



		for (i = 0; i < 4; i++) {

			bool digitAvailable = false;
			for (int j = 0; j < 4; j++)
			{


				if (dizirandomNumber[i] == dizitryNumber[j])
				{

					digitAvailable = true;
					break;
				}
			}

			if (digitAvailable == true)
			{
				if (dizirandomNumber[i] == dizitryNumber[i])
				{
					digitOk++;


				}
				else
				{
					digitNotOk++;

				}
			}
		}





		hak++;
		cout << "        :" << "  +" << digitOk << "  -" << digitNotOk << endl;
		cout << hak << ". haktasiniz  " << endl;

		puan = (10 * digitOk) + (5 * digitNotOk) + (1000 / hak) - ((digitOk * digitNotOk) / (digitOk + digitNotOk));








		if (hak == 10) {

			break;

		}




		if (digitOk == 4)
		{

			break;

		}






	}




	cout << "Puaniniz:  " << puan << endl;
	cout << "  ***** GAME OVER *****   " << endl;









	return 0;
}