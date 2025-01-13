#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v = {2,3,4,4,7,10};
	auto it = lower_bound(v.begin(), v.end(), 4);
    auto it2= upper_bound(v.begin(), v.end(), 4);
	int index = it - v.begin();
    int index2 = it2 - v.begin();
	
	// output
	//   index: 2
	//   value: 4(左)
	//   index: 4
	//   value: 7
	cout << "index: " << index << endl;
	cout << "value: " << v[index] << endl;
	cout << "index: " << index2 << endl;
	cout << "value: " << v[index2] << endl;  
	return 0;
}