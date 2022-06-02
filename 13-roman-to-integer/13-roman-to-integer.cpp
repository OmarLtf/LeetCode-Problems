#include <iostream>
#include <string>

using namespace std;



class Solution {
public:
    int romanToInt(string s) {

        int result=0, fx, sx=10000;
        char firstChar;

        for(int i = 0; i < s.length() ; i++ ){
            firstChar = s[i];

            switch (firstChar) {
                case 'I' : fx = 1; break;
                case 'V' : fx = 5; break;
                case 'X' : fx = 10; break;
                case 'L' : fx = 50; break;
                case 'C' : fx = 100; break;
                case 'D' : fx = 500; break;
                case 'M' : fx = 1000; break;
            }
            if (fx <= sx){
                result += fx;
            }else if (fx > sx){
                result = result + fx - (2*sx);
            }
            sx= fx;
        }
        return result;
    }
};

