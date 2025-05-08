

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "ICDBExt.h"

#define TYPE_FORMAT_STRING_SIZE   107                               
#define PROC_FORMAT_STRING_SIZE   1327                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ICDBExt_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ICDBExt_MIDL_TYPE_FORMAT_STRING;

typedef struct _ICDBExt_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ICDBExt_MIDL_PROC_FORMAT_STRING;

typedef struct _ICDBExt_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ICDBExt_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const ICDBExt_MIDL_TYPE_FORMAT_STRING ICDBExt__MIDL_TypeFormatString;
extern const ICDBExt_MIDL_PROC_FORMAT_STRING ICDBExt__MIDL_ProcFormatString;
extern const ICDBExt_MIDL_EXPR_FORMAT_STRING ICDBExt__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: ICDBExt, ver. 1.0,
   GUID={0x5a622071,0xc10c,0x4160,{0x83,0x27,0x20,0xe9,0x43,0xf4,0x16,0x44}} */



static const RPC_CLIENT_INTERFACE ICDBExt___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x5a622071,0xc10c,0x4160,{0x83,0x27,0x20,0xe9,0x43,0xf4,0x16,0x44}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE ICDBExt_v1_0_c_ifspec = (RPC_IF_HANDLE)& ICDBExt___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC ICDBExt_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE ICDBExt__MIDL_AutoBindHandle;


