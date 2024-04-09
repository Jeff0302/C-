#include<iostream>
//c++中const修飾的全局變量，默認是內部連接(只在當前源文件有效 不能直接用於其他源文件)
//如果必須在其他源文件使用只讀的的全局變量，必須要加extern將a轉換成外部連接
extern const int a=100;