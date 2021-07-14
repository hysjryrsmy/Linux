
//对于passwd这个命令有哪些权限
//set_uld

//在vim编辑器中，哪一个是不保存就退出
//:q!

//在查找匹配字符串的时候，哪一个符号是匹配字符串结尾的
// $

//^ ： 行首，字符串行首
//* ： 匹配0个或多个字符
//. ： 匹配一个字符

//哪一个命令是从文件中提取列以便后续处理
// cut

//tr：  字符的替换或者压缩
//tee： 
//wc：  统计的命令

//哪一个会使“echo”命令不会输出新的行
//-n


// 哪些是Linux发行版本
// Ubuntu、Redhat、CentOS


// 当使用man手册看一个命令的时候，哪一个进程是被打开的
// less


//在if语句中，操作符与名称一起用作参数以检查它是否存在，是否为文件夹
//-d

// 哪一个命令允许你定位到一个程序
// which ； whereis（都能查找到可执行程序）

// 请为Linux系统上名为photo.jpg的文件选择正确的完整路径。
//  /data/user1/images/photo.jpg

// 使用哪个命令使some_scipt.sh可执行
// chmod +x some_script.sh

// 哪个命令是检查主机是否在线
// plng

// 哪个是绝对路径的例子
//    //etc/passwd   ；  /etc/passwd

// 什么是命令行
//一个输入命令供操作系统执行的接口。




// 如何声明一个关联数组
//declare -A

//Linux三剑客：
// grep; sed; awk

//以下命令可以获取linux主机的负载相关指标
// uptime ; top ; w

//linux命令执行成功后会返回
//0

//下列关于set_uid说法正确的是
//set_uid可以给普通用户提权，让其在执行命令的时候，具有命令所有者的权限

//命令dirname/etc/passwd输出内容是  :  /ets
//命令basename/etc/passwd输出内容是  :  passwd

//如果存在文本文件/tmp/testfile，并且文件行数小于等于10行，则输出文件前3行
// if[[-f'/tmp/testfile']] && [['cat/tmp/testifile | wc -l' -le 10]];then head -3 /tmp/testfile   
// fi

//Linux程序运行后，文件句柄0,1,2分别是：
//标准输入，标准输出，标准错误

//若要使用进程名来结束进程，应使用（）命令
//  kill

// vi编辑器里面如何删除最后一行
// G;dd

// 管道可以将前一个命令的标准输出，给后一个命令作为其标准输入
// 管道其实是一种文件

// 在 Vim 中，复制一行的命令是
//  yy  ； 1yy  ;  y1y

// Linux基本文件：
// 目录文件、管道文件、套接字文件、链接文件、块设备文件、字符设备文件、普通文件

// 使用locate无法定位到新创建的文件，该输入（）命令更新数据库文件
// updatedb

// 有一个命令，因man手册太长而生，这个命令是（）
// tldr




// 1. 判断一个整数a能否被另一个整数b整除；输入两个整数a，b（1<=a,b<=500),a能被b整除输出YES否则输出NO
/*
#!/bin/bash
read a b

if [[$[a % b] - eq 0]];then
   echo"YES"
else
	echo"NO"
fi
*/




// 2. 统计字符串个数
// 给一个文本，输出一个string出现的次数，可为0  ； 输入：字符串和文本  ； 输出：文本中字符串个数
/*
#!/bin/bash
read string
read words
sum=0
word = 'echo ${words} | tr -sc a-zA-Z "\n"'
for i in ${word}; do
	if [[ ${i} == ${string} ]]; then
		sum=$[${sum}+1]
	fi
done
echo ${sum}
*/




// 3. SHELL查找字符串
//查找文本中最长的字符串，输出字符串长度的2倍数， 
//输入：给定一个不包含换行的文本  ； 输出：第一行：最长字符串长度的2倍值  ; 第二行：输出文本中最长的字符串
/*
#!/bin/bash
read words
max_length=0
word = 'echo ${words} | tr -sc a-zA-Z "\n"'
for i in ${words}; do
	length = 'echo -n ${i} | wc -c'
	if [[ ${length} -gt ${max_length}]]; then
		max_length=${length}
		max_str=${i}
	fi
done
echo $[${max_length}*2]
echo ${max_str}
*/




// 4. 选定用户ID
// 输出/etc/passwd这个文件中的任意第M到N个的用户ID
//输入：读入/etc/passwd 文件（一共30行，可以提示按行读入）；输入M、N ；M<=N<=30
//输出：第M~N个用户ID
/*
#!/bin/bash
read m
read n

declare -a arr
for i in 'seq 1 30'; do
	read arr[$i]
done

for ((j = $m; j <= $n; j++)); do
	echo ${arr[$j]} | cut -d : -f3
done
*/


//统计字符串长度：
//echo - n ${string} | wc - c
//echo ${#string}
//