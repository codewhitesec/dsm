

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ICDBExt.idl:
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


#ifndef __ICDBExt_h__
#define __ICDBExt_h__

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


#ifndef __ICDBExt_INTERFACE_DEFINED__
#define __ICDBExt_INTERFACE_DEFINED__

/* interface ICDBExt */
/* [version][uuid] */ 

typedef struct Struct_90_t
    {
    long StructMember0;
    /* [size_is] */ byte StructMember1[ 1 ];
    } 	Struct_90_t;

error_status_t Proc0( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [context_handle][out] */ void **arg_4);

error_status_t Proc1( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3);

error_status_t Proc2( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5);

error_status_t Proc3( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [context_handle][out] */ void **arg_6);

error_status_t Proc4( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [size_is][string][out] */ unsigned char *arg_5,
    /* [in] */ long arg_6,
    /* [out] */ long *arg_7);

error_status_t Proc5( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [out] */ long *arg_5);

error_status_t Proc6( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [string][in] */ unsigned char *arg_5,
    /* [size_is][out] */ byte *arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9);

error_status_t Proc7( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [context_handle][in] */ void *arg_4,
    /* [context_handle][in] */ void *arg_5,
    /* [size_is][out] */ byte *arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9);

error_status_t Proc8( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [string][in] */ unsigned char *arg_5,
    /* [in] */ struct Struct_90_t *arg_6);

error_status_t Proc9( 
    /* [in] */ handle_t arg_0);

error_status_t Proc10( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5,
    /* [out] */ long *arg_6);

error_status_t Proc11( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [context_handle][out] */ void **arg_4);

error_status_t Proc12( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3);

error_status_t Proc13( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3);

error_status_t Proc14( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [context_handle][out] */ void **arg_6);

error_status_t Proc15( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [context_handle][out] */ void **arg_7);

error_status_t Proc16( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5);

error_status_t Proc17( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ unsigned char *arg_3,
    /* [context_handle][out] */ void **arg_4);

error_status_t Proc18( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ unsigned char *arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ unsigned char *arg_3,
    /* [string][ref][out] */ unsigned char **arg_4,
    /* [in] */ long arg_5);

error_status_t DsmDecrypt( 
    /* [in] */ handle_t rpc_handle,
    /* [string][in] */ unsigned char *crypted,
    /* [string][in] */ unsigned char *unknown,
    /* [string][ref][out] */ unsigned char **decrypted,
    /* [in] */ long unknown2);



extern RPC_IF_HANDLE ICDBExt_v1_0_c_ifspec;
extern RPC_IF_HANDLE ICDBExt_v1_0_s_ifspec;
#endif /* __ICDBExt_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


