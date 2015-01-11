运行环境：Ubuntu 14.04 , g++ 4.8.2
相关依赖：需安装multilab，bison，flex (apt-get install即可)
运行：
1. 在src文件夹下执行make。（注：需要lib文件夹下的lib文件。需自行创建build文件夹，否则make会出错）
2. 成功make后会在src文件夹中出现dbcreate，dbdestroy以及BbMmSQL这三个可执行文件
3. 运行命令：./dbcreate dbname 来创建一个database。成功运行后，会出现一个名为dbname的文件夹
4. 运行命令：./dbdestory dbname 来删除一个database。运行成功后，相应的文件夹会消失
5. 运行命令：./BbMmSQL dbname 进入主程序，之后输入标准SQL语句即可
