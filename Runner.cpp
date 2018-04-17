#include <iostream>
#include <string>
#include <fstream>
#include "MySentence.h" 
#include "Corpus.h"

using namespace std;

int main() {
	string sentence = " ";
	string filename;

	cout << "Enter file name for corpus:   ";
	cin >> filename;
	cout << endl;
	cin.ignore();
	Corpus frequencyList(filename);

	while(sentence == " ") { 
		cout << "Enter sentence terminated by <ENTER> ";
		getline(cin, sentence);								//gets user inputed sentence
	}
	
	MySentence sentenceDecoder(sentence);					//object of type MySentence
	sentenceDecoder.reverse();
	//cout << "Check1" << sentenceDecoder.get_sentence() << endl;
	sentenceDecoder.decode(frequencyList);					//decodes what the number of rotations is
	sentenceDecoder.rotate(sentenceDecoder.get_decodeNumberOfRotations());		//rotates the number of times awared by the decode() function
	cout << sentenceDecoder.get_sentence() << endl;			//Check if correct
	
	return 0;
}
