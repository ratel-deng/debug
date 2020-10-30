#ifndef __DEBUG_H
#define __DEBUG_H

#include<stdio.h>

#define ERR_NUM		3
#define WARN_NUM	2
#define DEBUG_NUM	1

#define PRINTF_SWITCH	1

#define ERR(str,...)				\
if(PRINTF_SWITCH>=ERR_NUM){			\
	printf(str,##__VA_ARGS__);		\
}

#define WARN(str,...)				\
if(PRINTF_SWITCH>=WARN_NUM){			\
	printf(str,##__VA_ARGS__);		\
}

#define DEBUG(str,...)				\
if(PRINTF_SWITCH>=DEBUG_NUM){			\
	printf(str,##__VA_ARGS__);		\
}

#endif

