/******************************
* Henry McGee
* Project 1
* Instructor: Professor Goddard
* CPSC 2120
* Due: 02/11/2018
******************************/
#ifndef MYSENTENCE_H
#define MYSENTENCE_H

#include <iostream>
#include <string>
#include "Corpus.h"

using namespace std;

class MySentence {
	private:
	string sentence;
	double decodeHighestValue;
	int decodeNumberOfRotations;

	public:
	MySentence();
	MySentence(string);
	friend ostream &operator<<(ostream &out, const MySentence& obj);
	bool operator==(const MySentence& obj) const;
	void rotate();
	void rotate(int);
	static char rotationOf(char);
	void reverse();

	///////decoding
	
	double scoreWith(Corpus&);
	void decode(Corpus&);

	///////getters

	int get_decodeNumberOfRotations();
	string get_sentence();
};

#endif
