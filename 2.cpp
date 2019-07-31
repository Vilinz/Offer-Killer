#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
		int count = 0;
		char *temp = (char*)malloc(length*sizeof(char));
		strcpy(temp, str);
		for(int i = 0; i < length; i++) {
			if(temp[i] == ' ') {
				count++;
			}
		}
		int index = 0;
		string tag = "%20";
		for(int i = 0; i < length; i++) {
			if(temp[i] == ' ') {
				for(int j = 0; j < 3; j++) {
					str[index] = tag[j];
					index++;
				}
			} else {
				str[index] = temp[i];
				index++;
			}
		}
		*(str + length + 2*count) = '\0';
	}
};

int main() {
	char s[] = "We Are Happy";
	Solution su;
	su.replaceSpace(s, sizeof(s) - 1);
	cout << s << endl;
	return 0;
}
