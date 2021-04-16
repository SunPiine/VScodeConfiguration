1.首先前往ftlk 官网下载压缩包 https://www.fltk.org/software.php
2.解压安装包，此时就可以使用vs 进行编译了, GCC/GNU + VScode 需要进一步的设置
3.使用Cmake 软件进行编译到目的文件夹如FTLK_GNU
4.在FTLK_GNU 文件夹内使用mingw32-make 编译文件，然后使用mingw32-make install 安装文件，记住文件位置
5.在VScode 中打开一个文件夹建立一个cpp文档
6.重点配置tasks.json 文件，可以使用Crtl+Shift+P tasks 开始任务配置，添加头文件和库文件包含 (8.中库文件)
7.使用Shift+Ctrl+B 进行编译，F5 gdb debug 也可以使用了
8.需要包含的库文件除 fltk 编译出的外还需，comctl32 wsock32 kernel32 user32 gdi32 shell32 ole32 oleaut32 uuid odbc32 odbccp32 Advapi32
9.记得 comctl32 在系统中的文件名是libcomclt32.a lib指出是库文件，.a 指出是GNU 编译器下库文件
10.本文件夹中有 .vscode 文件夹可以参考复制其中的 .json 配置，但是记得需要根据自己的文件地址进行修改
11.c_cpp_properties.json 是cpp 编辑器配置；tasks.json 是编译器配置；launch.json 是调试器配置是默认的，或者是和一般的cpp调试配置一致