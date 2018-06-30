/********************************************************************* 
** Author: Melody Reebs
** Date: 06/28/2018
** Title: BART times
** Description: StopTime class specification file
*********************************************************************/

#ifndef STOPTIME_HPP
#define STOPTIME_HPP

#include <string>
#include <vector>
using std::string;
using std::vector;

class StopTime {
  private:
    string station;
    string time;
    string dest;

  public:
    // Constructors
    StopTime(string, string, string);

    // Get methods
    string getStation();
    string getTime();
    string getDest();

    // Set methods
    void setStation(string);
    void setTime(string);
    void setDest(string);

};

#endif
