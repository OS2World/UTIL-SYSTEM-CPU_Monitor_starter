/*
 * cpumon_start.c rev 1, 2000/04/19
 * by Marco G. Salvagno <mgs@whiz.cjb.net>
 *
 * If you're running Warp 4.0 (fixpak #13 or better), you may have noticed that
 * many CPU load monitors always report 0% unless you start WarpCenter.
 *
 * This code actually enables CPU load profiling for all applications using
 * the DosPerfSysCall API.
 *
 * WARNING: This code has only been tested under Warp 4.0 fixpak #13. I've been
 * it works under Warp Server for e-Business. Use with older operating system
 * revisions is deprecated (and useless).
 *
 * The code is pretty self explanatory, we just print some stuff on the
 * terminal to keep the user informed, and call the DosPerfSysCall API.
 */

#include <stdio.h>

#define USE_OS2_TOOKIT_HEADERS
#define INCL_BASE
#include <os2.h>

#define CMD_KI_ENABLE		0x60

/*
 * DosPerfSysCall function prototype
 */
APIRET APIENTRY DosPerfSysCall(ULONG ulCommand, ULONG ulParm1, ULONG ulParm2, ULONG ulParm3);




int main(int argc, char * argv[])
{
  APIRET rc;

  puts("CPU load monitor starter");
  puts("for IBM OS/2 revision 14.039 and upper");
  puts("");

  rc = DosPerfSysCall(CMD_KI_ENABLE, 0, 0, 0);

  if (!rc)
  {
    puts("OK, cpu load monitors should now work");
  }
  else
  {
    printf("error, DosPerfSysCall rc=%ld\n", rc);
  }
  exit(rc);
}
