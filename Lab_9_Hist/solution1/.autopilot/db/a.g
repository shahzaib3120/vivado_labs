#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/shahlarious/TUKL/vivado_labs/Lab_9_Hist/solution1/.autopilot/db/a.g.bc ${1+"$@"}
