Framebuffer Window System

Compiles and runs on Debian 11.11 console with no X or Wayland (uses fbdev directly).

Ensure you have the following font installed or create and copy the font+folder structure before running either the binary or compiled binary:

/usr/share/fonts/truetype/ttf-dejavu/DejaVuSansMono.ttf

Precompiled x86 binaries in bin_x86. You will have to chmod 777 the bin files first then only use on a Linux fb console run sudo ./wserver from within /bin_x86/wserver/

Or to compile from source ensure pkg-config is installed and then clone this repo and then:

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
