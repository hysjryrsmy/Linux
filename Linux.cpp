/*vim操作
vimtutor     英文版
vimtutor zh  中文版

*/


/*
 oj：命令提示符

 ls  ：   命令
 ls -la  ： 命令 选项
 ls -la a.c ： 命令 选项 参数
 ls -lad dir ：命令 选项 参数

*/


/*家目录

权限有r，w，x三种权限分别表示可读、可写、可执行

vim .zshrc 

cat /etc/shells

echo ${SHELL}

cat /etc/passwd


*/


/*树形结构
切换目录、目录跳转： 使用cd，如果有GUI也可使用
查看目录内容： 可以使用ls命令查看目录下的文件
盘符： Linux只有一棵树
打印工作目录：pwd
拷贝：cp
mv ： 移动文件及目录
rm :  删除文件及目录
mkdir：创建目录
tree： 打印目录树
tar： 文件归档与压缩
ln：  创建连接文件

更新源列表
sudo apt update
sudo apt install tree


我是谁：whoami
我在哪：pwd

文件类型：下载.deb使用dpkg -i .deb安装
解压：    下载压缩包***.tar, tar命令解压
安装：     apt安装
安装来源： 需要配置合适的下载源

apt upgrade  更新本地软件为最新版本
apt search   搜索软件
apt remove   卸载软件
 
nethogs - 检测系统占用宽带情况
htop -  交互式的进程浏览器
nmon -  显示所有重要的性能优化信息
dstat - 全能信息统计工具


sudo apt update
sudo apt install htop
*/


/* 文件内容的修改与查看
touch :  创建空白文件
cat :    查看文件内容
vim :    文本编辑器
echo :   打印文本
more:    分页查看文件
less:    分页查看文件
head:    查看文件头部
tail:    查看文件尾部
diff:    对比文件
grep:    检索信息
wc:      计数

*/


/*文件的查找与定位
find:  查找文件
which: 查找可执行文件
locate:定位任何文件
whereis:查找可执行、源码、帮助手册
 
*/


/*用户相关命令
useradd:   新建用户
userdel:   删除用户
usermod：  修改用户
passwd:    修改密码
su:        切换用户
sudo:      获取管理员权限
chgrp:     修改文件所属组
chmod:     修改文件权限
chown:     修改文件所属者
logout:    退出用户
exit:      退出用户

*/


/*进程相关命令
ps:       打印进程
kill:     终止进程
pkill:    批量终止进程
killall:  批量杀死进程
crontab:  定时任务
ctrl+z:   挂起前台进程
fg:       进程调至前台
bg:       挂起的进程后台执行
jobs:     查看挂起和后台进程

*/


/*系统信息获取命令
date :     查看时间
df :       查看文件系统
du :       获取文件大小
free :     查看内存信息
top :      查看进程信息
htop :     查看系统信息
dstat :    查看资源信息
nmon :     系统监控器
ifconfig : 查看IP信息
uname :    查看OS信息
last :     查看最近登录信息
who :      查看当前登录信息


*/


/*其他命令
ssh：     远程连接
scp：     远程拷贝
wget：    获取http文件
ping：    测试远程主机
reboot：  重启
poweroff：关机

*/

