#include<stdio.h>

#define _DEBUG_ 1
#if _DEBUG_
#define DEBUG_prt(str,...) printf(str,##__VA_ARGS__)
#else
#define DEBUG_prt(str)
#endif


int main(){
	DEBUG_prt("--DEBUG--\t%s\n","ratel");
	return 0;

}

