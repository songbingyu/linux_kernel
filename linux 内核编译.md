记录下linux 内核在centos 下编译步骤

## linux 内核编译步骤：
1. 安装依赖 yum install gcc ncurses ncurses-devel
2. 下载内核 [The Linux Kernel Archives](https://www.kernel.org/)
3. 解压 tar -xf linux.xx
4. config 
   三种选择：
   
   . make menuconfig， 自己配置
   
   . make oldconfig， 用系统的配置
   
   . 直接copy cp /boot/config-3.19.0-47-generic  .config
   
5. make -j8
6. 安装 make modules_install install
7. 修改grub引导，重启
    . grub 引导具体系统不同，我用的阿里云，参考[云服务器 ECS Linux CentOS 修改内核引导顺序](https://help.aliyun.com/knowledge_detail/41463.html)
    . reboot
   
------------------------------------
参考：

[[linux内核]完整编译内核源码的过程](https://segmentfault.com/a/1190000004418939)

[How to Upgrade Linux Kernel to Stable 3.18.4 on CentOS 7.x](http://linoxide.com/linux-how-to/upgrade-linux-kernel-stable-3-18-4-centos/)

[CentOS 6.x 内核升级（2.6.32 -> 3.10.58）过程记录](https://segmentfault.com/a/1190000000733628)

[我需要创建一个自定义的内核](https://wiki.centos.org/zh/HowTos/Custom_Kernel)
