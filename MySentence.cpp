/******************************
* Henry McGee
* Project 1
* Instructor: Professor Goddard
* CPSC 2120
* Due: 02/11/2018
******************************/

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include "MySentence.h" 

using namespace std;

MySentence::MySentence() //default constructor
	: sentence(" ") {

}

MySentence::MySentence(string sent) {//constructor
	sentence = sent;
}

ostream &operator<<(ostream &out, const MySentence& obj) {	//for output
	out << obj.sentence;
	return out;
}

bool MySentence::operator==(const MySentence& obj) const {	//boolean operator compares two sentences 
	if(sentence == obj.sentence) {
		return true;
	}
	
	else
		return false;
}

void MySentence::rotate() {		//rotates once
	int unsigned i = 0;					 
	
	for(i = 0; i < sentence.length(); i++) {	//if z changes character to a	
		if(sentence[i] == 122) {
			sentence[i] = 97;
		}

		if(sentence[i] == 90) {					//if Z changes character to A
			sentence[i] = 65;
		}

		if(((sentence[i] > 64) && (sentence[i] < 91)) || ((sentence[i] > 96) && (sentence[i] < 123))) {
			sentence[i] += 1;					//otherwise rotates as normal
		}
	}
}

void MySentence::rotate(int NumberOfRotations) {	//rotates for a set number of times
	int unsigned i = 0;				
	int j = 0;	
 	
	for(j = 0; j < NumberOfRotations; j++) {		//works the same as rotate() except this extra for loop goes until the number of times assigned is
		for(i = 0; i < sentence.length(); i++) {		
			if(sentence[i] == 122) {
				sentence[i] = 97;
			}

			if(sentence[i] == 90) {
				sentence[i] = 65;
			}

			if(((sentence[i] > 64) && (sentence[i] < 91)) || ((sentence[i] > 96) && (sentence[i] < 123))) {
				sentence[i] += 1;
			}
		}
	}
}

char MySentence::rotationOf(char input) {		//rotates just one character using same method as rotate()		
	if(input == 122) {
		input = 97;
	}

	if(input == 90) {
		input = 65;
	}

	if(((input > 64) && (input < 91)) || ((input > 96) && (input < 123))) {
		input += 1;
	}

	return input;		
}

void MySentence::reverse() {					//reverses the order of string
	string temp;
	int i = 0;
	for(i = sentence.length()-1; i >= 0; i--) {	//backwards loop assigned sentences characters in reverse to a temporary string
		temp += sentence[i];
	}
	
	sentence = temp;							//assigns sentence to its reverse
}

////////decoding
double MySentence::scoreWith(Corpus& obj) {		//checks the total frequency values
	int unsigned i = 0; 
	double total = 0;
	for(i = 0; i < sentence.length(); i++) {
		total += obj.proportion(sentence[i]);	//adds the frequences gained from the Corpus function proportion(char) to a total
	}
	return total;								//return total
}

void MySentence::decode(Corpus& obj) {			
	int i = 0;
	double total = 0;
	string temp = sentence;

	for(i = 0; i < 26; i++) {					//goes through 26 letters of the alphabet
		total = scoreWith(obj);					//assigns total frequency to a temporary double	
		if(decodeHighestValue < total) {		//if decodeHighestValue is less than this total frequency change its value
			decodeHighestValue = total;
			decodeNumberOfRotations = i;		
		}
		rotate();
	}
	sentence = temp;
}

//////////getters
int MySentence::get_decodeNumberOfRotations() {		
	return decodeNumberOfRotations;
}

string MySentence::get_sentence() {
	return sentence;
}
