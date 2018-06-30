/********************************************************************* 
** Author: Melody Reebs
** Date: 06/28/2018
** Title: BART times
** Description: StopTime class implementation file
*********************************************************************/

#include <string>
#include <vector>
#include "StopTime.hpp"
using std::string;
using std::vector;

// Constructor
StopTime::StopTime(string s, string t, string d) {
  setStation(s);
  setTime(t);
  setDest(d);
}

// Get station
string StopTime::getStation() {
  return station;
}

// Get time
string StopTime::getTime() {
  return time;
}

// Get destination
string StopTime::getDest() {
  return dest;
}

// Set station
void StopTime::setStation(string s) {
  station = s;
}

// Set time
void StopTime::setTime(string t) {
  time = t;
}

// Set destination
void StopTime::setDest(string d) {
  dest = d;
}

