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

vector <string> splitString(string str, string delim)
{
	vector <string>vStr;
	string word = "";
	short pos = 0;
	
	//"Mohammad Abu-Hadhoud Iam from Jordan"
	while ((pos = str.find(delim)) != -1)
	{
		word = str.substr(0, pos);
		str = str.erase(0, pos + delim.length());
		if (word != "")
			vStr.push_back(word);
	}
	if (str != "")
		vStr.push_back(str);

	return vStr;
}

void reversStr(vector <string>vStr)
{
	string reversedString = "";
	string delim = " ";

	vector<string>::iterator iter = vStr.end();

	while (iter != vStr.begin())
	{
		iter--;
		reversedString += *iter + " ";
	}
	reversedString = reversedString.substr(0, reversedString.length()-1);

	cout << reversedString << endl<< endl;
}



int main()
{
	//string str = "Mohammad Abu-Hadhoud Iam from Jordan";
	string str = readString();
	vector <string> vStr = splitString(str, " ");

	cout << "\n\nstring after reversing: \n";
	reversStr(vStr);

	//reverseStr(formStrWords(str));
	//reversStr(str);
	cout << endl<< endl;


	return 0;
}

//vector <string> formStrWords(string str)
//{
//	vector <string>vStr;
//	string word = "";
//	short pos = 0;
//	string delim = " ";
//	string S1 = "";
//	//"Mohammad Abu-Hadhoud Iam from Jordan"
//	
//	while ((pos = str.find(delim)) != -1)
//	{
//		word = str.substr(0, pos);
//		str = str.erase(0, pos +delim.length());
//		if (word != "")
//			//vStr.push_back(word);
//			S1 = word + S1;
//	}
//	if (str != "")
//		//vStr.push_back(str);
//		S1 = str + S1;
//
//	return vStr;
//}
//void reversStr(string str)
//{
//	string word = "";
//	short pos = 0;
//	string delim = " ";
//	string S1 = "";
//	//"Mohammad Abu-Hadhoud Iam from Jordan"
//
//	while ((pos = str.find(delim)) != -1)
//	{
//		word = str.substr(0, pos);
//		str = str.erase(0, pos + delim.length());
//		if (word != "")
//			S1 = word +delim+ S1;
//	}
//	if (str != "")
//		S1 = str +delim + S1;
//
//	cout << S1 << endl;
//}
//void printReverseStr(vector <string>vStr)
//{
//	for (int i = vStr.size() - 1; i >= 0; i--)
//	{
//		cout << vStr[i] << " ";
//	}
//}