#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;


struct Rubotnick
{
	int id;
	int age;
	string name;
	string post;
	int How_many_days_does_it_work;


};


int main()
{

	int a;
	Rubotnick rub1;

	rub1.id = 1;
	rub1.age = 27;
	rub1.name = "Kiril_petruhin";
	rub1.post = "auxiliary worker";
	rub1.How_many_days_does_it_work = 270;


	Rubotnick rub2;

	rub2.id = 2;
	rub2.age = 30;
	rub2.name = "Zarkis_merkovich";
	rub2.post = "auxiliary worker";
	rub2.How_many_days_does_it_work = 365;


	Rubotnick rub3;

	rub3.id = 3;
	rub3.age = 33;
	rub3.name = "Kiril_petruhin";
	rub3.post = "auxiliary worker";
	rub3.How_many_days_does_it_work = 573;


	Rubotnick rub4;

	rub4.id = 4;
	rub4.age = 29;
	rub4.name = "Kiril_petruhin";
	rub4.post = "auxiliary worker";
	rub4.How_many_days_does_it_work = 244;



	Rubotnick rub5;

	rub5.id = 5;
	rub5.age = 40;
	rub5.name = "Kiril_petruhin";
	rub5.post = "auxiliary worker";
	rub5.How_many_days_does_it_work = 1235;


	Rubotnick rub6;

	rub6.id = 6;
	rub6.age = 49;
	rub6.name = "Kiril_petruhin";
	rub6.post = "auxiliary worker";
	rub6.How_many_days_does_it_work = 3675;


	Rubotnick rub7;

	rub7.id = 7;
	rub7.age = 48;
	rub7.name = "Kiril_petruhin";
	rub7.post = "auxiliary worker";
	rub7.How_many_days_does_it_work = 5327;


	Rubotnick rub8;

	rub8.id = 8;
	rub8.age = 19;
	rub8.name = "Kiril_petruhin";
	rub8.post = "auxiliary worker";
	rub8.How_many_days_does_it_work = 100;


	Rubotnick rub9;

	rub9.id = 9;
	rub9.age = 53;
	rub9.name = "Kiril_petruhin";
	rub9.post = "auxiliary worker";
	rub9.How_many_days_does_it_work = 8325;


	Rubotnick rub10;

	rub10.id = 10;
	rub10.age = 35;
	rub10.name = "Kiril_petruhin";
	rub10.post = "auxiliary worker";
	rub10.How_many_days_does_it_work = 744;


	Rubotnick rub11;

	rub11.id = 11;
	rub11.age = 37;
	rub11.name = "Kiril_petruhin";
	rub11.post = "auxiliary worker";
	rub11.How_many_days_does_it_work = 274;


	Rubotnick rub12;

	rub12.id = 12;
	rub12.age = 59;
	rub12.name = "Kiril_petruhin";
	rub12.post = "auxiliary worker";
	rub12.How_many_days_does_it_work = 322;


	Rubotnick rub13;

	rub13.id = 13;
	rub13.age = 44;
	rub13.name = "Kiril_petruhin";
	rub13.post = "auxiliary worker";
	rub13.How_many_days_does_it_work = 8871;


	Rubotnick rub14;

	rub14.id = 14;
	rub14.age = 56;
	rub14.name = "Kiril_petruhin";
	rub14.post = "auxiliary worker";
	rub14.How_many_days_does_it_work = 10537;


	Rubotnick rub15;

	rub15.id = 15;
	rub15.age = 34;
	rub15.name = "Kiril_petruhin";
	rub15.post = "auxiliary worker";
	rub15.How_many_days_does_it_work = 257;



	Rubotnick rub16;

	rub16.id = 16;
	rub16.age = 37;
	rub16.name = "Kiril_petruhin";
	rub16.post = "auxiliary worker";
	rub16.How_many_days_does_it_work = 649;



	Rubotnick rub17;

	rub17.id = 17;
	rub17.age = 48;
	rub17.name = "Kiril_petruhin";
	rub17.post = "auxiliary worker";
	rub17.How_many_days_does_it_work = 7324;


	Rubotnick rub18;

	rub18.id = 18;
	rub18.age = 37;
	rub18.name = "Kiril_petruhin";
	rub18.post = "auxiliary worker";
	rub18.How_many_days_does_it_work = 8888;


	Rubotnick rub19;

	rub19.id = 19;
	rub19.age = 22;
	rub19.name = "Kiril_petruhin";
	rub19.post = "auxiliary worker";
	rub19.How_many_days_does_it_work = 277;


	Rubotnick rub20;

	rub20.id = 20;
	rub20.age = 25;
	rub20.name = "Kiril_petruhin";
	rub20.post = "auxiliary worker";
	rub20.How_many_days_does_it_work = 537;




	int* mass = new int[20];

	Rubotnick* m = new Rubotnick[20];

	m[1].id;
	m[2].id;
	m[3].id;
	m[4].id;
	m[5].id;
	m[6].id;
	m[7].id;
	m[8].id;
	m[9].id;
	m[10].id;
	m[11].id;
	m[12].id;
	m[13].id;
	m[14].id;
	m[15].id;
	m[16].id;
	m[17].id;
	m[18].id;
	m[19].id;
	m[20].id;

	int* id;
	int n;

	void Find_id(int* m, int n)
	{

		for (int i = 0; i < n; i++)
		{
			cout << m[n].id << endl;
			cout << rub(n).age << endl;
			cout << rub(n).name << endl;
			cout << rub(n).post << endl;
			cout << rub(n).How_many_days_does_it_work << endl;
		}

		/*
	   void find_id();
	   {

			cin >> n;

		if(n=0,n<20)
		   {
		   cout << m[n].id<<endl;
		   cout << rub(n).age<<endl;
		   cout << rub(n).name<<endl;
		   cout << rub(n).post<<endl;
		   cout << rub(n).How_many_days_does_it_work <<endl;

		   }
	   }
	   */


		return 0;
	}


