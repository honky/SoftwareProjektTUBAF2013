#include <iostream>
#include <string.h>

using namespace std;


void add_string (char* main, char* add_1, char* add_2, char* add_3)
{
	strcat (main, " ");
	strcat (main, add_1);
	strcat (main, " ");
	strcat (main, add_2);
	strcat (main, " ");
	strcat (main, add_3);
	
}





void main ()
{
	
	char main [256] = "dir";
	char add_1 [64] = "C:\\";
	char add_2 [64] = "Users\\";
	char add_3 [64] = "Asus\\";

	cout<<main<<endl;

	add_string (main, add_1, add_2, add_3);

	cout<<main<<endl;
}