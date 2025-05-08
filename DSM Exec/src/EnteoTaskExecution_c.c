

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
 /* Compiler settings for EnteoTaskExecution.idl:
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

#include "EnteoTaskExecution.h"

#define TYPE_FORMAT_STRING_SIZE   31                                
#define PROC_FORMAT_STRING_SIZE   277                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _EnteoTaskExecution_MIDL_TYPE_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
} EnteoTaskExecution_MIDL_TYPE_FORMAT_STRING;

typedef struct _EnteoTaskExecution_MIDL_PROC_FORMAT_STRING
{
    short          Pad;
    unsigned char  Format[PROC_FORMAT_STRING_SIZE];
} EnteoTaskExecution_MIDL_PROC_FORMAT_STRING;

typedef struct _EnteoTaskExecution_MIDL_EXPR_FORMAT_STRING
{
    long          Pad;
    unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
} EnteoTaskExecution_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 =
{ {0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0} };

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


extern const EnteoTaskExecution_MIDL_TYPE_FORMAT_STRING EnteoTaskExecution__MIDL_TypeFormatString;
extern const EnteoTaskExecution_MIDL_PROC_FORMAT_STRING EnteoTaskExecution__MIDL_ProcFormatString;
extern const EnteoTaskExecution_MIDL_EXPR_FORMAT_STRING EnteoTaskExecution__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: EnteoTaskExecution, ver. 1.0,
   GUID={0x36368a9b,0x24ac,0x438c,{0x8c,0x49,0xbb,0xab,0x6b,0x27,0x61,0xfb}} */



static const RPC_CLIENT_INTERFACE EnteoTaskExecution___RpcClientInterface =
{
sizeof(RPC_CLIENT_INTERFACE),
{{0x36368a9b,0x24ac,0x438c,{0x8c,0x49,0xbb,0xab,0x6b,0x27,0x61,0xfb}},{1,0}},
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
0,
0,
0,
0,
0,
0x00000000
};
RPC_IF_HANDLE EnteoTaskExecution_v1_0_c_ifspec = (RPC_IF_HANDLE)&EnteoTaskExecution___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

    extern const MIDL_STUB_DESC EnteoTaskExecution_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE EnteoTaskExecution__MIDL_AutoBindHandle;


error_status_t DsmExec(
    /* [in] */ handle_t arg_0,
    /* [context_handle][out] */ void** arg_1,
    /* [in] */ long arg_2,
    /* [string][in] */ wchar_t* arg_3,
    /* [string][in] */ wchar_t* arg_4,
    /* [string][in] */ wchar_t* arg_5,
    /* [in] */ long arg_6,
    /* [in] */ long arg_7,
    /* [out] */ long* arg_8)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&EnteoTaskExecution_StubDesc,
        (PFORMAT_STRING)&EnteoTaskExecution__MIDL_ProcFormatString.Format[0],
        arg_0,
        arg_1,
        arg_2,
        arg_3,
        arg_4,
        arg_5,
        arg_6,
        arg_7,
        arg_8);
    return (error_status_t)_RetVal.Simple;

}


error_status_t Proc1(
    /* [in] */ handle_t arg_0,
    /* [context_handle][out][in] */ void** arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&EnteoTaskExecution_StubDesc,
        (PFORMAT_STRING)&EnteoTaskExecution__MIDL_ProcFormatString.Format[84],
        arg_0,
        arg_1);
    return (error_status_t)_RetVal.Simple;

}


error_status_t Proc2(
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void* arg_1,
    /* [in] */ long arg_2,
    /* [out] */ long* arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&EnteoTaskExecution_StubDesc,
        (PFORMAT_STRING)&EnteoTaskExecution__MIDL_ProcFormatString.Format[126],
        arg_0,
        arg_1,
        arg_2,
        arg_3);
    return (error_status_t)_RetVal.Simple;

}


error_status_t Proc3(
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void* arg_1,
    /* [out] */ long* arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&EnteoTaskExecution_StubDesc,
        (PFORMAT_STRING)&EnteoTaskExecution__MIDL_ProcFormatString.Format[180],
        arg_0,
        arg_1,
        arg_2);
    return (error_status_t)_RetVal.Simple;

}


error_status_t Proc4(
    /* [in] */ handle_t arg_0,
    /* [context_handle][in] */ void* arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
        (PMIDL_STUB_DESC)&EnteoTaskExecution_StubDesc,
        (PFORMAT_STRING)&EnteoTaskExecution__MIDL_ProcFormatString.Format[228],
        arg_0,
        arg_1,
        arg_2);
    return (error_status_t)_RetVal.Simple;

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


