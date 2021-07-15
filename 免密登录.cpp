/*1. 如何让登录变得简单

 登录云主机
ssh root@云主机的地址

退出root用户
exit /  logout / ctrl+d

sudo vim /etc/hosts  打开并编写
ip地址 + 别名（自己定）
:wq

ssh root@别名


(命令的别名) alias a1="ssh root@别名"

*/



/*2. 免密登录

查看是否有目录 .ssh及目录下是否有秘钥对文件
~ cd .ssh   
.ssh ls
.ssh cd

生成秘钥对的命令： ssh-keygen

公钥复制到远程云主机： ssh-copy-id 用户名@主机名

从本地拷贝到远程位置 ： scp 文件名 用户名@主机名：目的位置

从远程位置拷贝文件到本地 ： scp 用户名@主机名：文件名 目的位置



~ cd .ssh
.ssh ls
.ssh cat id_rsa.pub(公钥)     ；   cat->打印文件的内容

登录云主机

打开文件： cd .ssh/
vim authorized_keys

o->新建一行
i->在当前位置插入

本地环境的公钥复制到要免密登录的云主机的 .ssh文件下面的 authorized_keys文件里面，自动复制

*/



/*3. man手册：
man pwd
man -f printf  直接查找printf，在哪里有都列出来
man -k print   根据关键词查找 
man 3 printf  去到第三章  

通过man手册可以看到命令

*/




/* 4. tldr = too long didn't read  : 

sudo apt update  #更新源列表
sudo apt install tldr
tldr  ->  /home/a1/.tldr
rm -rf /home/a1/.tldr
tldr -> 等待下载

ssh a1@kkb

*/




/*5. vim
普通模式
删除操作： x(删除字符)  d  dd(删除一行)  ndd(删除几行)  dw  d$  d^   dG  dnG
复制：  y  yy  yG  ynG  y$  y^
粘贴：  p
移动光标： gg  GG  ngg
替换：r  R  cc  cG  cnG c$  c^
undo redo 可视块操作： u   ctrl + r   ctrl + v


插入模式
i  ： 在光标之前插入
I  ： 在光标所在行首插入
a  ： 在光标之后追加
A  ： 在光标所在行尾追加
o  ： 在光标所在位置的下一行打开新行插入
O  ： 在光标所在位置的上一行打开新行插入


命令模式
:w  :q  :wq  :x  :wq!  :q!     文件的保存与退出操作
:args                          显示文件名称，切换文件
:e a.txt                       打开a.txt
:saveas ~/b.txt                另存为~/b.txt
:split   :vsplit               切分窗口
:s/string1/string2(加上/g 替换一行）  字符串替换
:n   =  ngg                    跳到第几行 


ctrl+z         挂起
fg             返回前台
/searchstring  查找
*/
