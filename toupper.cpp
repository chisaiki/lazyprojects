#include <iostream>
#include <string> 
#include <cctype> //for toupper()
#include <fstream> //to read file contents

void readingfile(){
	std::ifstream readfile; //created a variable to read the file input
	readfile.open("names.txt");

	std::string fileinput; //stores the contents of the file
	std::string fileresult;

	if (readfile.is_open()) //checks if file is opem
	{
		while(readfile)
		{
			std::getline (readfile, fileinput);
			for (int i = 0; i < fileinput.length(); i++)
			{
			char temp = toupper(fileinput[i]);
			fileresult = fileresult + temp;
			}
		std::cout << fileresult << std::endl;
		fileresult = ""; //error: last line repeats twice
			//std::getline (readfile, fileinput);
			//std::cout << fileinput << std::endl;
		} //this gets everything written in the file 
		//only gets the first word
		//readfile >> fileinput; //pipe the file's content into stream/ put it into the string
		//std::cout << fileinput; 
		
	}
}

int main(){

//using a read file as input
	
	readingfile();
	
	std::string input = ""; 
	std::string result = "";	

	std::cout << "Enter: ";
	std::cin >> input; 
	
	for (int i = 0; i < input.length(); i++)
	{
		char temp = toupper(input[i]); //creates a temporary storage for the output of the function
		result = result + temp; //concats the new string output
	}
	
	std::cout << result << std::endl; 
	return 0;
}
