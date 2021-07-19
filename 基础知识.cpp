/* 1. 终端
终端(terminal) = tty(Teletypewiter, 电传打印机)，作用是提供一个命令的输入输出环境，
在linux操作系统下使用组合键ctrl+alt+T打开的就是终端，可以认为terminal和tty是同义词

*/


/* 2. shell命令解释器
shell是一种人机交互的接口。shell是指“提供使用者使用界面”的软件，是一种命令解释器，是Linux内核的一个壳，负责外界与Linux内核的交互
常见的shell解释器：sh、bash、zsh


*/


/* 3. 命令
命令是人和计算机交互的基本单位，人使用命令将要做什么事传达给计算机，计算机做出解析，并做出回应

linux命令由以下几个部分组成：命令名，分隔符，选项和操作对象。

有些命令由二级子命令：apt install  ； apt remove
install 和 remove是apt命令的二级子命令

ls -l a.c
命令名（ls）：命令名标识了命令的功能
分隔符（空格）；分隔符通常为空格，连续的多个空格会被视为一个空格
选项（-l）：命令的选项通常用-连接，通常为一个字母，是选项的首字母。大多数命令都可以使用-h来查看该命令的帮助
操作对象（a.c)：操作对象为该命令动作的承受者

*/


/* 4. 程序
执行命令的时候，每一个命令，其实对应的就是系统中的一个程序。
计算机程序是指一组指示计算机执行动作或做出判断的指令，通常用某种程序设计语言编写，运行于某种目标体系结构上。


*/


/* 5. 进程
进程是程序在内存中的镜像
*/


/* 6. 路径
绝对路径：
绝对路径的起始点为根目录/,例如/usr/bin/cp就是一个绝对路径。
相对路径：
相对路径的起始点为当前路径.假如用户当前目录为/home/mengdi、进入etc目录可以写为cd ../../etc
特殊路径：
~  ：家目录
-  ：上次工作目录
/  ：根目录
.. ：上层目录 
.  ：当前目录

*/


/* 7. 软件
在Linux操作系统中，一切皆文件。只需要拷贝相关文件，并执行其主程序就可以。
通常，一个软件包含的内容会分别被拷贝到同级别的bin、lib、share 和 etc目录下。

bin：  存放程序的可执行文件。在系统环境变量中将该路径添加进去，就可以直接执行程序.
lib：  库文件集中存放，方便共享。
share：存放程序需要的其他资源.
etc：  配置文件存放路径，大部分的程序的配置文件都可以在这个路径下找到。

*/


/* 8. 配置方式
在Linux中，一切皆文件。所有的配置操作都可以使用纯文本的配置文件来配置

*/


/* 9. 隐藏文件
在Linux中，隐藏文件都是以”.”开头的，也就是说所有以”.”开头的文件都会被系统识别为隐藏文件。

*/


/* 10. 文件类型
ll = ls –la
七种文件类型
- ：regular file 普通文件
d ：directory 目录
l ：link 链接文件
b ：block 块设备 存储数据以供系统存取的接口设备，也就是硬盘
c ：character 字符设备 串口设备，键盘，鼠标等
s ：socket 套接字
p ：pipe 管道


*/


/* 11. 普通文件类型
纯文本文件      使用ASCII编码
二进制文件      系统中的可执行文件，不包括脚本
数据格式的文件  /var/log/wtmp 使用last读取      last –f /var/log/wtmp

*/


/* 12. 文件权限
权限的每一组都由三个数字表示分别为421(rwx)，该组的的权限就可以简单的用这三个数字相加得到一个八进制数。-表示无此权限计数为0。

与文件权限有关的命令
chmod  #更改文件权限
chown  #更改文件所属用户
chgrp  #更改文件所属组

*/


/* 13. chmod用法
chmod a+x file         #给file文件的ugo都赋予执行的权限
chmod o-x file         #将file文件o减去执行权限
chmod 755 file         #设置file文件的权限为rwxr-xr-x
chmod u=rwx,go=rx file #设置file文件的权限为rwxr-xr-x

*/


