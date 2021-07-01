Elapsed time for calculating the matrix multiplication in my computer:

Architecture:                    x86_64
CPU op-mode(s):                  32-bit, 64-bit
Byte Order:                      Little Endian
Address sizes:                   39 bits physical, 48 bits virtual
CPU(s):                          12
On-line CPU(s) list:             0-11
Thread(s) per core:              2
Core(s) per socket:              6
Socket(s):                       1
NUMA node(s):                    1
Vendor ID:                       GenuineIntel
CPU family:                      6
Model:                           166
Model name:                      Intel(R) Core(TM) i7-10710U CPU @ 1.10GHz
Stepping:                        0
CPU MHz:                         1900.000
CPU max MHz:                     4700,0000
CPU min MHz:                     400,0000
BogoMIPS:                        3199.92
Virtualization:                  VT-x
L1d cache:                       192 KiB
L1i cache:                       192 KiB
L2 cache:                        1,5 MiB
L3 cache:                        12 MiB
NUMA node0 CPU(s):               0-11


matrix1.c = 1799.594360 sec 
matrix2.c = 225.989929 sec 
matrix3.c = 47.397507 sec (compiled with -O2 -march=native)

