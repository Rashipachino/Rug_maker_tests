#include <iostream>
#include <string>
using namespace std;

#include "mat.hpp"

namespace ariel {
	string mat(int a, int b, char c, char d) {
        char arr [a][b];
		string ans = "";
		//initial fill out
		for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                arr[i][j] = c;
            }
        }
        //horizontal
        int k = 1;
        for (int i = 1; i <= b/2; i = i+2) {
            for (int j = k; j < a-i; j++) {
                arr[i][j] = d;
                arr[b-1-i][a-1-j] = d;
            }
              k = k+2;
        }
        //vertical
        int l = 1;
        for (int j = 1; j <= a/2; j = j+2) {
            for (int i = l; i <b-j; i++) {
                arr[i][j] = d;
                arr[i][a - 1 - j] = d;
            }
            l = l+2;
        }
        //transfer to ans
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                ans += arr[i][j];
            }
            ans += '\n';
        }
        return ans;
    }

}