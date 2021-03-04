//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES: A String containing a valid log entry  
// ENSURES: a LogEntry is constructed containing all necessary data, or an empty log if an invalid log entry String is provided
//
LogEntry::LogEntry(String s) {

    //Initialize necessary vars
    String day;
    String month;
    int year;
    String yearStr;

    int hour;
    String hourStr;
    int minute;
    String minuteStr;
    int second;
    String secondStr;

    String numBytesStr;

    std::vector<String> vec = s.split(' ');

    if (vec.size() == 10)
    {
        bool noEmpties = true;
        for (size_t i = 0; i < vec.size(); i++)
        {
            if (vec[i] == '\0' || vec[i] == ' ') noEmpties = false;
        }
        if (noEmpties) {

            valid = true;

            host = vec[0];

            //Extract day
            day = vec[3].substr(1, vec[3].findch(0, '/') - 1);

            //Extract month
            int offset = vec[3].findch(0, '/');
            month = vec[3].substr(offset + 1, vec[3].findch(offset + 1, '/') - 1);

            //Extract year
            offset = vec[3].findch(offset + 1, '/');
            yearStr = vec[3].substr(offset + 1, vec[3].findch(0, ':') - 1);
            //Convert year to int
            year = string_to_int(yearStr);

            //Extract hour
            offset = vec[3].findch(0, ':');
            hourStr = vec[3].substr(offset + 1, vec[3].findch(offset + 1, ':') - 1);
            //Convert hour to int
            hour = string_to_int(hourStr);

            //Extract minute
            offset = vec[3].findch(offset + 1, ':');
            minuteStr = vec[3].substr(offset + 1, vec[3].findch(offset + 1, ':') - 1);
            //Convert minute to int
            minute = string_to_int(minuteStr);

            //Extract second
            offset = vec[3].findch(offset + 1, ':');
            secondStr = vec[3].substr(offset + 1, vec[3].length());
            //Convert second to int
            second = string_to_int(secondStr);

            //Extract request
            request = vec[5].substr(vec[5].findch(0, '"'), vec[5].length()) + ' ' + vec[6] + ' ' + vec[7].substr(0, vec[7].findch(0, '"'));

            //Extract status
            status = vec[8];

            //Extract number_of_bytes
            numBytesStr = vec[9];
            if (numBytesStr == '-') numBytesStr = '0';
            //Convert number_of_bytes to int
            number_of_bytes = string_to_int(numBytesStr);

            //Make assignments to date
            date = Date(day, month, year);

            //Make assignments to time
            time = Time(hour, minute, second);
        }
    }
    else if (vec.size() < 10) valid = false;


}

//Output operator for LogEntry
std::ostream& operator<<(std::ostream& out, const LogEntry& logEntry)
{

    Date date = logEntry.date;
    Time time = logEntry.time;
    out << logEntry.host + ' ' + '-' + ' ' + '-' + ' '  + '[' << date << ':' << time << ']' << ' ' + logEntry.request + ' ' + logEntry.status + ' ' << logEntry.number_of_bytes << '\n';

    return out;
}

//Gets the host from a LogEntry
String LogEntry::get_host() const { return host; }

//Gets the bytes from a LogEntry
int LogEntry::get_bytes() const { return number_of_bytes; }

//Output operator for Date
std::ostream& operator<<(std::ostream& out, const Date date)
{
    out << date.day + '/' + date.month + '/' << date.year;

    return out;
}

//Output operator for Time
std::ostream& operator<<(std::ostream& out, const Time time)
{
    if (time.minute < 10) 
    {
        out << time.hour << ":0" << time.minute;
    }
    else
    {
        out << time.hour << ":" << time.minute;
    }

    if (time.second < 10)
    {
        out << ":0" << time.second;
    }
    else
    {
        out << ":" << time.second;
    }

    return out;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;

    while (in)
    {
        char storeage[500];
        in.getline(storeage, 500, '\n');
        String temp(storeage);
        LogEntry tempLog(temp);
        if (tempLog.valid)
        {
            result.push_back(LogEntry(temp));
        }
    }

    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry>& logVec) {
    int logSize = logVec.size();
    for (int i = 0; i < logSize; i++) out << logVec[i];
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logVec) {
    for (size_t i = 0; i < logVec.size(); i++) out << logVec[i].get_host() << '\n';
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry>& logVec) {
    int totBytes = 0;
    for (size_t i = 0; i < logVec.size(); i++) totBytes = totBytes + logVec[i].get_bytes();
    return totBytes;
}

//Converts a string to an integer
int string_to_int(String rhs)
{
    int i = 0;
    int num = 0;

    while (rhs[i] != 0)
    {
        num = (rhs[i] - '0') + (num * 10);
        i++;
    }

    return num;

}