static const EnteoTaskExecution_MIDL_PROC_FORMAT_STRING EnteoTaskExecution__MIDL_ProcFormatString =
{
    0,
    {

        /* Procedure DsmExec */

                0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /*  2 */	NdrFcLong(0x0),	/* 0 */
                /*  6 */	NdrFcShort(0x0),	/* 0 */
                /*  8 */	NdrFcShort(0x50),	/* x86 Stack size/offset = 80 */
                /* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 12 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 14 */	NdrFcShort(0x18),	/* 24 */
                            /* 16 */	NdrFcShort(0x5c),	/* 92 */
                            /* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
                                        0x9,		/* 9 */
                                        /* 20 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 22 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 24 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 26 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 28 */	NdrFcShort(0x0),	/* 0 */

                                                    /* Parameter arg_1 */

    /* 30 */	NdrFcShort(0x110),	/* Flags:  out, simple ref, */
    /* 32 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
    /* 34 */	NdrFcShort(0x6),	/* Type Offset=6 */

    /* Parameter arg_2 */

    /* 36 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
    /* 38 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
    /* 40 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Parameter arg_3 */

    /* 42 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
    /* 44 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
    /* 46 */	NdrFcShort(0xc),	/* Type Offset=12 */

    /* Parameter arg_4 */

    /* 48 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
    /* 50 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
    /* 52 */	NdrFcShort(0xc),	/* Type Offset=12 */

    /* Parameter arg_5 */

    /* 54 */	NdrFcShort(0x10b),	/* Flags:  must size, must free, in, simple ref, */
    /* 56 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
    /* 58 */	NdrFcShort(0xc),	/* Type Offset=12 */

    /* Parameter arg_6 */

    /* 60 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
    /* 62 */	NdrFcShort(0x30),	/* x86 Stack size/offset = 48 */
    /* 64 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Parameter arg_7 */

    /* 66 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
    /* 68 */	NdrFcShort(0x38),	/* x86 Stack size/offset = 56 */
    /* 70 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Parameter arg_8 */

    /* 72 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
    /* 74 */	NdrFcShort(0x40),	/* x86 Stack size/offset = 64 */
    /* 76 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Return value */

    /* 78 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
    /* 80 */	NdrFcShort(0x48),	/* x86 Stack size/offset = 72 */
    /* 82 */	0x10,		/* FC_ERROR_STATUS_T */
                0x0,		/* 0 */

                /* Procedure Proc1 */

    /* 84 */	0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /* 86 */	NdrFcLong(0x0),	/* 0 */
                /* 90 */	NdrFcShort(0x1),	/* 1 */
                /* 92 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
                /* 94 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 96 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 98 */	NdrFcShort(0x38),	/* 56 */
                            /* 100 */	NdrFcShort(0x40),	/* 64 */
                            /* 102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
                                        0x2,		/* 2 */
                                        /* 104 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 106 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 108 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 110 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 112 */	NdrFcShort(0x0),	/* 0 */

                                                    /* Parameter arg_1 */

    /* 114 */	NdrFcShort(0x118),	/* Flags:  in, out, simple ref, */
    /* 116 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
    /* 118 */	NdrFcShort(0x16),	/* Type Offset=22 */

    /* Return value */

    /* 120 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
    /* 122 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
    /* 124 */	0x10,		/* FC_ERROR_STATUS_T */
                0x0,		/* 0 */

                /* Procedure Proc2 */

    /* 126 */	0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /* 128 */	NdrFcLong(0x0),	/* 0 */
                /* 132 */	NdrFcShort(0x2),	/* 2 */
                /* 134 */	NdrFcShort(0x28),	/* x86 Stack size/offset = 40 */
                /* 136 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 138 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 140 */	NdrFcShort(0x2c),	/* 44 */
                            /* 142 */	NdrFcShort(0x24),	/* 36 */
                            /* 144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
                                        0x4,		/* 4 */
                                        /* 146 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 148 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 150 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 152 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 154 */	NdrFcShort(0x0),	/* 0 */

                                                    /* Parameter arg_1 */

    /* 156 */	NdrFcShort(0x8),	/* Flags:  in, */
    /* 158 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
    /* 160 */	NdrFcShort(0x1a),	/* Type Offset=26 */

    /* Parameter arg_2 */

    /* 162 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
    /* 164 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
    /* 166 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Parameter arg_3 */

    /* 168 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
    /* 170 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
    /* 172 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Return value */

    /* 174 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
    /* 176 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
    /* 178 */	0x10,		/* FC_ERROR_STATUS_T */
                0x0,		/* 0 */

                /* Procedure Proc3 */

    /* 180 */	0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /* 182 */	NdrFcLong(0x0),	/* 0 */
                /* 186 */	NdrFcShort(0x3),	/* 3 */
                /* 188 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
                /* 190 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 192 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 194 */	NdrFcShort(0x24),	/* 36 */
                            /* 196 */	NdrFcShort(0x24),	/* 36 */
                            /* 198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
                                        0x3,		/* 3 */
                                        /* 200 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 202 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 204 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 206 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 208 */	NdrFcShort(0x0),	/* 0 */

                                                    /* Parameter arg_1 */

    /* 210 */	NdrFcShort(0x8),	/* Flags:  in, */
    /* 212 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
    /* 214 */	NdrFcShort(0x1a),	/* Type Offset=26 */

    /* Parameter arg_2 */

    /* 216 */	NdrFcShort(0x2150),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
    /* 218 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
    /* 220 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Return value */

    /* 222 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
    /* 224 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
    /* 226 */	0x10,		/* FC_ERROR_STATUS_T */
                0x0,		/* 0 */

                /* Procedure Proc4 */

    /* 228 */	0x0,		/* 0 */
                0x48,		/* Old Flags:  */
                /* 230 */	NdrFcLong(0x0),	/* 0 */
                /* 234 */	NdrFcShort(0x4),	/* 4 */
                /* 236 */	NdrFcShort(0x20),	/* x86 Stack size/offset = 32 */
                /* 238 */	0x32,		/* FC_BIND_PRIMITIVE */
                            0x0,		/* 0 */
                            /* 240 */	NdrFcShort(0x0),	/* x86 Stack size/offset = 0 */
                            /* 242 */	NdrFcShort(0x2c),	/* 44 */
                            /* 244 */	NdrFcShort(0x8),	/* 8 */
                            /* 246 */	0x44,		/* Oi2 Flags:  has return, has ext, */
                                        0x3,		/* 3 */
                                        /* 248 */	0xa,		/* 10 */
                                                    0x1,		/* Ext Flags:  new corr desc, */
                                                    /* 250 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 252 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 254 */	NdrFcShort(0x0),	/* 0 */
                                                    /* 256 */	NdrFcShort(0x0),	/* 0 */

                                                    /* Parameter arg_1 */

    /* 258 */	NdrFcShort(0x8),	/* Flags:  in, */
    /* 260 */	NdrFcShort(0x8),	/* x86 Stack size/offset = 8 */
    /* 262 */	NdrFcShort(0x1a),	/* Type Offset=26 */

    /* Parameter arg_2 */

    /* 264 */	NdrFcShort(0x48),	/* Flags:  in, base type, */
    /* 266 */	NdrFcShort(0x10),	/* x86 Stack size/offset = 16 */
    /* 268 */	0x8,		/* FC_LONG */
                0x0,		/* 0 */

                /* Return value */

    /* 270 */	NdrFcShort(0x70),	/* Flags:  out, return, base type, */
    /* 272 */	NdrFcShort(0x18),	/* x86 Stack size/offset = 24 */
    /* 274 */	0x10,		/* FC_ERROR_STATUS_T */
                0x0,		/* 0 */

                0x0
            }
};

