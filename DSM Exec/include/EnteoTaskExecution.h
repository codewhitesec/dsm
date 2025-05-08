

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for EnteoTaskExecution.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __EnteoTaskExecution_h__
#define __EnteoTaskExecution_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __EnteoTaskExecution_INTERFACE_DEFINED__
#define __EnteoTaskExecution_INTERFACE_DEFINED__

/* interface EnteoTaskExecution */
/* [version][uuid] */ 

error_status_t DsmExec( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][out] */ void **arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4,
    /* [string][in] */ wchar_t *arg_5,
    /* [in] */ long arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8);

error_status_t Proc1( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][out][in] */ void **arg_1);

error_status_t Proc2( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long *arg_3);

error_status_t Proc3( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void *arg_1,
    /* [out] */ long *arg_2);

error_status_t Proc4( 
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void *arg_1,
    /* [in] */ long arg_2);



extern RPC_IF_HANDLE EnteoTaskExecution_v1_0_c_ifspec;
extern RPC_IF_HANDLE EnteoTaskExecution_v1_0_s_ifspec;
#endif /* __EnteoTaskExecution_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


