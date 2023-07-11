#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/shahlarious/TUKL/vivado_labs/Convolutions/solution1/.autopilot/db/a.g.bc ${1+"$@"}
