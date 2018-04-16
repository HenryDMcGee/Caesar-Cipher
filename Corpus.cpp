/******************************
* Henry McGee
* Project 1
* Instructor: Professor Goddard
* CPSC 2120
* Due: 02/11/2018
******************************/

#include "Corpus.h"

using namespace std;

Corpus::Corpus() {								//assigns each frequency with its letter in the array. a = 0 and z = 25.
	int i = 0;

	for(i = 0; i < 26; i++) {
		Letter[i] = 0;
	}		

	Letter[0] = 0.09;
	Letter[1] = 0.02;
	Letter[2] = 0.02;
	Letter[3] =  0.04;
	Letter[4] =  0.12;
	Letter[5] =  0.02;
	Letter[6] =  0.03;
	Letter[7] =  0.02;
	Letter[8] =  0.09;
	Letter[9] =  0.01;
	Letter[10] =  0.01;
	Letter[11] =  0.04;
	Letter[12] =  0.02;
	Letter[13] =  0.06;
	Letter[14] =  0.08;
	Letter[15] =  0.02;
	Letter[16] =  0.01;
	Letter[17] =  0.06;	
	Letter[18] =  0.04;
	Letter[19] =  0.06;
	Letter[20] =  0.04;
	Letter[21] =  0.02;
	Letter[22] =  0.02;
	Letter[23] =  0.01;
	Letter[24] =  0.02;
	Letter[25] =  0.01;

	cout << "Frequencies are ";	
	for(i = 0; i < 26; i++) {
		cout << Letter[i] << ", ";
		if((((i +1) % 9) == 0) && (i > 0)) {
			cout << endl;
			cout << "                ";
		}
	}	
	cout << endl;
}

