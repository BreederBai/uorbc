#ifndef __MOD_UORBC_PLATFROM_H__
#define __MOD_UORBC_PLATFROM_H__

#include "interface.h"
#include "lib_log.h"


/* 平台相关实现 */
//-------------------------------------------------------------------
#define	uorbc_platform_malloc				malloc
#define uorbc_platform_sem_init				sem_init
#define	uorbc_platform_perror				perror
#define	uorbc_platform_sem_wait				sem_wait
#define	uorbc_platform_sem_t				sem_t
#define	uorbc_platfrom_get_thread_id		pthread_self
#define	uorbc_platform_sem_post				sem_post
#define	uorbc_platform_memcpy				memcpy
#define	uorbc_platform_free					free
#define uorbc_platform_assert(exp)			do{							\
					if(!(exp)) {										\
						printf("\n%s:%d:%s: Assertion '%s' failed.\n",	\
							   __FILE__, __LINE__, __func__, #exp);		\
						abort();										\
					}													\
				}while(0)
#define	uorbc_platform_pthread_t			pthread_t
#define uorbc_platform_delay_ms				tti_sdk_timer_sleep_ms
#define	uorbc_platform_log					TTI_INFO_NEW
#define	uorbc_platform_log_bin				TTI_BIN
#define	uorbc_platform_log_err				TTI_ERROR_NEW
//-------------------------------------------------------------------
int mod_uorbc_platform_thread_create ( void* id, void* ( *start_rtn ) ( void* ), void* arg );


#endif

