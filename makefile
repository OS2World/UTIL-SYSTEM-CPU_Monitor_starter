# quick'n'dirty makefile for cpumon_start

CC = gcc
CFLAGS = -Wall -m486 -O3 -s -fomit-frame-pointer -ffast-math -malign-double
LDFLAGS = -s -Zomf -Zsys -Zlinker /F -Zlinker /A:2
LIBS = -ldpsc

all:
	emximp -o dpsc.lib dpsc.imp
	$(CC) $(CFLAGS) $(LDFLAGS) -o ../bin/cpumon_start.exe cpumon_start.c $(LIBS)

pack:
	lxlite /ML1 ..\bin\cpumon_start.exe
