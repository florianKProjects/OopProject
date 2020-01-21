#pragma once
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

class Task
{
private:
	string title;
	string date;
	bool status;

	string getTimeStr()
	{
		time_t now = system_clock::to_time_t(system_clock::now());

		string s(30, '\0');
		//strftime(&s[0], s.size(), "%Y-%m-%d %H:%M", localtime(&now));
		return s;
	}
public:
	Task(string title, string date, bool status);
	~Task() {};
	string get_title() const { return  title; }
	string get_date() const { return  date; }
	bool get_status() const { return status; }
	
	void set_title(const string t) { title = t; };
	void set_date(const string d) { date = d; };
	void set_status(const bool s) { status = s; };



};

