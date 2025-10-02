// kernel/sysinfo.h
#ifndef _SYSINFO_H_
#define _SYSINFO_H_

struct sysinfo {
    uint64 freemem;  // 空闲内存字节数
    uint64 nproc;       // 当前进程数
};

#endif
