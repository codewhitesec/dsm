

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for CsManExt.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
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


#ifndef __CsManExt_h__
#define __CsManExt_h__

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


#ifndef __CsManExt_INTERFACE_DEFINED__
#define __CsManExt_INTERFACE_DEFINED__

/* interface CsManExt */
/* [version][uuid] */ 

error_status_t Proc0( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [string][in] */ wchar_t *arg_6,
    /* [string][in] */ wchar_t *arg_7);

error_status_t Proc1( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2);

error_status_t Proc2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1);

error_status_t DsmUpdate( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [out] */ hyper *arg_3);



extern RPC_IF_HANDLE CsManExt_v1_0_c_ifspec;
extern RPC_IF_HANDLE CsManExt_v1_0_s_ifspec;
#endif /* __CsManExt_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


