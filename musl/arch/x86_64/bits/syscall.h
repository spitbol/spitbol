#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)

#define __SYSCALL_SSLEN 8

static inline long __syscall0(long __n)
{
	unsigned long __ret;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n) : "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall1(long __n, long __a1)
{
	unsigned long __ret;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1) : "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall2(long __n, long __a1, long __a2)
{
	unsigned long __ret;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1), "S"(__a2)
						  : "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall3(long __n, long __a1, long __a2, long __a3)
{
	unsigned long __ret;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1), "S"(__a2),
						  "d"(__a3) : "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall4(long __n, long __a1, long __a2, long __a3, long __a4)
{
	unsigned long __ret;
	register long __r10 __asm__("r10") = __a4;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1), "S"(__a2),
						  "d"(__a3), "r"(__r10): "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall5(long __n, long __a1, long __a2, long __a3, long __a4, long __a5)
{
	unsigned long __ret;
	register long __r10 __asm__("r10") = __a4;
	register long __r8 __asm__("r8") = __a5;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1), "S"(__a2),
						  "d"(__a3), "r"(__r10), "r"(__r8) : "rcx", "r11", "memory");
	return __ret;
}

static inline long __syscall6(long __n, long __a1, long __a2, long __a3, long __a4, long __a5, long __a6)
{
	unsigned long __ret;
	register long __r10 __asm__("r10") = __a4;
	register long __r8 __asm__("r8") = __a5;
	register long __r9 __asm__("r9") = __a6;
	__asm__ __volatile__ ("syscall" : "=a"(__ret) : "a"(__n), "D"(__a1), "S"(__a2),
						  "d"(__a3), "r"(__r10), "r"(__r8), "r"(__r9) : "rcx", "r11", "memory");
	return __ret;
}

#define __socketcall(nm,a,b,c,d,e,f) syscall(__NR_##nm, a, b, c, d, e, f)
#define __socketcall_cp(nm,a,b,c,d,e,f) syscall_cp(__NR_##nm, a, b, c, d, e, f)

