Framebuffer Window System

Compiles and runs on Debian 11.11 console with no X or Wayland (uses fbdev directly).
some precompiled x86 binaries in bin_x86. At the linux console run sudo ./wserver from within /bin_x86/wserver/

Or to compile from source clone the repo and then:

cd winnie/libwinnie/

make

cd ../clock/

make

cd ../sysmon/

make

cd ../tunnel/

make

cd ../winnie/

make

sudo ./wserver

press q to quit back to console

Orginal designer's demonstration video:

https://youtu.be/v6S5QaXWHiE?si=rYN0lqsdjJ-__shO
