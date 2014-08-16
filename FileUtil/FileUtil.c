/*
 * FileUtil.c
 *
 *  Created on: 2014-8-16
 *      Author: lizhiyong
 */

#include <stdio.h>
#include <string.h>
#include "FileUtil.h"


int main(int argc, char *argv[]) {
	//printf("这么多年了还是只会写hello world\n");

//	printf("参数个数 == %d  \n", argc);
//
//    char ** temp = argv;  /* 保留argv */
//    while( *++temp != NULL ){
//        printf("%s \n", *temp);
//    }

	if (argc <= 1) {
		printf("参数错误 -h 查看使用方法\n");
		return 0;
	}

	if (argc == 2 && help(argv[1]) != 0) {
		printf("参数错误 -h 查看使用方法\n");
		return 0;
	}

	if (argc == 2 && help(argv[1]) == 0) {
		printf("fileutil -r filename 获取文件内容\n");
		printf("fileutil -w filename content 将content写入到filename\n");
		return 0;
	}

	return 0;
}

int help(char *input) {
	char * h = HELP;
	return strcmp(input, h);
}
