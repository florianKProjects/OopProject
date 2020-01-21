#include "pch.h"
#include "Task.h"
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

Task::Task(string t, string d, bool s):title(t),date(d),status(s)
{
}