/* 14. chown用法
chown mengdi:kaikeba file          #修改file的所属用户是mengdi,所属组为kaikeba
chown -R mengdi:kaikeba directory  #修改目录directory及目录下的所有文件的所属用户是mengdi，所属组为kaikeba
chown mengdi file                  #修改file的所属用户为mengdi


*/


/* 15. chgrp用法
chgrp root file #修改file所属的组为root

*/


/* 16. 用户与用户切换
Linux有两类用户,分别是root和普通用户

root：超级管理员。root拥有系统的完全控制权，所以在使用Linux系统的时候，需要慎重使用root用户，更多的自由与权限同样也意味着更大的风险。
普通用户：普通用户拥有的权限就没有root用户那么大了，它只能做系统允许做的事。普通用户可以执行大部分的命令，但是root专有的命令却不能执行。

用户切换
su – mengdi
sudo -i


*/


/* 17. 用户管理的重要配置文件
/etc/passwd   用户名 密码位 用户编号 归属组编号 姓名 $HOME Shell
root      x     0    0    root     /root    /bin/zsh
账号名称  密码  uid  gid  用户信息   $HOME    SHELL


/etc/shadow   用户名 已加密密码 密码改动信息 密码策略
root    $6$...ui/    17299       0       99999      7        null        null       null
账户      密码      修改密码的   密码不   密码需要   密码变更   密码过期     账号失效    保留
名称                  日期      可改动   重新修改   期限前     的宽限时间   日期
                                日期     的日期    警告日期

/etc/group    群组名 密码位 群组编号 组内用户
Test       x       1002      userA,userB
组名    群组密码     gid       支持的账户


/etc/gshadow  群组密码相关文件
Test     !       null           userA,userB
组名    密码    群组管理员     加入该群组的所属账号

*/


/* 18. 用户管理相关命令
命令          说明   

① su          切换用户            grammar：su [-lmpfc] <username>
options：
- | -l :重新登录
-m | -p:不更改环境变量
-c comand:切换后执行命令，并退出

② passwd      设定用户密码        grammar：passwd [-dleSxnsf] <username>
options：
-d：清除密码
-l：锁定账户
-e：使密码过期
-S：显示密码认证信息
-x days：密码过期后最大使用天数
-n days：密码冻结后最小使用时间
-s：更改登录shell
-f：更改用户信息

③ chsh        更改用户shell      grammar：chsh –s path username

④ useradd     新建用户           grammar：useradd [-dmMsugGnefcD] <username>
options：
-d dir：指定$HOME
-m：自动建立$HOME
-M：不自动建立$HOME
-s shell：设置用户登录shell
-u uid：设置用户编号
-g groupname：设定用户归属群组
-G groupname：设置用户归属附加群组
-n：不建立以用户名称为群组名称的群组
-e days：设置账号过期时间
-f days：缓冲时间,days天后关闭账号
-c string：设置用户备注
-D [表达式]：更改预设值
/etc/login.defs 新建用户规则
/etc/skel/ 新建用户默认文件

⑤ id          显示用户信息        grammar： id [-gGnru] <username>
options：
-g：下属所属组ID
-G：显示附加组ID
-n：显示用户，所属组，或附加群组的名称
-u：显示用户ID
-r：显示实际ID

⑥ sudo        临时切换为root用户   grammar：sudo [-siul] <command>
options：
-s：切换为root shell
-i：切换到root shell，并初始化
-u username|uid ：执行命令的身份
-l：显示自己的权限

⑦ gpasswd     设定群组密码         grammar：gpasswd [-adrAM] <群组名>
options：
-a username：将用户加入群组
-d username：将用户从群组中删除
-r：删除密码
-A username：将用户设置为群组管理员
-M username1,username2 … ：设置群组成员

⑧ usermod     修改用户账号         grammar： usermod [-cdefgGlLsuU] <username>
options：
-c string：修改备注信息
-d dir：修改$HOME
-e days:密码期限
-f days：密码过期后宽限的日期
-g groupname：修改用户所属群组
-G groupname：修改用户所属附加群组
-l username ：修改用户账号名称
-L：锁定用户密码，使密码无效
-s shell：修改用户登录后所使用的shell
-u uid：修改用户ID
-U：解除密码锁定

⑨ userdel     删除用户            grammar：userdel -r <username>
options
-r :删除用户相关文件和目录

*/


