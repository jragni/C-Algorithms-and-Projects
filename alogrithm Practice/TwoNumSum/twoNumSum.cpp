#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	for(int i = 0; i < array.size(); i++){
		for(int j = i + 1; j< array.size(); j++){
			int currentNum = array[i];
		
        	int nextNum = array[j];
			if( currentNum + nextNum == targetSum){
				return vector<int>{currentNum, nextNum};
			}
		}	
	}
	return vector<int>{};
}