Corpus::Corpus(string& filename) {
	char temp;
	int fileLength = 0;
	int i = 0;
	
	for(i = 0; i < 26; i++) {
		Letter[i] = 0;
	}	

	ifstream ifr(filename);
	
	if(ifr) {									//if file has contents
		while(!ifr.eof()) {
			ifr.get(temp);
			if((temp == 65) || (temp == 97)) {
				Letter[0]++;
				fileLength++;
			}

			if((temp == 66) || (temp == 98)) {
				Letter[1]++;
				fileLength++;
			}
	
			if((temp == 67) || (temp == 99)) {
				Letter[2]++;
				fileLength++;
			}
	
			if((temp == 68) || (temp == 100)) {
				Letter[3]++;
				fileLength++;
			}
	
			if((temp == 69) || (temp == 101)) {
				Letter[4]++;
				fileLength++;
			}
	
			if((temp == 70) || (temp == 102)) {
				Letter[5]++;
				fileLength++;
			}
	
			if((temp == 71) || (temp == 103)) {
				Letter[6]++;
				fileLength++;
			}
	
			if((temp == 72) || (temp == 104)) {
				Letter[7]++;
				fileLength++;		
			}
	
			if((temp == 73) || (temp == 105)) {
				Letter[8]++;
				fileLength++;
			}
	
			if((temp == 74) || (temp == 106)) {
				Letter[9]++;
				fileLength++;
			}
	
			if((temp == 75) || (temp == 107)) {
				Letter[10]++;
				fileLength++;
			}
	
			if((temp == 76) || (temp == 108)) {
				Letter[11]++;
				fileLength++;
			}
	
			if((temp == 77) || (temp == 109)) {
				Letter[12]++;
				fileLength++;
			}
	
			if((temp == 78) || (temp == 110)) {
				Letter[13]++;
				fileLength++;
			}
	
			if((temp == 79) || (temp == 111)) {
				Letter[14]++;
				fileLength++;
			}
	
			if((temp == 80) || (temp == 112)) {
				Letter[15]++;
				fileLength++;
			}

			if((temp == 81) || (temp == 113)) {
				Letter[16]++;
				fileLength++;
			}

			if((temp == 82) || (temp == 114)) {
				Letter[17]++;
				fileLength++;
			}

			if((temp == 83) || (temp == 115)) {
				Letter[18]++;
				fileLength++;
			}

			if((temp == 84) || (temp == 116)) {
				Letter[19]++;
				fileLength++;
			}
	
			if((temp == 85) || (temp == 117)) {
				Letter[20]++;
				fileLength++;
			}
	
			if((temp == 86) || (temp == 118)) {
				Letter[21]++;
				fileLength++;
			}
		
			if((temp == 87) || (temp == 119)) {
				Letter[22]++;
				fileLength++;
			}
	
			if((temp == 88) || (temp == 120)) {
				Letter[23]++;
				fileLength++;
			}
	
			if((temp == 89) || (temp == 121)) {
				Letter[24]++;
				fileLength++;
			}
		
			if((temp == 90) || (temp == 122)) {
				Letter[25]++;
				fileLength++;
			}
		}

		for(i = 0; i < 26; i++) {
			Letter[i] = Letter[i] / fileLength;
		}
		cout << "Frequencies are ";							//printout non default
		for(i = 0; i < 26; i++) {
			cout << fixed <<  setprecision(3) << Letter[i] << ", ";
			if((((i +1) % 9) == 0) && (i > 0)) {
				cout << endl;
				cout << "                ";
			}
		}	
		cout << endl;
	}

	else {									//if file is empty run default
		Letter[0] = 0.09;
		Letter[1] = 0.02;
		Letter[2] = 0.02;
		Letter[3] =  0.04;
		Letter[4] =  0.12;
		Letter[5] =  0.02;
		Letter[6] =  0.03;
		Letter[7] =  0.02;
		Letter[8] =  0.09;
		Letter[9] =  0.01;
		Letter[10] =  0.01;
		Letter[11] =  0.04;
		Letter[12] =  0.02;
		Letter[13] =  0.06;
		Letter[14] =  0.08;
		Letter[15] =  0.02;
		Letter[16] =  0.01;
		Letter[17] =  0.06;	
		Letter[18] =  0.04;
		Letter[19] =  0.06;
		Letter[20] =  0.04;
		Letter[21] =  0.02;
		Letter[22] =  0.02;
		Letter[23] =  0.01;
		Letter[24] =  0.02;
		Letter[25] =  0.01;

			cout << "Frequencies are ";				//printout default
		for(i = 0; i < 26; i++) {
			cout << Letter[i] << ", ";
			if((((i +1) % 9) == 0) && (i > 0)) {
				cout << endl;
				cout << "                ";
			}
		}	
		cout << endl;
	}

		
}

double Corpus::proportion(char character) {		//switch statement returns the frequency for every character
	switch(character) {
		case 'a': 
			return Letter[0];
			break;
		case 'b':
			return Letter[1];
			break;
		case 'c':
			return Letter[2];
			break;
		case 'd':
			return Letter[3];
			break;
		case 'e':
			return Letter[4];
			break;
		case 'f':
			return Letter[5];
			break;
		case 'g':
			return Letter[6];
			break;
		case 'h':
			return Letter[7];
			break;	
		case 'i':
			return Letter[8];
			break;
		case 'j':
			return Letter[9];
			break;
		case 'k':
			return Letter[10];
			break;
		case 'l':
			return Letter[11];
			break;
		case 'm':
			return Letter[12];
			break;
		case 'n':
			return Letter[13];
			break;
		case 'o':
			return Letter[14];
			break;
		case 'p':
			return Letter[15];
			break;
		case 'q':
			return Letter[16];
			break;
		case 'r':
			return Letter[17];
			break;
		case 's':
			return Letter[18];
			break;
		case 't':
			return Letter[19];
			break;
		case 'u':
			return Letter[20];
			break;
		case 'v':
			return Letter[21];
			break;
		case 'w':
			return Letter[22];
			break;
		case 'x':
			return Letter[23];
			break;
		case 'y':
			return Letter[24];
			break;
		case 'z':
			return Letter[25];
			break;
		default :
			return 0;
	}
		
}
