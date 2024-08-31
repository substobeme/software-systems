/*========================================================================================
  ========================================================================================
   Name: 2.c
   Author: Subha Chakraborty
   Description:Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
   identify all the process related information in the corresponding proc directory.
   Date: 24th August,2024
  =======================================================================================
  =======================================================================================*/ 

#include<stdio.h>
int main(){
for(;;){}
}

/* Output:

$ more proc/4983/status
Name:	a.out
Umask:	0002
State:	R (running)
Tgid:	4983
Ngid:	0
Pid:	4983
PPid:	4771
TracerPid:	0
Uid:	1000	1000	1000	1000
Gid:	1000	1000	1000	1000
FDSize:	256
Groups:	4 24 27 30 46 100 118 1000 
NStgid:	4983
NSpid:	4983
NSpgid:	4983
NSsid:	4771
VmPeak:	    2552 kB
VmSize:	    2484 kB
VmLck:	       0 kB
VmPin:	       0 kB
VmHWM:	     896 kB
VmRSS:	     896 kB
RssAnon:	       0 kB
RssFile:	     896 kB
RssShmem:	       0 kB
VmData:	      92 kB
VmStk:	     132 kB
VmExe:	       4 kB
VmLib:	    1672 kB
VmPTE:	      40 kB
VmSwap:	       0 kB
HugetlbPages:	       0 kB
CoreDumping:	0
THP_enabled:	1
Threads:	1
SigQ:	0/29922
SigPnd:	0000000000000000
ShdPnd:	0000000000000000
SigBlk:	0000000000000000
SigIgn:	0000000000000000
SigCgt:	0000000000000000
CapInh:	0000000000000000
CapPrm:	0000000000000000
CapEff:	0000000000000000
CapBnd:	000001ffffffffff
CapAmb:	0000000000000000

 */
