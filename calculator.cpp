// Jason Mora-Mendoza
// Section 1
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class digit
{
	public:
		int data;
		digit *next = nullptr;
};

int digcmp(digit * left, digit * right)
{
	int result = 0;
	do
	{
		if(left->data - right->data == 0)
		{ }
		else
		{
			result = left->data - right->data;
		}
		
		left = left->next;
		right = right->next;
	} while (left != nullptr && right != nullptr);
	result = 0;
	
	if (left == nullptr && right != nullptr)
	{result = -1;}
	if (left != nullptr && right == nullptr)
	{result = 1;}
	
	return result;
}

digit * loadNumber(ifstream & file)
{
	digit *head = nullptr;
	digit *newDigit = nullptr;
	char charNum;
	int num;
	
	while(!file.eof())
	{
		file.get(charNum);
		if(charNum == '\n')
		{break;}
		
		newDigit = new digit;
		if(head == nullptr)
		{
			num = charNum - 48;
			newDigit->data = num;
			head = newDigit;
		}
		
		else
		{
			num = charNUm - 48;
			newDigit->data = num;
			newDigit->next  = head;
			hard = newDigit;
		}
	}
	return head;
}

int main()
{
	digit * left * right * result;
	charOperator;
	int num;
	ifstream iFile("largeNumbers.txt");
	oftream oFile("output.txt");
	
	while(!file.eof())
	{
		left = loadNumber(iFile);
		right = loadNumber(iFile);
		charOperator = getOperator(iFile);
		
		if(charOperator == '+')
		{
			result = addNumbers(left, right);
			writeNumber(result, oFile);
			deleteNumber(result);
		}
	}
	
	oFile.close();
	iFile.close();
	
	cin.get();
	return 0;
}
