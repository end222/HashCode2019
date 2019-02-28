#include <cstring>
#include <string>
#include <string.h>
#include <list>
using namespace std;

struct foto
{
	int id;
	char orientacion;
	int numTags;
	list<string> tags;
};

