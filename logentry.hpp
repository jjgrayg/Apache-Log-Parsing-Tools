#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        3/4/2021
// Author:      Jarod Graygo
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date {
public:
    Date() {};
    Date(String day, String month, int year) : day(day), month(month), year(year) {};
    friend std::ostream& operator<<(std::ostream&, const Date);
private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
public:
    Time() {};
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {};
    friend std::ostream& operator<<(std::ostream&, const Time);
private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
    LogEntry() {};
    LogEntry(String); //Parsing complete assignment may need work
    friend  std::ostream& operator<<(std::ostream&, const LogEntry&);
    String get_host() const;
    int get_bytes() const;

    bool valid;

private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse(std::istream&);
void                    output_all(std::ostream&, const std::vector<LogEntry>&);
void                    by_host(std::ostream&, const std::vector<LogEntry>&);
int                     byte_count(const std::vector<LogEntry>&);

int                     string_to_int(String); //

#endif
