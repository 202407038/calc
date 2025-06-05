#include "mod.h"

int mod(int x, int y) {
	int i=0;
	for(i=x;i>y;i=sub(i,y));
	return i;
}
