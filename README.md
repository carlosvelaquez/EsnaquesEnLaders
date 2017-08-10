
r in `./comp.out': corrupted size vs. prev_size: 0x0000000000e89a00 ***
======= Backtrace: =========
/lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f3bab7c97e5]
/lib/x86_64-linux-gnu/libc.so.6(+0x80dfb)[0x7f3bab7d2dfb]
/lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f3bab7d653c]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt13basic_filebufIcSt11char_traitsIcEE26_M_destroy_internal_bufferEv+0x1e)[0x7f3babe1e49e]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv+0x57)[0x7f3babe21af7]
/usr/lib/x86_64-linux-gnu/libstdc++.so.6(_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv+0xd)[0x7f3babe225cd]
./comp.out[0x401d8c]
./comp.out[0x401a79]
./comp.out[0x40170d]
/lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f3bab772830]
./comp.out[0x401429]
======= Memory map: ========
00400000-00404000 r-xp 00000000 08:02 1296653
/home/imado/Documents/Progra3/Semana4/comp.out
00603000-00604000 r--p 00003000 08:02 1296653
/home/imado/Documents/Progra3/Semana4/comp.out
00604000-00605000 rw-p 00004000 08:02 1296653
/home/imado/Documents/Progra3/Semana4/comp.out
00e75000-00ea7000 rw-p 00000000 00:00 0                                  [heap]
7f3ba4000000-7f3ba4021000 rw-p 00000000 00:00 0 
7f3ba4021000-7f3ba8000000 ---p 00000000 00:00 0 
7f3bab449000-7f3bab551000 r-xp 00000000 08:02 396221
/lib/x86_64-linux-gnu/libm-2.23.so
7f3bab551000-7f3bab750000 ---p 00108000 08:02 396221
/lib/x86_64-linux-gnu/libm-2.23.so
7f3bab750000-7f3bab751000 r--p 00107000 08:02 396221
/lib/x86_64-linux-gnu/libm-2.23.so
7f3bab751000-7f3bab752000 rw-p 00108000 08:02 396221
/lib/x86_64-linux-gnu/libm-2.23.so
7f3bab752000-7f3bab912000 r-xp 00000000 08:02 396234
/lib/x86_64-linux-gnu/libc-2.23.so
7f3bab912000-7f3babb12000 ---p 001c0000 08:02 396234
/lib/x86_64-linux-gnu/libc-2.23.so
7f3babb12000-7f3babb16000 r--p 001c0000 08:02 396234
/lib/x86_64-linux-gnu/libc-2.23.so
7f3babb16000-7f3babb18000 rw-p 001c4000 08:02 396234
/lib/x86_64-linux-gnu/libc-2.23.so
7f3babb18000-7f3babb1c000 rw-p 00000000 00:00 0 
7f3babb1c000-7f3babb32000 r-xp 00000000 08:02 395766
/lib/x86_64-linux-gnu/libgcc_s.so.1
7f3babb32000-7f3babd31000 ---p 00016000 08:02 395766
/lib/x86_64-linux-gnu/libgcc_s.so.1
7f3babd31000-7f3babd32000 rw-p 00015000 08:02 395766
/lib/x86_64-linux-gnu/libgcc_s.so.1
7f3babd32000-7f3babea4000 r-xp 00000000 08:02 140115
/usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f3babea4000-7f3bac0a4000 ---p 00172000 08:02 140115
/usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f3bac0a4000-7f3bac0ae000 r--p 00172000 08:02 140115
/usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f3bac0ae000-7f3bac0b0000 rw-p 0017c000 08:02 140115
/usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.21
7f3bac0b0000-7f3bac0b4000 rw-p 00000000 00:00 0 
7f3bac0b4000-7f3bac0da000 r-xp 00000000 08:02 396072
/lib/x86_64-linux-gnu/ld-2.23.so
7f3bac2b5000-7f3bac2ba000 rw-p 00000000 00:00 0 
7f3bac2d6000-7f3bac2d9000 rw-p 00000000 00:00 0 
7f3bac2d9000-7f3bac2da000 r--p 00025000 08:02 396072
/lib/x86_64-linux-gnu/ld-2.23.so
7f3bac2da000-7f3bac2db000 rw-p 00026000 08:02 396072
/lib/x86_64-linux-gnu/ld-2.23.so
7f3bac2db000-7f3bac2dc000 rw-p 00000000 00:00 0 
7ffdaa004000-7ffdaa025000 rw-p 00000000 00:00 0                          [stack]
7ffdaa164000-7ffdaa166000 r--p 00000000 00:00 0                          [vvar]
7ffdaa166000-7ffdaa168000 r-xp 00000000 00:00 0                          [vdso]
ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0
[vsyscall]
Aborted (core dumped)
	
