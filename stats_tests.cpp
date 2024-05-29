/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.hpp"
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

void test_sum_small_data_set();
void test_sum_special_cases();
void test_sum_non_integral_values();
void test_perecentile();
void test_standardDev();
void test_mean_small_dataset();
void test_mean_non_integral_values();
void test_median_small_data_set();
void test_median_non_integral_values();
void test_min();
void test_max();
void test_minMax_same_num();
void test_summarize();
void test_mode();
void test_standardDev_integral();
void test_mode_same_values();
void test_mode_all_different();
void test_mean_neg_num();
void test_percentile_out_of_order();

// Add prototypes for you test functions here.


int main() {
  test_sum_small_data_set();
  test_sum_special_cases();
  test_sum_non_integral_values();
 test_perecentile();
  test_standardDev();
  test_standardDev_integral();
 test_mean_small_dataset();
 test_mean_non_integral_values();
 test_median_small_data_set();
 test_median_non_integral_values();
  test_min();
 test_max();
 test_minMax_same_num();
 test_summarize ();
  test_mode();
 test_mode_same_values();
 test_mode_all_different();
test_percentile_out_of_order();

  // Call your test functions here

  return 0;
}

void test_sum_small_data_set() {
  cout << "test_sum_small_data_set" << endl;

  vector<double> data1;
  data1.push_back(1);
  data1.push_back(2);
  data1.push_back(3);

  assert(sum(data1) == 6);

  cout << " test_sum_small_data_set passed" << endl;
}
void test_sum_special_cases(){
 cout<< "test_sum_special_cases" << endl;
 vector<double> data2;
 data2.push_back(3);
 data2.push_back(-2);
 data2.push_back(-5);
 assert(sum(data2) == -4);;

 vector<double> data3;
 data3.push_back(0);
  data3.push_back(0);
  data3.push_back(0);
  assert(sum(data3 )== 0);
 cout << "test_sum_special_cases passed" << endl;
 


}
void test_sum_non_integral_values(){

  cout << "test_sum_non_integral_values"<< endl;
  vector<double> data4;
  data4.push_back(1.1);
  data4.push_back(2.5);
  assert(sum(data4) == 3.6);
  cout << "test_sum_non_integral_values passed" << endl;

}

void test_perecentile(){
  // need to do more test cases
 vector<double> data5;
  data5.push_back(15);
  data5.push_back(20);
  data5.push_back(35);
  data5.push_back(40);
  data5.push_back(50);
  assert(percentile(data5, 0.4) == 29);
  cout << "test_perecentile passed" << endl;


}
void test_standardDev(){
  // need to do more test cases
  vector<double> data6;
   data6.push_back(82);
  data6.push_back(93);
  data6.push_back(98);
  data6.push_back(89);
  data6.push_back(88);
  cout << " expected = 5.95819, actual = " << stdev(data6)  << endl;
}

void test_standardDev_integral(){
  vector<double> data16;
   data16.push_back(10.21);
  data16.push_back(11.78);
  data16.push_back(98.7);
  data16.push_back(89.76);
  data16.push_back(1.81);
  cout << "expected = 47.5236, actual = " << stdev(data16) << endl;
}

// Add the test function implementations here.


void test_mean_small_dataset(){
 vector<double> data7;
 data7.push_back(1);
  data7.push_back(2);
  data7.push_back(3);
 assert(mean(data7) == 2);
 cout << "test_mean_small_dataset passed"<< endl;
}

void test_mean_neg_num(){
  vector<double> data19;
  data19.push_back(-1);
  data19.push_back(-18);
  data19.push_back(-5);
  data19.push_back(-8);
  assert(mean(data19) == -8);
  cout << "test test_mean_neg_num passed " << endl;

}
void test_mean_non_integral_values(){
  vector<double> data8;
  data8.push_back(1.2);
  data8.push_back(3.4);
  data8.push_back(10.2);
   data8.push_back(6.9);
 assert(mean(data8) == 5.425);
  cout << "test_mean_non_integral_values passed" << endl;

}
void test_median_small_data_set(){
  vector<double> data9;
  data9.push_back(2);
  data9.push_back(3);
  data9.push_back(8);
  assert(median(data9) == 3);
  cout << "test_median_small_data_set passed" << endl;
}
void test_median_non_integral_values(){
  vector<double> data10;
  data10.push_back(1.1);
  data10.push_back(3.4);
  data10.push_back(5.6);
  data10.push_back(6.4);
  data10.push_back(8.2);
  data10.push_back(9.6);
  assert(median(data10) == 6);
  cout << "test_median_non_integral_values passed" << endl;
}

void test_min(){
  vector<double> data11;
  data11.push_back(1);
  data11.push_back(2);
  data11.push_back(3);
  data11.push_back(5);
  assert(min(data11) == 1);
  cout << "test_min passed" << endl;

}
void test_max(){
  vector <double> data12;
  data12.push_back(1);
  data12.push_back(2);
  data12.push_back(3);
  data12.push_back(5);
  assert(max(data12) == 5);
  cout << "test_max passed" << endl;

}

void test_minMax_same_num(){
  vector<double>data13;
  data13.push_back(2);
  data13.push_back(2);
  data13.push_back(2);
  assert(max(data13) == 2 && min(data13) == 2);
  cout << "test_minMaxpassed" << endl;

}

void test_summarize(){
  vector<double>data14;
  data14.push_back(1);
  data14.push_back(1);
  data14.push_back(2);
  data14.push_back(3);
  vector <pair<double, int>> p1 = summarize(data14);
  for (int i = 0; i < p1.size(); i++) {
 cout << p1[i].first << ": " << p1[i].second << endl;
} 
 
}

void test_mode(){
  vector<double>data15;
  data15.push_back(1);
  data15.push_back(1);
  data15.push_back(2);
  assert(mode(data15) == 1);
cout << "test_mode passed" << endl;
}

void test_mode_same_values(){
  vector<double>data17;
   data17.push_back(1);
  data17.push_back(1);
  data17.push_back(1);
assert (mode(data17) == 1);
cout << "test_mode_same_values passed"  << endl;
}
void test_mode_all_different(){
 vector<double>data18;
   data18.push_back(1);
 data18.push_back(2);
 data18.push_back(3);
 assert(mode(data18) == 1);
cout << "test_mode_all_different passed" << endl;

}

void test_percentile_out_of_order(){
  vector<double>data20;
  data20.push_back(50);
  data20.push_back(20);
  data20.push_back(35);
  data20.push_back(15);
  data20.push_back(40);
  assert(percentile(data20, 0.4) == 29);
  cout << "test_percentile_out_of_order passed" << endl;
  

}
