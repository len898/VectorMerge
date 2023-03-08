/********************************************************************************
 *		MERGE
 *		author(s):
 *		adapted from:
 *		other citations:
 *
 *		goal: Read in two files of words into two vector. Merge the two vectors
 *			  into one vector, keeping the order and discarding duplicates.
 *			  Output to a new files, being careful not to overwrite an existing file.
 *		overview:

 *
 *
 *
 ********************************************************************************/


#include <iostream> 
#include <vector>
#include <fstream>
#include <string>

using namespace std;


#define FILE_NAME1 "short_dict.txt"
#define FILE_NAME2 "short_dict2.txt"
#define NEW_DICT_FILE "Updated Dictionary.txt"


vector<string> hardCodeDict1();
vector<string> hardCodeDict2();

int main()
{

	return 0;
} // end main ()



vector<string> hardCodeDict1() {
	vector<string> dict;
	string temp[] = { "airy", "aisle", "aisles", "ajar", "akimbo", "akin", "juveniles",
					"juxtapose", "knowledges", "known", "president", "tries", "trifle",
					"tugs", "wrongdoers", "wroth", "wyvern", "xenophon", "xylol", "yodle",
					"yurt", "zeugma", "ziggurat", "zootomy" };

	for (unsigned int i = 0; i < 24; i++) {
		dict.push_back(temp[i]);
	}

	return dict;
} //end hardCodeDict1()


vector<string> hardCodeDict2() {
	vector<string> dict;
	string temp[] = { "aback", "abased", "acknowledgers", "administers", "affair",
					"aforementioned", "aggrieving", "agitating", "agree", "airlines", "ajar",
					"alerted", "bondage", "boner", "cheap", "cheated", "examiner", "excel",
					"lewdness", "liberal", "ordered", "president", "sandwich", "swagger",
					"swarm", "vomit", "yell", "zero", "zodiac", "zoo" };

	for (unsigned int i = 0; i < 30; i++) {
		dict.push_back(temp[i]);
	}

	return dict;
} //end hardCodeDict2()


