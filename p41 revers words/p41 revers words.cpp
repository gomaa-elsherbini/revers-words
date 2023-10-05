#include <iostream>
#include <string>
#include <vector>
using namespace std;



string readString()
{
	string str;
	cout << "Enter Your String?\n";
	getline(cin, str);
	return str;
}

vector <string> formStrWords(string str)
{
	vector <string>vStr;
	string word = "";
	short pos = 0;
	string delim = " ";
	string S1 = "";
	//"Mohammad Abu-Hadhoud Iam from Jordan"
	
	while ((pos = str.find(delim)) != -1)
	{
		word = str.substr(0, pos);
		str = str.erase(0, pos +delim.length());
		if (word != "")
			//vStr.push_back(word);
			S1 = word + S1;
	}
	if (str != "")
		//vStr.push_back(str);
		S1 = str + S1;

	return vStr;
}

void reversStr(string str)
{
	string word = "";
	short pos = 0;
	string delim = " ";
	string S1 = "";
	//"Mohammad Abu-Hadhoud Iam from Jordan"

	while ((pos = str.find(delim)) != -1)
	{
		word = str.substr(0, pos);
		str = str.erase(0, pos + delim.length());
		if (word != "")
			S1 = word +delim+ S1;
	}
	if (str != "")
		S1 = str +delim + S1;

	cout << S1 << endl;
}
void printReverseStr(vector <string>vStr)
{
	for (int i = vStr.size() - 1; i >= 0; i--)
	{
		cout << vStr[i] << " ";
	}
}



int main()
{
	//string str = readString();
	//string str = "Mohammad Abu-Hadhoud Iam from Jordan";
	string str = "Gomaa ElSherbini Mohammad";

	cout << "string after reversing: \n";

	//reverseStr(formStrWords(str));
	reversStr(str);
	cout << endl<< endl;


	return 0;
}