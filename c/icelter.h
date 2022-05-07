/**********************************************
    Copyright (C) Icelter in Coding, 2022. Previously Ghdgtdgu Studio, 2019 - 2022.

    Filename:       icelter.h
    Author:         Icelter

    Description:    这是Icelter编写C语言程序的公用头文件,
                    包括了一些可能有用的定义.
                    
    History:
    1.  Date:   May 7, 2022
        Author: Icelter
        Modification:   创建了这个文件.

**********************************************/

#ifndef ICELTER_INCLUDE_ICELTER_H
#define ICELTER_INCLUDE_ICELTER_H

/* 头文件版本 */
#define ICELTER_H_VERSION       1

/* 常量声明 */
#define STRING_MAX_LENGHT       256
#define STRCFG_MAX_LENGHT       64

/* 布尔格式的声明 */
typedef int     BOOL

#define FALSE   0
#define TRUE    1

/* 默认错误码的声明 */
#define ICELTER_ERROR_SUCCESS   0
#define ICELTER_ERROR_FAILED    1

#endif