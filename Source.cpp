#include <iostream>
#include <string>

using namespace std ;


int main ()
{
	string ScrbText ; //definition of scrambled text's string
	string ExtText ; //definition of extracted text's string

	cout << "Scrambled Text: " ;
	cin >> ScrbText ;

	while ( ScrbText.length () < 40) //the loop that gives an error if the length of string < 40
	{
		cout << "Input string must be longer than 40 characters" << endl << "Scrambled Text: " ;
		cin >> ScrbText ;
	}

	string dltText ; //definition of the characters will be deleted

	cout << "Characters to be deleted: " ;
	cin >> dltText ;
	
	unsigned int i ;
	
	for ( i=0 ; i < ScrbText.length() ; i=i+2 ) //the loop that takes even number index of scrambled string
	{
		ExtText = ExtText + ScrbText.substr(i,1) ;
	}

	cout << endl << "Extracted String: " << ExtText ;
	
	unsigned int j = 0 ;

	while ( j < ExtText.length() ) //the loop that scans the lenght of extracted string's index
	{
		unsigned int k = 0 ;
		
		while ( k < dltText.length() ) //the loop that scans the number of letters will be deleted
		{
		
		int x = 0 ;
		char y = dltText.at(k) ; 

			if (ExtText.find(y) != string::npos) // if the statement is true this means character will be deleted exists in the extracted text
			{
			x = ExtText.find(y) ;

			ExtText = ExtText.substr(0 , x) + ExtText.substr(x+1 , ExtText.length()) ;
		
			} k++ ;
		
		} j++ ;

	}
	
	cout << endl << "Hidden Message: " << ExtText << endl ;

return 0 ;

}