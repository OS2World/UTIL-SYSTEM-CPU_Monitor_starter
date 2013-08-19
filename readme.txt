CPU Monitor starter
-------------------
by Marco G. Salvagno, 2000/04/19

If you're using OS/2 Warp 4 with fixpak #13, you may have noticed that many CPU
load monitors aren't working properly.

To fix this problem, just run this program from your startup.cmd.

WARNING: this program has only been tested on Warp 4 fixpak #13. I've been told
it works under Warp Server for e-Business. Use with older operating system
revisions is deprecated (and useless).


Source code
-----------

Very simple code, see cpumon_start.c for comments. To build the binary, you
need:

emx v0.9d
GNU make
link386

and nothing else. From a command shell, change to the directory when you
unpacked the archive and run make.


Licensing
---------

If you happen to reuse this code, please put me in the credits. The
cpumon_start.zip archive may be distributed freely as long as it's kept
unchanged.
