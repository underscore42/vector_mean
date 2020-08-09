/*
Example: test harness for mean of a group of numbers

Steven MacDonald macdsteven@gmail.com

Some GPL or public license would go here, from the legal department. 2020.
*/

/*
Requirements:
calculate the mean form a series of numbers

- How to input the numbers?
- What do we want to return?
- Precision of the result. For this example it's float.

The function is looking for a vector input, returns the mean of that vector.

Possible tests:
- floats, how about double floats?
- ints
- ints and floats
- ints that would overflow the int
- Inifinte series average

*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "mean.h"

using namespace std;

vector<float> read_csv_to_vector(char *input){
	vector<float> values;
	ifstream fd(input);

	if(!fd.is_open()) throw std::runtime_error("file error");
	if(fd.good()){
		string line;
		float in;

		while(getline(fd, line)){
			stringstream sl(line);
			while(sl >> in) {
   				//cout << in << endl; // Echo the input values
				values.push_back(in);
				if (sl.peek()==',') sl.ignore();
			}
		}
	}
	fd.close();
	return values;
}
 
int main(int argc, char* argv[]) {
	float avg=0.0;
	vector<float> series;
	
	if(argc>1){
   		//cout << argv[1] << endl; // Echo the filename
		series = read_csv_to_vector(argv[1]);
		avg = mean(series);
   		cout << avg << endl;
	} else {
   		cout << "Warning: No file was passed in to process" << endl;
	}
	return 0;
}
