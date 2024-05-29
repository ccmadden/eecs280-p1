#include <iostream>
#include "p1_library.hpp"
#include "stats.hpp"

using namespace std;
int main () {
string file_name;
    cout << "enter a filename" << endl;
cin >> file_name;
cout << "enter a column name" << endl;
string column_name;
cin >> column_name;
vector<double> v1 = extract_column(file_name, column_name);
cout << "reading column "<< column_name <<  " from " << file_name << endl;
cout << "Summary (value: frequency)" << endl;

vector <pair<double, int>> p2 = summarize(v1);
 for (int i = 0; i < p2.size(); i++) {
 cout << p2[i].first << ": " << p2[i].second << endl;
} 

cout << "count = " << count(v1) << endl;
cout << "sum = " << sum(v1) << endl;
cout << "mean = " << mean(v1) << endl;
cout << "stdev = " << stdev(v1) << endl;
cout << "median = " << median(v1) << endl;
cout << "mode = " << mode(v1) << endl;
cout << "min = " << min(v1) << endl;
cout << "max = " << max(v1) << endl;
cout << "  0th percentile = " << percentile(v1, 0) << endl;
cout << " 25th percentile = " << percentile(v1, 0.25)<< endl;
cout << " 50th percentile = " << percentile(v1, 0.50)<< endl;
cout << " 75th percentile = " << percentile(v1, 0.75)<< endl;
cout << "100th percentile = " << percentile(v1, 1)<< endl;



}