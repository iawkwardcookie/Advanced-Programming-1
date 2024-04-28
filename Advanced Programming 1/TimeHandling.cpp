#include "TimeHandling.h"

string TimeHandling::convertTime(const directory_entry& item)
{
    tm timestamp = convert(item.last_write_time());

    // dd/mm/yyyy \t hh:mm
    string result = 
                to_string(timestamp.tm_mday)
        + "/" + to_string(timestamp.tm_mon)
        + "/" + to_string(timestamp.tm_year + 1900)
        + "\t" + to_string(timestamp.tm_hour)
        + ":" + to_string(timestamp.tm_min);

    return result;
}

const tm TimeHandling::convert(const filesystem::file_time_type& timestamp)
{
  using namespace chrono;
  system_clock::time_point delta=time_point_cast<system_clock::duration>(timestamp-filesystem::file_time_type::clock::now()+system_clock::now());
  time_t conversion=system_clock::to_time_t(delta);

  tm result;
  localtime_s(&result, &conversion);
  return result;
}
