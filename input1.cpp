#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream FileIn;
	FileIn.open("input3.txt", ios_base::in);
	
	int n, dong_start, cot_start, dong_end, cot_end;
	
	FileIn >> n >> dong_start >> cot_start >> dong_end >> cot_end;
	
	
	cout << n << " " << dong_start << "" << cot_start << "" << dong_end << "," << cot_end << ")";
	
	FileIn.close();
	system("pause");
	return 0; 
	}