#define __NR_read				0
#define __NR_write				1
#define __NR_open				2
#define __NR_close				3
#define __NR_stat				4
#define __NR_fstat				5
#define __NR_lstat				6
#define __NR_poll				7
#define __NR_lseek				8
#define __NR_mmap				9
#define __NR_mprotect			10
#define __NR_munmap				11
#define __NR_brk				12
#define __NR_rt_sigaction		13
#define __NR_rt_sigprocmask		14
#define __NR_rt_sigreturn		15
#define __NR_ioctl				16
#define __NR_pread64			17
#define __NR_pwrite64			18
#define __NR_readv				19
#define __NR_writev				20
#define __NR_access				21
#define __NR_pipe				22
#define __NR_select				23
#define __NR_sched_yield		24
#define __NR_mremap				25
#define __NR_msync				26
#define __NR_mincore			27
#define __NR_madvise			28
#define __NR_shmget				29
#define __NR_shmat				30
#define __NR_shmctl				31
#define __NR_dup				32
#define __NR_dup2				33
#define __NR_pause				34
#define __NR_nanosleep			35
#define __NR_getitimer			36
#define __NR_alarm				37
#define __NR_setitimer			38
#define __NR_getpid				39
#define __NR_sendfile			40
#define __NR_socket				41
#define __NR_connect			42
#define __NR_accept				43
#define __NR_sendto				44
#define __NR_recvfrom			45
#define __NR_sendmsg			46
#define __NR_recvmsg			47
#define __NR_shutdown			48
#define __NR_bind				49
#define __NR_listen				50
#define __NR_getsockname		51
#define __NR_getpeername		52
#define __NR_socketpair			53
#define __NR_setsockopt			54
#define __NR_getsockopt			55
#define __NR_clone				56
#define __NR_fork				57
#define __NR_vfork				58
#define __NR_execve				59
#define __NR_exit				60
#define __NR_wait4				61
#define __NR_kill				62
#define __NR_uname				63
#define __NR_semget				64
#define __NR_semop				65
#define __NR_semctl				66
#define __NR_shmdt				67
#define __NR_msgget				68
#define __NR_msgsnd				69
#define __NR_msgrcv				70
#define __NR_msgctl				71
#define __NR_fcntl				72
#define __NR_flock				73
#define __NR_fsync				74
#define __NR_fdatasync			75
#define __NR_truncate			76
#define __NR_ftruncate			77
#define __NR_getdents			78
#define __NR_getcwd				79
#define __NR_chdir				80
#define __NR_fchdir				81
#define __NR_rename				82
#define __NR_mkdir				83
#define __NR_rmdir				84
#define __NR_creat				85
#define __NR_link				86
#define __NR_unlink				87
#define __NR_symlink			88
#define __NR_readlink			89
#define __NR_chmod				90
#define __NR_fchmod				91
#define __NR_chown				92
#define __NR_fchown				93
#define __NR_lchown				94
#define __NR_umask				95
#define __NR_gettimeofday		96
#define __NR_getrlimit			97
#define __NR_getrusage			98
#define __NR_sysinfo			99
#define __NR_times				100
#define __NR_ptrace				101
#define __NR_getuid				102
#define __NR_syslog				103
#define __NR_getgid				104
#define __NR_setuid				105
#define __NR_setgid				106
#define __NR_geteuid			107
#define __NR_getegid			108
#define __NR_setpgid			109
#define __NR_getppid			110
#define __NR_getpgrp			111
#define __NR_setsid				112
#define __NR_setreuid			113
#define __NR_setregid			114
#define __NR_getgroups			115
#define __NR_setgroups			116
#define __NR_setresuid			117
#define __NR_getresuid			118
#define __NR_setresgid			119
#define __NR_getresgid			120
#define __NR_getpgid			121
#define __NR_setfsuid			122
#define __NR_setfsgid			123
#define __NR_getsid				124
#define __NR_capget				125
#define __NR_capset				126
#define __NR_rt_sigpending		127
#define __NR_rt_sigtimedwait	128
#define __NR_rt_sigqueueinfo	129
#define __NR_rt_sigsuspend		130
#define __NR_sigaltstack		131
#define __NR_utime				132
#define __NR_mknod				133
#define __NR_uselib				134
#define __NR_personality		135
#define __NR_ustat				136
#define __NR_statfs				137
#define __NR_fstatfs			138
#define __NR_sysfs				139
#define __NR_getpriority			140
#define __NR_setpriority			141
#define __NR_sched_setparam			142
#define __NR_sched_getparam			143
#define __NR_sched_setscheduler		144
#define __NR_sched_getscheduler		145
#define __NR_sched_get_priority_max	146
#define __NR_sched_get_priority_min	147
#define __NR_sched_rr_get_interval	148
#define __NR_mlock					149
#define __NR_munlock				150
#define __NR_mlockall				151
#define __NR_munlockall				152
#define __NR_vhangup				153
#define __NR_modify_ldt				154
#define __NR_pivot_root				155
#define __NR__sysctl				156
#define __NR_prctl					157
#define __NR_arch_prctl				158
#define __NR_adjtimex				159
#define __NR_setrlimit				160
#define __NR_chroot					161
#define __NR_sync					162
#define __NR_acct					163
#define __NR_settimeofday			164
#define __NR_mount					165
#define __NR_umount2				166
#define __NR_swapon					167
#define __NR_swapoff				168
#define __NR_reboot					169
#define __NR_sethostname			170
#define __NR_setdomainname			171
#define __NR_iopl					172
#define __NR_ioperm					173
#define __NR_create_module			174
#define __NR_init_module			175
#define __NR_delete_module			176
#define __NR_get_kernel_syms		177
#define __NR_query_module			178
#define __NR_quotactl				179
#define __NR_nfsservctl				180
#define __NR_getpmsg				181
#define __NR_putpmsg				182
#define __NR_afs_syscall			183
#define __NR_tuxcall				184
#define __NR_security				185
#define __NR_gettid					186
#define __NR_readahead				187
#define __NR_setxattr				188
#define __NR_lsetxattr				189
#define __NR_fsetxattr				190
#define __NR_getxattr				191
#define __NR_lgetxattr				192
#define __NR_fgetxattr				193
#define __NR_listxattr				194
#define __NR_llistxattr				195
#define __NR_flistxattr				196
#define __NR_removexattr			197
#define __NR_lremovexattr			198
#define __NR_fremovexattr			199
#define __NR_tkill					200
#define __NR_time					201
#define __NR_futex					202
#define __NR_sched_setaffinity		203
#define __NR_sched_getaffinity		204
#define __NR_set_thread_area		205
#define __NR_io_setup				206
#define __NR_io_destroy				207
#define __NR_io_getevents			208
#define __NR_io_submit				209
#define __NR_io_cancel				210
#define __NR_get_thread_area		211
#define __NR_lookup_dcookie			212
#define __NR_epoll_create			213
#define __NR_epoll_ctl_old			214
#define __NR_epoll_wait_old			215
#define __NR_remap_file_pages		216
#define __NR_getdents64				217
#define __NR_set_tid_address		218
#define __NR_restart_syscall		219
#define __NR_semtimedop				220
#define __NR_fadvise64				221
#define __NR_timer_create			222
#define __NR_timer_settime			223
#define __NR_timer_gettime			224
#define __NR_timer_getoverrun		225
#define __NR_timer_delete			226
#define __NR_clock_settime			227
#define __NR_clock_gettime			228
#define __NR_clock_getres			229
#define __NR_clock_nanosleep		230
#define __NR_exit_group				231
#define __NR_epoll_wait				232
#define __NR_epoll_ctl				233
#define __NR_tgkill					234
#define __NR_utimes					235
#define __NR_vserver				236
#define __NR_mbind					237
#define __NR_set_mempolicy			238
#define __NR_get_mempolicy			239
#define __NR_mq_open				240
#define __NR_mq_unlink				241
#define __NR_mq_timedsend			242
#define __NR_mq_timedreceive		243
#define __NR_mq_notify				244
#define __NR_mq_getsetattr			245
#define __NR_kexec_load				246
#define __NR_waitid					247
#define __NR_add_key				248
#define __NR_request_key			249
#define __NR_keyctl					250
#define __NR_ioprio_set				251
#define __NR_ioprio_get				252
#define __NR_inotify_init			253
#define __NR_inotify_add_watch		254
#define __NR_inotify_rm_watch		255
#define __NR_migrate_pages			256
#define __NR_openat					257
#define __NR_mkdirat				258
#define __NR_mknodat				259
#define __NR_fchownat				260
#define __NR_futimesat				261
#define __NR_newfstatat				262
#define __NR_unlinkat				263
#define __NR_renameat				264
#define __NR_linkat					265
#define __NR_symlinkat				266
#define __NR_readlinkat				267
#define __NR_fchmodat				268
#define __NR_faccessat				269
#define __NR_pselect6				270
#define __NR_ppoll					271
#define __NR_unshare				272
#define __NR_set_robust_list		273
#define __NR_get_robust_list		274
#define __NR_splice					275
#define __NR_tee					276
#define __NR_sync_file_range		277
#define __NR_vmsplice				278
#define __NR_move_pages				279
#define __NR_utimensat				280
#define __NR_epoll_pwait			281
#define __NR_signalfd				282
#define __NR_timerfd_create			283
#define __NR_eventfd				284
#define __NR_fallocate				285
#define __NR_timerfd_settime		286
#define __NR_timerfd_gettime		287
#define __NR_accept4				288
#define __NR_signalfd4				289
#define __NR_eventfd2				290
#define __NR_epoll_create1			291
#define __NR_dup3					292
#define __NR_pipe2					293
#define __NR_inotify_init1			294
#define __NR_preadv					295
#define __NR_pwritev				296
#define __NR_rt_tgsigqueueinfo		297
#define __NR_perf_event_open		298
#define __NR_recvmmsg				299
#define __NR_fanotify_init			300
#define __NR_fanotify_mark			301
#define __NR_prlimit64				302
#define __NR_name_to_handle_at			303
#define __NR_open_by_handle_at			304
#define __NR_clock_adjtime			305
#define __NR_syncfs				306
#define __NR_sendmmsg				307
#define __NR_setns				308
#define __NR_getcpu				309
#define __NR_process_vm_readv			310
#define __NR_process_vm_writev			311

