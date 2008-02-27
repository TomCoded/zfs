#ifndef _LINUX_TYPES_H
#define	_LINUX_TYPES_H

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum { B_FALSE=0, B_TRUE=1 }	boolean_t;
typedef unsigned long			uintptr_t;
typedef unsigned long			intptr_t;
typedef unsigned long			ulong_t;
typedef unsigned int			uint_t;
typedef unsigned char			uchar_t;
typedef unsigned long long		u_longlong_t;
typedef unsigned long long		u_offset_t;
typedef unsigned long long		rlim64_t;
typedef long long			longlong_t;
typedef long long			offset_t;
typedef struct task_struct		kthread_t;
typedef struct vmem { }			vmem_t;
typedef short				pri_t;

#ifdef	__cplusplus
}
#endif

#endif	/* _LINUX_TYPES_H */
