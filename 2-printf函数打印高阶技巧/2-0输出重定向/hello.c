#include<stdio.h>
int main(){
    	printf("hello world\n");
	/*重定向stdout到tmp文件，如果打开错误，则向终端报错*/
	if(freopen("tmp","w",stdout) == NULL)
	    fprintf(stderr,"the file is error\n");
	/*测试是否重定向成功*/
	puts("there is tmp text");
	/*关闭stdout文件流*/
	fclose(stdout);

	/*重定向stderr到err文件，如果打开错误，则向终端报错*/
	if(freopen("err","w",stderr) == NULL)
	    fprintf(stdout,"the file is error\n");
	/*测试是否重定向成功*/
	fprintf(stderr,"there is err text\n");
	/*关闭stderr文件流*/
	fclose(stderr);
	return 0;
}


