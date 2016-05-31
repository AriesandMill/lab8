#include <iostream>
#include "SBlock_inh.h"
using namespace std;
int main()
{
	I_Block i, *ip = &i;
	S_Block s, *sp = &s;
	i.paint();
	ip->paint();
	s.paint();
	sp->paint();
	ip = &s;
	ip->paint();
	return 0;
}
