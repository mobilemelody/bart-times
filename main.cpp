#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "StopTime.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;

int main() {
  vector<StopTime> times;
  ifstream stopTimesFile;
  stopTimesFile.open("stop_times.txt");
  string line;

  // Read file and add to vector
  while(getline(stopTimesFile, line)) {
    // Parse a single line
    int count = 0;
    string time = "", station = "", dest = "";
    
    for (int i = 0; i < line.length(); i++) {
      if (line[i] == ',') {
        count ++;
      }
      else if (count == 1) {
        time += line[i];
      }
      else if (count == 3) {
        station += line[i];
      }
      else if (count == 5) {
        dest += line[i];
      }
    }

    // Push values to vector
    times.push_back(StopTime(station, time, dest));
  }

  // Ask user to input station code
  string input;
  cout << "Enter a station code: ";
  cin >> input;

  // Print train times for given staion code
  for (int i = 0; i < times.size(); i++) {
    if (times[i].getStation() == input) {
      cout << times[i].getTime() << " " << times[i].getDest() << endl;
    }
  }

  return 0;
}
