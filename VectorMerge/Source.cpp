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
vector<string> mergeVectors(const vector<string>& mergeItem1, const vector<string>& mergeItem2);

int main()
{
	vector<string> newDict = mergeVectors(hardCodeDict1(), hardCodeDict2());

	for (unsigned int i = 0; i < newDict.size(); i++) {
		cout << newDict.at(i) << endl;
	}

	cout << newDict.size();

	return 0;
} // end main ()



vector<string> hardCodeDict1() {
	vector<string> dict;
	string temp[] = { "abased","airy", "aisle", "aisles", "ajar", "akimbo", "akin", "juveniles",
					"juxtapose", "knowledges", "known", "president", "tries", "trifle",
					"tugs", "wrongdoers", "wroth", "wyvern", "xenophon", "xylol", "yodle",
					"yurt", "zeugma", "ziggurat","zoo", "zootomy" };

	for (unsigned int i = 0; i < 26; i++) {
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

vector<string> mergeVectors(const vector<string>& mergeItem1, const vector<string>& mergeItem2) {
	vector<string>::const_iterator iterator1;
	vector<string>::const_iterator iterator2;
	iterator1 = mergeItem1.begin();
	iterator2 = mergeItem2.begin();
	vector<string> mergedVector;

	while (iterator1 != mergeItem1.end() && iterator2 != mergeItem2.end()) {
		if (*iterator1 < *iterator2) {
			mergedVector.push_back(*iterator1);
			iterator1++;
		}
		else if (*iterator1 > *iterator2) {
			mergedVector.push_back(*iterator2);
			iterator2++;
		}
		else {
			mergedVector.push_back(*iterator1);
			iterator1++;
			iterator2++;
		}
	}
	if (iterator1 != mergeItem1.end()) {
		if (*iterator1 == mergedVector.at(mergedVector.size() - 1)) {
			iterator1++;
		}
		while (iterator1 != mergeItem1.end()) {
			mergedVector.push_back(*iterator1);
			iterator1++;
		}
	}
	if (iterator2 != mergeItem2.end()) {
		if (*iterator2 == mergedVector.at(mergedVector.size() - 1)) {
			iterator2++;
		}
		while (iterator2 != mergeItem2.end()) {
			mergedVector.push_back(*iterator2);
			iterator2++;
		}
	}
	return mergedVector;
}
