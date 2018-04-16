/******************************
* Henry McGee
* Project 1
* Instructor: Professor Goddard
* CPSC 2120
* Due: 02/11/2018
******************************/
#ifndef CORPUS_H
#define CORPUS_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

class Corpus {
	private:
	double Letter[26];		//letters from a-z

	public:
	Corpus();
	Corpus(string&);
	double proportion(char);
	//void printFrequency();
};

#endif
