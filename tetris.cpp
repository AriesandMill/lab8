#include <iostream>
#include "SBlock_inh.h"
#include <new>
#include <cstdlib>
#include <exception>
using namespace std;
int main()
{
		I_Block i, *ip = &i;
/*			I_Block *ipi[50];
				try { for(int k=0;k<50;++k)
						ipi[k] = new I_Block[5000000];
							}catch(bad_alloc &iii){
										cout <<"delete"<<endl;
												delete[] ipi;
													}*/
					S_Block s,*sp = &s;
						i.paint();
							ip->paint();
								s.paint();
									sp->paint();
										ip = &s;
											ip->paint();
												return 0;
}
