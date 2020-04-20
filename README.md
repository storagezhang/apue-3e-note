# 《UNIX环境高级编程》第三版学习笔记笔记

## 环境配置：
- wget http://www.apuebook.com/src.3e.tar.gz
- tar -zxvf src.3e.tar
- cd apue.3e/
- make
- sudo cp ./include/apue.h /usr/include/
- sudo cp ./lib/libapue.a /usr/local/lib/


## 笔记目录：
- 01 UNIX 基础知识
	- 1.2 UNIX 体系结构
	- 1.4 文件和目录
	- 1.5 输入和输出
	- 1.6 程序和进程
	- 1.7 出错处理
	- 1.8 用户标识
	- 1.9 信号
	- 习题
- 02 UNIX 标准及实现
	- 2.2 UNIX 标准化
	- 2.3 UNIX 系统实现
	- 2.5 限制
	- 2.6 选项
	- 2.8 基本系统数据类型
- 03 文件 I/O
	- 3.1 引言
	- 3.2 文件描述符
	- 3.3 函数 `open` 和 `openat`
	- 3.4 函数 `creat`
	- 3.5 `close`
	- 3.6 函数 `lseek`
	- 3.7 函数 `read`
	- 3.8 函数 `write`
	- 3.9 I/O 的效率
	- 3.10 文件共享
	- 3.11 原子操作
	- 3.12 函数 `dup` 和 `dup2`
	- 3.13 函数 `sync`、`fsync` 和 `fdatasync`
	- 3.14 函数 `fcntl`
	- 3.15 函数 `ioctl`
	- 3.16 `/dev/fd`
	- 习题
- 04 文件和目录
	- 4.2 函数 `stat`、`fstat`、`fstatat` 和 `lstat`
	- 4.3 文件类型
	- 4.4 设置用户 ID 和设置组 ID
	- 4.5 文件访问权限
	- 4.6 新文件和目录的所有权
	- 4.7 函数 `access` 和 `faccessat`
	- 4.8 函数 `umask`
	- 4.9 函数 `chmod`、`fchmod` 和 `fchmodat`
	- 4.10 粘着位
	- 4.11 函数 `chown`、`fchown`、`fchownat` 和 `lchown`
	- 4.12 文件长度
	- 4.13 文件截断
	- 4.14 文件系统
	- 4.15 函数 `link`、`linkat`、`unlink`、`unlinkat` 和 `remove`
	- 4.16 函数 `rename` 和 `renameat`
	- 4.17 符号链接
	- 4.18 创建和读取符号链接
	- 4.19 文件的时间
	- 4.20 函数 `futimens`、`utimensat` 和 `utimes`
	- 4.21 函数 `mkdir`、`mkdirat` 和 `rmdir`
	- 4.22 读目录
	- 4.23 函数 `chdir`、`fchidr` 和 `getcwd`
	- 4.24 设备特殊文件
	- 4.25 文件访问权限位小结
- 05 标准 I/O 库
	- 5.2 流和 FILE 对象
	- 5.3 标准输入、标准输出和标准错误
	- 5.4 缓冲
	- 5.5 打开流
	- 5.6 读和写流
	- 5.7 每次一行 I/O
	- 5.8 标准 I/O 的效率
	- 5.9 二进制 I/O
	- 5.10 定位流
	- 5.11 格式化 I/O
	- 5.12 实现细节
	- 5.13 临时文件
	- 5.14 内存流
	- 5.15 标准 I/O 的替代软件
- 06 系统数据文件和信息
	- 6.1 引言
	- 6.2 口令文件
	- 6.3 阴影口令
	- 6.4 组文件
	- 6.5 附属组 ID
	- 6.7 其他数据文件
	- 6.8 登录账户记录
	- 6.9 系统标识
	- 6.10 时间和日期例程
