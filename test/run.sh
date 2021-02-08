C:/MinGW/bin/gcc.exe -fPIC -c -DBUILDING_EXAMPLE_DLL trans.c

C:/MinGW/bin/gcc.exe -shared -o libtrans.dll trans.o -Wl,--out-implib,libtrans.a

gcc -o Myprog main.c trans.o

start Myprog