#undef __NR_fstatat
#undef __NR_pread
#undef __NR_pwrite
#undef __NR_getdents
#define __NR_fstatat __NR_newfstatat
#define __NR_pread __NR_pread64
#define __NR_pwrite __NR_pwrite64
#define __NR_getdents __NR_getdents64
#define __NR_fadvise __NR_fadvise64



/* Repeat with SYS_ prefix */

#define SYS_read				0
#define SYS_write				1
#define SYS_open				2
#define SYS_close				3
#define SYS_stat				4
#define SYS_fstat				5
#define SYS_lstat				6
#define SYS_poll				7
#define SYS_lseek				8
#define SYS_mmap				9
#define SYS_mprotect			10
#define SYS_munmap				11
#define SYS_brk				12
#define SYS_rt_sigaction		13
#define SYS_rt_sigprocmask		14
#define SYS_rt_sigreturn		15
#define SYS_ioctl				16
#define SYS_pread64			17
#define SYS_pwrite64			18
#define SYS_readv				19
#define SYS_writev				20
#define SYS_access				21
#define SYS_pipe				22
#define SYS_select				23
#define SYS_sched_yield		24
#define SYS_mremap				25
#define SYS_msync				26
#define SYS_mincore			27
#define SYS_madvise			28
#define SYS_shmget				29
#define SYS_shmat				30
#define SYS_shmctl				31
#define SYS_dup				32
#define SYS_dup2				33
#define SYS_pause				34
#define SYS_nanosleep			35
#define SYS_getitimer			36
#define SYS_alarm				37
#define SYS_setitimer			38
#define SYS_getpid				39
#define SYS_sendfile			40
#define SYS_socket				41
#define SYS_connect			42
#define SYS_accept				43
#define SYS_sendto				44
#define SYS_recvfrom			45
#define SYS_sendmsg			46
#define SYS_recvmsg			47
#define SYS_shutdown			48
#define SYS_bind				49
#define SYS_listen				50
#define SYS_getsockname		51
#define SYS_getpeername		52
#define SYS_socketpair			53
#define SYS_setsockopt			54
#define SYS_getsockopt			55
#define SYS_clone				56
#define SYS_fork				57
#define SYS_vfork				58
#define SYS_execve				59
#define SYS_exit				60
#define SYS_wait4				61
#define SYS_kill				62
#define SYS_uname				63
#define SYS_semget				64
#define SYS_semop				65
#define SYS_semctl				66
#define SYS_shmdt				67
#define SYS_msgget				68
#define SYS_msgsnd				69
#define SYS_msgrcv				70
#define SYS_msgctl				71
#define SYS_fcntl				72
#define SYS_flock				73
#define SYS_fsync				74
#define SYS_fdatasync			75
#define SYS_truncate			76
#define SYS_ftruncate			77
#define SYS_getdents			78
#define SYS_getcwd				79
#define SYS_chdir				80
#define SYS_fchdir				81
#define SYS_rename				82
#define SYS_mkdir				83
#define SYS_rmdir				84
#define SYS_creat				85
#define SYS_link				86
#define SYS_unlink				87
#define SYS_symlink			88
#define SYS_readlink			89
#define SYS_chmod				90
#define SYS_fchmod				91
#define SYS_chown				92
#define SYS_fchown				93
#define SYS_lchown				94
#define SYS_umask				95
#define SYS_gettimeofday		96
#define SYS_getrlimit			97
#define SYS_getrusage			98
#define SYS_sysinfo			99
#define SYS_times				100
#define SYS_ptrace				101
#define SYS_getuid				102
#define SYS_syslog				103
#define SYS_getgid				104
#define SYS_setuid				105
#define SYS_setgid				106
#define SYS_geteuid			107
#define SYS_getegid			108
#define SYS_setpgid			109
#define SYS_getppid			110
#define SYS_getpgrp			111
#define SYS_setsid				112
#define SYS_setreuid			113
#define SYS_setregid			114
#define SYS_getgroups			115
#define SYS_setgroups			116
#define SYS_setresuid			117
#define SYS_getresuid			118
#define SYS_setresgid			119
#define SYS_getresgid			120
#define SYS_getpgid			121
#define SYS_setfsuid			122
#define SYS_setfsgid			123
#define SYS_getsid				124
#define SYS_capget				125
#define SYS_capset				126
#define SYS_rt_sigpending		127
#define SYS_rt_sigtimedwait	128
#define SYS_rt_sigqueueinfo	129
#define SYS_rt_sigsuspend		130
#define SYS_sigaltstack		131
#define SYS_utime				132
#define SYS_mknod				133
#define SYS_uselib				134
#define SYS_personality		135
#define SYS_ustat				136
#define SYS_statfs				137
#define SYS_fstatfs			138
#define SYS_sysfs				139
#define SYS_getpriority			140
#define SYS_setpriority			141
#define SYS_sched_setparam			142
#define SYS_sched_getparam			143
#define SYS_sched_setscheduler		144
#define SYS_sched_getscheduler		145
#define SYS_sched_get_priority_max	146
#define SYS_sched_get_priority_min	147
#define SYS_sched_rr_get_interval	148
#define SYS_mlock					149
#define SYS_munlock				150
#define SYS_mlockall				151
#define SYS_munlockall				152
#define SYS_vhangup				153
#define SYS_modify_ldt				154
#define SYS_pivot_root				155
#define SYS__sysctl				156
#define SYS_prctl					157
#define SYS_arch_prctl				158
#define SYS_adjtimex				159
#define SYS_setrlimit				160
#define SYS_chroot					161
#define SYS_sync					162
#define SYS_acct					163
#define SYS_settimeofday			164
#define SYS_mount					165
#define SYS_umount2				166
#define SYS_swapon					167
#define SYS_swapoff				168
#define SYS_reboot					169
#define SYS_sethostname			170
#define SYS_setdomainname			171
#define SYS_iopl					172
#define SYS_ioperm					173
#define SYS_create_module			174
#define SYS_init_module			175
#define SYS_delete_module			176
#define SYS_get_kernel_syms		177
#define SYS_query_module			178
#define SYS_quotactl				179
#define SYS_nfsservctl				180
#define SYS_getpmsg				181
#define SYS_putpmsg				182
#define SYS_afs_syscall			183
#define SYS_tuxcall				184
#define SYS_security				185
#define SYS_gettid					186
#define SYS_readahead				187
#define SYS_setxattr				188
#define SYS_lsetxattr				189
#define SYS_fsetxattr				190
#define SYS_getxattr				191
#define SYS_lgetxattr				192
#define SYS_fgetxattr				193
#define SYS_listxattr				194
#define SYS_llistxattr				195
#define SYS_flistxattr				196
#define SYS_removexattr			197
#define SYS_lremovexattr			198
#define SYS_fremovexattr			199
#define SYS_tkill					200
#define SYS_time					201
#define SYS_futex					202
#define SYS_sched_setaffinity		203
#define SYS_sched_getaffinity		204
#define SYS_set_thread_area		205
#define SYS_io_setup				206
#define SYS_io_destroy				207
#define SYS_io_getevents			208
#define SYS_io_submit				209
#define SYS_io_cancel				210
#define SYS_get_thread_area		211
#define SYS_lookup_dcookie			212
#define SYS_epoll_create			213
#define SYS_epoll_ctl_old			214
#define SYS_epoll_wait_old			215
#define SYS_remap_file_pages		216
#define SYS_getdents64				217
#define SYS_set_tid_address		218
#define SYS_restart_syscall		219
#define SYS_semtimedop				220
#define SYS_fadvise64				221
#define SYS_timer_create			222
#define SYS_timer_settime			223
#define SYS_timer_gettime			224
#define SYS_timer_getoverrun		225
#define SYS_timer_delete			226
#define SYS_clock_settime			227
#define SYS_clock_gettime			228
#define SYS_clock_getres			229
#define SYS_clock_nanosleep		230
#define SYS_exit_group				231
#define SYS_epoll_wait				232
#define SYS_epoll_ctl				233
#define SYS_tgkill					234
#define SYS_utimes					235
#define SYS_vserver				236
#define SYS_mbind					237
#define SYS_set_mempolicy			238
#define SYS_get_mempolicy			239
#define SYS_mq_open				240
#define SYS_mq_unlink				241
#define SYS_mq_timedsend			242
#define SYS_mq_timedreceive		243
#define SYS_mq_notify				244
#define SYS_mq_getsetattr			245
#define SYS_kexec_load				246
#define SYS_waitid					247
#define SYS_add_key				248
#define SYS_request_key			249
#define SYS_keyctl					250
#define SYS_ioprio_set				251
#define SYS_ioprio_get				252
#define SYS_inotify_init			253
#define SYS_inotify_add_watch		254
#define SYS_inotify_rm_watch		255
#define SYS_migrate_pages			256
#define SYS_openat					257
#define SYS_mkdirat				258
#define SYS_mknodat				259
#define SYS_fchownat				260
#define SYS_futimesat				261
#define SYS_newfstatat				262
#define SYS_unlinkat				263
#define SYS_renameat				264
#define SYS_linkat					265
#define SYS_symlinkat				266
#define SYS_readlinkat				267
#define SYS_fchmodat				268
#define SYS_faccessat				269
#define SYS_pselect6				270
#define SYS_ppoll					271
#define SYS_unshare				272
#define SYS_set_robust_list		273
#define SYS_get_robust_list		274
#define SYS_splice					275
#define SYS_tee					276
#define SYS_sync_file_range		277
#define SYS_vmsplice				278
#define SYS_move_pages				279
#define SYS_utimensat				280
#define SYS_epoll_pwait			281
#define SYS_signalfd				282
#define SYS_timerfd_create			283
#define SYS_eventfd				284
#define SYS_fallocate				285
#define SYS_timerfd_settime		286
#define SYS_timerfd_gettime		287
#define SYS_accept4				288
#define SYS_signalfd4				289
#define SYS_eventfd2				290
#define SYS_epoll_create1			291
#define SYS_dup3					292
#define SYS_pipe2					293
#define SYS_inotify_init1			294
#define SYS_preadv					295
#define SYS_pwritev				296
#define SYS_rt_tgsigqueueinfo		297
#define SYS_perf_event_open		298
#define SYS_recvmmsg				299
#define SYS_fanotify_init			300
#define SYS_fanotify_mark			301
#define SYS_prlimit64				302
#define SYS_name_to_handle_at			303
#define SYS_open_by_handle_at			304
#define SYS_clock_adjtime			305
#define SYS_syncfs				306
#define SYS_sendmmsg				307
#define SYS_setns				308
#define SYS_getcpu				309
#define SYS_process_vm_readv			310
#define SYS_process_vm_writev			311

#undef SYS_fstatat
#undef SYS_pread
#undef SYS_pwrite
#undef SYS_getdents
#define SYS_fstatat SYS_newfstatat
#define SYS_pread SYS_pread64
#define SYS_pwrite SYS_pwrite64
#define SYS_getdents SYS_getdents64
#define SYS_fadvise SYS_fadvise64

