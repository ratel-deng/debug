#include<stdio.h>
#include"config.h"

void main_init();

int main(){
	main_init();
	led_init();
	return 0;
}

void main_init(){
	printf("%s\n%s\n%d\n",__FILE__,__func__,__LINE__);

}

