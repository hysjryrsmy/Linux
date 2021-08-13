
/* 1. 目录
命令          功能           
cd        切换当前工作目录     
pwd       打印当前工作目录  
mkdir     创建目录   
rmdir     删除目录

绝对路径；相对路径

CD切换工作目录
cd路径    #直接切换到某路径下
cd..      #切换到上层目录
cd.       #切换到当前目录
cd        #切换到当前用户家目录
cd~       #切换到当前用户家目录
cd-       #切换到上次的工作目录

PWD打印当前工作目录
grammar: pwd[option]
options:
 -L: 显示逻辑工作目录
 -P: 显示物理工作目录

 MKDIR创建目录
 grammar: mkdir[pm] <dir>
 options:
  -p: 自动创建父目录
  -m: 设置权限

RMDIR删除目录
grammar: rmdir[p] <dir>
options:
 -p: 删除祖先

*/


/* 2. 文件目录的管理
命令          功能          
ls      显示文件及目录信息     
cp            拷贝 
rm            删除            
mv            移动
basename    取文件名         
dirname     取目录名

ls显示文件及目录信息
grammar: ls[option][file]
options:
   -a: 显示所有文件名
   -A: 显示所有文件名不包括 . 和 ..
   -l: 长列表格式
   -h: 人类可读的方式
   -i: 显示文件的inode
   -n: 显示uid、gid

cp拷贝
grammar:cp[option]···<sour>
<des>
options:
   -i: 若文件存在，询问用户
   -r: 递归复制
   -a: pdr的集合
   -p: 连同文件属性一起拷贝
   -d: 若源文件为连接文件的属性，则复制连接文件属性
   -s: 拷贝为软连接
   -l: 拷贝为硬链接
   -u: 源文件比目的文件新才拷贝
尝试： cp file1 file2···dir

rm删除 （慎用）
grammar: rm[option]··· <dir_or_file>
options:
   -i: 互动模式
   -r: 递归删除
   -f: force

mv移动
grammar: mv<source···><dest>
    mv source1 source2 source3 dir
options:
   -i: 互动模式
   -f: force
   -u: 源文件更新才会移动
举例：mv aaa bbb(实现了对aaa重命名)  ； mv bbb ~(实现了对bbb的移动，移动到了家目录下面)

dirname和basename
dirname：完整路径的名字，忽略最后一个文件或者文件夹
basename：除去完整路径的名字，留下最后的文件的名字
*/



/*文件内容的查阅

cat 正向连续读
grammar: cat[options]<file>
options:
  -A:
  -v:
  -E:




tac 反向连续读





nl  输出行号显示文件





more  一页一页的显示文件内容





less 与more相似，但是可以上下翻看




head 只看头几行






tail  只看末尾几行







od  以二进制方式查看文件内容


 





*/


/*




*/


/*




*/


/*




*/


/*




*/


/*




*/



/*




*/



/*




*/



/*




*/



/*




*/




/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/



/*




*/


