#ifndef COMMON_H
#define COMMON_H

#include <pthread.h> 
#include <semaphore.h>

#ifdef __cplusplus
extern "C"{
#endif

///////////////////////////////////////////////////////////////////
//�ź���
typedef void* CSem;
CSem  csem_create(int initial_count, int maxcount);
int   csem_delete(CSem handle);
int   csem_wait(CSem handle, unsigned int timeout/*����*/);
int   csem_post(CSem handle);
int   csem_getcount(CSem handle, int *count);


///////////////////////////////////////////////////////////////////
//������
typedef void* CMtx;
CMtx cmtx_create();
void cmtx_delete(CMtx handle);
void cmtx_enter(CMtx handle);
void cmtx_leave(CMtx handle);

#ifdef __cplusplus
}
#endif

#endif