static const EnteoTaskExecution_MIDL_TYPE_FORMAT_STRING EnteoTaskExecution__MIDL_TypeFormatString =
{
    0,
    {
        NdrFcShort(0x0),	/* 0 */
        /*  2 */
                    0x11, 0x4,	/* FC_RP [alloced_on_stack] */
                    /*  4 */	NdrFcShort(0x2),	/* Offset= 2 (6) */
                    /*  6 */	0x30,		/* FC_BIND_CONTEXT */
                                0xa0,		/* Ctxt flags:  via ptr, out, */
                                /*  8 */	0x0,		/* 0 */
                                            0x0,		/* 0 */
                                            /* 10 */
                                                        0x11, 0x8,	/* FC_RP [simple_pointer] */
                                                        /* 12 */
                                                                    0x25,		/* FC_C_WSTRING */
                                                                    0x5c,		/* FC_PAD */
                                                                    /* 14 */
                                                                                0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
                                                                                /* 16 */	0x8,		/* FC_LONG */
                                                                                            0x5c,		/* FC_PAD */
                                                                                            /* 18 */
                                                                                                        0x11, 0x4,	/* FC_RP [alloced_on_stack] */
                                                                                                        /* 20 */	NdrFcShort(0x2),	/* Offset= 2 (22) */
                                                                                                        /* 22 */	0x30,		/* FC_BIND_CONTEXT */
                                                                                                                    0xe0,		/* Ctxt flags:  via ptr, in, out, */
                                                                                                                    /* 24 */	0x0,		/* 0 */
                                                                                                                                0x0,		/* 0 */
                                                                                                                                /* 26 */	0x30,		/* FC_BIND_CONTEXT */
                                                                                                                                            0x41,		/* Ctxt flags:  in, can't be null */
                                                                                                                                            /* 28 */	0x0,		/* 0 */
                                                                                                                                                        0x0,		/* 0 */

                                                                                                                                                        0x0
                                                                                                                                                    }
};

static const unsigned short EnteoTaskExecution_FormatStringOffsetTable[] =
{
0,
84,
126,
180,
228
};


#ifdef __cplusplus
namespace {
#endif
    static const MIDL_STUB_DESC EnteoTaskExecution_StubDesc =
    {
    (void*)&EnteoTaskExecution___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &EnteoTaskExecution__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    EnteoTaskExecution__MIDL_TypeFormatString.Format,
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

