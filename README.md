mt7601u_driver_linux
====================

Driver of mt7601u(Include 360wifi2 and xiaomi wifi)
1、MT7601U的驱动程序，修改了在linux kernel 3.13以上编译错误的问题。
2、小米wifi需要在common/rt_dev_id.c下添加小米的id配置
3、使用方法：
	（1）确保你已经安装编译环境和kernel头文件
	（2）解压驱动，打开终端进入驱动源码目录
	（3）make
	（4) sudo make install
	（5) modprobe mt7601Usta
