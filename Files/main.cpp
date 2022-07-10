#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using namespace std;

#define WRITE_TO_FILE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WRITE_TO_FILE
	cout << "Hello Files!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	std::ofstream fout;
	fout.open("File.txt", std::ios_base::app);
	fout << "Hello Files!" << endl;
	fout.close();

	//system("notepad File.txt");
#endif // WRITE_TO_FILE


	//const int FILENAME_SIZE = 256;
	char sz_filename[FILENAME_MAX]={};
	cout << "ֲגוהטעו טלÿ פאיכא: "; cin.getline(sz_filename, FILENAME_MAX);
	if (strstr(sz_filename, ".txt") == NULL)
	{
		strcat(sz_filename, ".txt");
	}
	cout << sz_filename << endl;
	ifstream fin(sz_filename);
	if (fin.is_open())
	{
		const int SIZE = USHRT_MAX;
		char Buffer[SIZE] = {};
		while (!fin.eof())
		{
			//fin >> Buffer;
			fin.getline(Buffer, FILENAME_MAX);
			cout << Buffer << endl;

		}
	}
	else
	{
		std::cerr << "Error: File not found" << endl;
	}
	fin.close();
	//char sz_command[FILENAME_MAX] = "start notepad ";
	//strcat(sz_command, sz_filename);
	//system(sz_command);


}