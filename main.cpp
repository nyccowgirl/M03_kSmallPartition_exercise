#include <iostream>
#include <iomanip>
#include "ksmallSolution.hpp"

using namespace std;

int main() {
  arrayTracker* testArray;


	cout << "Test 01: odd number elements" << endl;
	int test01[] = {4, 6, 2, 5, 8};
	int testSize = sizeof(test01)/sizeof(test01[0]);
	testArray = new arrayTracker(testSize, test01);
	testArray->displayArray();
	cout << "pivotIndex:" << kSmallPartition(0, testSize-1, testArray) << endl;
	testArray->displayArray();
	delete testArray;
	cout << endl;

	cout << "Test 02: even number elements" << endl;
	int test02[] = {8, 7, 56, 78, 4, 6, 2, 5};
	testSize = sizeof(test02)/sizeof(test02[0]);
	testArray = new arrayTracker(testSize, test02);
	testArray->displayArray();
	cout << "pivotIndex:" << kSmallPartition(0, testSize-1, testArray) << endl;
	testArray->displayArray();
	delete testArray;
	cout << endl;

	cout << "Test 03: pivot already correct" << endl;
	int test03[] = {2 , 7 , 56, 78, 4, 6, 8, 5 , 8};
	testSize = sizeof(test03)/sizeof(test03[0]);
	testArray = new arrayTracker(testSize, test03);
	testArray->displayArray();
	cout << "pivotIndex:" << kSmallPartition(0, testSize-1, testArray) << endl;
	testArray->displayArray();
	delete testArray;
	cout << endl;


	cout << "Test 03: empty array" << endl;
	int test04[] = {};
	testSize = 0;
	testArray = new arrayTracker(testSize, test04);
	testArray->displayArray();
	cout << "pivotIndex:" << kSmallPartition(0, testSize-1, testArray) << endl;
	testArray->displayArray();
	delete testArray;
	cout << endl;

	int test05[] = {900, 40, 297, 388, 57, 965, 419, 43, 535, 513, 939, 410, 435, 214, 73, 122, 674, 335, 983, 91, 725, 32, 65, 377, 962, 677, 699, 262, 503, 286, 539, 231, 784, 345, 140, 642, 702, 824, 58, 939, 850, 55, 547, 970, 210, 364, 378, 202, 797, 363, 399, 996, 314, 379, 833, 765, 937, 161, 223, 868, 972, 467, 301, 226, 84, 400, 502, 290, 142, 618, 750, 91, 129, 974, 877, 857, 861, 570, 599, 926};
	testSize = sizeof(test05)/sizeof(test05[0]);
	testArray = new arrayTracker(testSize, test05);
	cout << "Your Solution Code is: " <<  kSmallPartition(0, testSize-1, testArray) << endl;
}
