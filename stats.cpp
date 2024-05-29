

// stats.cpp
#include "stats.hpp"
#include "p1_library.hpp"
#include <cassert>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<double, int> > summarize(vector<double> v) {
    
     vector<pair<double, int> > vecSum;
     // nested for loop
     // instead of vount do v.sedouble percentilecond++
     // sort entire vector
     // make temp variable to set that the frist number is the one
     // to be looking for, then when you come across one that isnt the temp
     // you want to push to vector (make pair look on spec) the pair then 
     // restart the temp ant count
     // make vector in begining to return that u can put all of your pairs into

       sort(v);
     double value = 0;
     int frequency = 0;
    for (int i = 0; i < v.size(); i++){
       value = v[i];
       if (v[i+1] == value){
        frequency++;
       }
        else if( v[i+1] != value){
          frequency++;
          vecSum.push_back(make_pair(value, frequency));
            value = 0;
            frequency = 0;
            }
            else if (i == (v.size()-1)){
              frequency++;
            vecSum.push_back(make_pair(value, frequency));
            }
        
        
        }


  assert(v.size() > 0);
    return vecSum;
}

int count(vector<double> v) {
    int count =0;
    for (int i = 0; i < v.size(); i++){
        count++;
    }
    return count;
   

  assert(v.size() > 0);
}

double sum (vector<double>v){
    double sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];

    } 
    return sum;
}
double mean(vector<double> v) {
    double sum_mean = sum(v);
    double mean =0;
    mean = (sum_mean) / (v.size());
    return mean;
  assert(v.size() > 0);
}

double median(vector<double> v) {
    sort(v);
    double median = 0;
    if (v.size() % 2 == 0){
       double v1 = v[(v.size()/2) - 1];
       double v2 = v[(v.size()/2)];
       median = (v1 + v2)/2;
    }
    else {
        median = v[((v.size()+1)/2) - 1];
    }
    return median;
  assert(v.size() > 0);
}

double mode(vector<double> v){
  // make one for when there are ties
int mostFreq = 0;
int mode = 0;
int count = 0;
int value = 0;
vector <double> equalModes;
sort(v);
value = v.at(0);
for (int i = 0; i < v.size(); i ++){
       if (v[i] == value){
        count++;
        mode = value;
       }
        else {
        if (count > mostFreq){
          mostFreq = count;
          mode = value;
        }
      }

        }  
return mode;

}
  

double min(vector<double> v) {
   double minValue = 0;
    sort(v);
    minValue = v[0];
    return minValue;
}

double max(vector<double> v) {
    double maxValue =0;
    sort(v);
    maxValue = v[v.size() -1];
    return maxValue;
  assert(v.size() > 0);
}

double stdev(vector<double> v) {
    double stanDev = 0;
    double x = 0;
    double y = 0;
    double c = 0;
    double avg = 0;
    avg = mean(v);
 for(int i =0; i < v.size(); i++){
   x = v[i] - avg;
   y += pow(x,2);
 }
   c = y/ (v.size() - 1);
   stanDev = sqrt(c);
   return stanDev;  
  assert(v.size() > 0);
}

double percentile(vector<double> v, double p) {
  assert((v.size() > 0));
  assert(p <= 1 && p >= 0);
  sort(v);
  double percentile = 0;
   double rank = 0;
  rank = ((p)*(v.size() - 1)) + 1;

double fractpart = 0;
double intpart = 0;
fractpart = modf(rank, &intpart);

if (p == 1){
percentile = v.at(v.size() -1);
//percentile = max(v);
}
else {
 percentile = v.at(intpart - 1) +(fractpart * (v.at(intpart) - v.at(intpart-1)));
}

  return percentile;

}

