#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	int a;
	double b;
	short c;
	long d;
	float e;
	char f;
	string g;
	bool h;
	
	cout <<"int: "<<sizeof(a)<<endl;
	cout <<"short: "<<sizeof(c)<<endl;
	cout <<"float: "<<sizeof(e)<<endl;
	cout <<"double: "<<sizeof(b)<<endl;
	cout <<"long: "<<sizeof(d)<<endl;
	cout <<"char: "<<sizeof(f)<<endl;
	cout <<"string: "<<sizeof(g)<<endl;
	cout <<"bool: "<<sizeof(h)<<endl;
	
	return 0;
}