error_status_t Proc0( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [context_handle][out] */ void **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[0],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc1( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[60],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc2( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[114],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc3( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [context_handle][out] */ void **arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[180],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc4( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [size_is][string][out] */ unsigned char *arg_5,
    /* [in] */ long arg_6,
    /* [out] */ long *arg_7)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[252],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6,
                  arg_7);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc5( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [out] */ long *arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[330],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( error_status_t  )_RetVal.Simple;
    
}


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
    /* [out] */ long *arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[396],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6,
                  arg_7,
                  arg_8,
                  arg_9);
    return ( error_status_t  )_RetVal.Simple;
    
}


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
    /* [out] */ long *arg_9)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[486],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6,
                  arg_7,
                  arg_8,
                  arg_9);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc8( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [string][in] */ unsigned char *arg_5,
    /* [in] */ struct Struct_90_t *arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[576],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc9( 
    /* [in] */ handle_t arg_0)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[648],
                  arg_0);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc10( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5,
    /* [out] */ long *arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[684],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc11( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [context_handle][out] */ void **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[756],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc12( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[816],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc13( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][out][in] */ void **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[870],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc14( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [in] */ long arg_5,
    /* [context_handle][out] */ void **arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[924],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc15( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [string][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [in] */ long arg_6,
    /* [context_handle][out] */ void **arg_7)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[996],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6,
                  arg_7);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc16( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [context_handle][in] */ void *arg_3,
    /* [in] */ long arg_4,
    /* [context_handle][out] */ void **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[1074],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc17( 
    /* [in] */ handle_t arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ unsigned char *arg_3,
    /* [context_handle][out] */ void **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[1140],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t Proc18( 
    /* [in] */ handle_t arg_0,
    /* [string][in] */ unsigned char *arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ unsigned char *arg_3,
    /* [string][ref][out] */ unsigned char **arg_4,
    /* [in] */ long arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[1200],
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( error_status_t  )_RetVal.Simple;
    
}


error_status_t DsmDecrypt( 
    /* [in] */ handle_t rpc_handle,
    /* [string][in] */ unsigned char *crypted,
    /* [string][in] */ unsigned char *unknown,
    /* [string][ref][out] */ unsigned char **decrypted,
    /* [in] */ long unknown2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ICDBExt_StubDesc,
                  (PFORMAT_STRING) &ICDBExt__MIDL_ProcFormatString.Format[1266],
                  rpc_handle,
                  crypted,
                  unknown,
                  decrypted,
                  unknown2);
    return ( error_status_t  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ICDBExt_MIDL_PROC_FORMAT_STRING ICDBExt__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0 */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x34 ),	/* 52 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 42 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 48 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 50 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 56 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 58 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc1 */

/* 60 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 70 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 74 */	NdrFcShort( 0x48 ),	/* 72 */
/* 76 */	NdrFcShort( 0x40 ),	/* 64 */
/* 78 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 80 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 102 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 104 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 106 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 112 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc2 */

/* 114 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x2 ),	/* 2 */
/* 122 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 124 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 128 */	NdrFcShort( 0x20 ),	/* 32 */
/* 130 */	NdrFcShort( 0x40 ),	/* 64 */
/* 132 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 134 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 152 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 164 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 168 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 170 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 172 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 176 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 178 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc3 */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x3 ),	/* 3 */
/* 188 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 194 */	NdrFcShort( 0x3c ),	/* 60 */
/* 196 */	NdrFcShort( 0x40 ),	/* 64 */
/* 198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 200 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 218 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 222 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 224 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 226 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 228 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 230 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 232 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_5 */

/* 234 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 236 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 240 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 242 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 244 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 250 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc4 */

/* 252 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 262 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 266 */	NdrFcShort( 0x44 ),	/* 68 */
/* 268 */	NdrFcShort( 0x24 ),	/* 36 */
/* 270 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 272 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 290 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 294 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 296 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 298 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 302 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 306 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 308 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 310 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter arg_6 */

/* 312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 314 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 320 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 326 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 328 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x5 ),	/* 5 */
/* 338 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 344 */	NdrFcShort( 0x3c ),	/* 60 */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 372 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 376 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 378 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 380 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 386 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 394 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc6 */

/* 396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x6 ),	/* 6 */
/* 404 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 406 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 408 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 410 */	NdrFcShort( 0x3c ),	/* 60 */
/* 412 */	NdrFcShort( 0x40 ),	/* 64 */
/* 414 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 416 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 428 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 438 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 440 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 442 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 444 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 446 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 448 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_5 */

/* 450 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 452 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 454 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_6 */

/* 456 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 458 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 460 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter arg_7 */

/* 462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 464 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_9 */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 484 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 486 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x7 ),	/* 7 */
/* 494 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 496 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 498 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 500 */	NdrFcShort( 0x84 ),	/* 132 */
/* 502 */	NdrFcShort( 0x40 ),	/* 64 */
/* 504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 506 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 516 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 522 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 528 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 530 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 532 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 534 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 536 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 538 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter arg_5 */

/* 540 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 542 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 544 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter arg_6 */

/* 546 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 548 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 550 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter arg_7 */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 558 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 560 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_9 */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 574 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 590 */	NdrFcShort( 0x34 ),	/* 52 */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 596 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 612 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 618 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 622 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 624 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 626 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 628 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_5 */

/* 630 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 632 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 634 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_6 */

/* 636 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 638 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 640 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 646 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x9 ),	/* 9 */
/* 656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 668 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 684 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0xa ),	/* 10 */
/* 692 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 694 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 698 */	NdrFcShort( 0x3c ),	/* 60 */
/* 700 */	NdrFcShort( 0x5c ),	/* 92 */
/* 702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 704 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 722 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 726 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 728 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 730 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 738 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 740 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 742 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter arg_6 */

/* 744 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 746 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 752 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 754 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 756 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0xb ),	/* 11 */
/* 764 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 766 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 770 */	NdrFcShort( 0x34 ),	/* 52 */
/* 772 */	NdrFcShort( 0x40 ),	/* 64 */
/* 774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 776 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 786 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 798 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 800 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 802 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 804 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 806 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 808 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 814 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 816 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0xc ),	/* 12 */
/* 824 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 826 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 830 */	NdrFcShort( 0x48 ),	/* 72 */
/* 832 */	NdrFcShort( 0x40 ),	/* 64 */
/* 834 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 836 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 858 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 860 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 862 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 868 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xd ),	/* 13 */
/* 878 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 880 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 884 */	NdrFcShort( 0x48 ),	/* 72 */
/* 886 */	NdrFcShort( 0x40 ),	/* 64 */
/* 888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 890 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 900 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 912 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 914 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 916 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Return value */

/* 918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 920 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 922 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 924 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0xe ),	/* 14 */
/* 932 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 934 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 936 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 938 */	NdrFcShort( 0x44 ),	/* 68 */
/* 940 */	NdrFcShort( 0x40 ),	/* 64 */
/* 942 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 944 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 954 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 956 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 966 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 968 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 970 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 972 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 974 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 980 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 984 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 986 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 988 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 994 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc15 */

/* 996 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0xf ),	/* 15 */
/* 1004 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 1006 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1010 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1012 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1014 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1016 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1034 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1038 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1040 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1042 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 1044 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1046 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1048 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_5 */

/* 1050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1052 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1058 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 1062 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1064 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1066 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1072 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 1074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1082 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1084 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1088 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1090 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1092 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 1094 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1116 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1118 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1120 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_4 */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1128 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1130 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1132 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1136 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1138 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 1140 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1148 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1150 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1156 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1160 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1182 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1186 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_4 */

/* 1188 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1190 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1192 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1198 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 1200 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1208 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1212 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1218 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1220 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 1230 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_2 */

/* 1236 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1242 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1244 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1246 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter arg_4 */

/* 1248 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1250 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1252 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter arg_5 */

/* 1254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1256 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1264 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure DsmDecrypt */

/* 1266 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1274 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1276 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1278 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1284 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1286 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter crypted */

/* 1296 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter unknown */

/* 1302 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1304 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1306 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter decrypted */

/* 1308 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1310 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1312 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter unknown2 */

/* 1314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1316 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1322 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1324 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const ICDBExt_MIDL_TYPE_FORMAT_STRING ICDBExt__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 14 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 28 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 30 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 32 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x11, 0x0,	/* FC_RP */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 40 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 42 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 44 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 46 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 48 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x11, 0x0,	/* FC_RP */
/* 52 */	NdrFcShort( 0x2 ),	/* Offset= 2 (54) */
/* 54 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 60 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 62 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 64 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 66 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 68 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 70 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 72 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 74 */	
			0x11, 0x0,	/* FC_RP */
/* 76 */	NdrFcShort( 0xe ),	/* Offset= 14 (90) */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0x1 ),	/* 1 */
/* 82 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 84 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 86 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 88 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 90 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 92 */	NdrFcShort( 0x4 ),	/* 4 */
/* 94 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (78) */
/* 96 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 98 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (102) */
/* 102 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 104 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const unsigned short ICDBExt_FormatStringOffsetTable[] =
    {
    0,
    60,
    114,
    180,
    252,
    330,
    396,
    486,
    576,
    648,
    684,
    756,
    816,
    870,
    924,
    996,
    1074,
    1140,
    1200,
    1266
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC ICDBExt_StubDesc = 
    {
    (void *)& ICDBExt___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &ICDBExt__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    ICDBExt__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

