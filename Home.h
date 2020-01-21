#pragma once
#include <string>
#include "Task.h"
#include <list> 

class Home :
	public Task
{
private:
	list <string> context;
	int repeat;
};

