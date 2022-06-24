

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for magicNetdfs.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "magicNetdfs_h.h"

#define TYPE_FORMAT_STRING_SIZE   1557                              
#define PROC_FORMAT_STRING_SIZE   1579                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _magicNetdfs_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } magicNetdfs_MIDL_TYPE_FORMAT_STRING;

typedef struct _magicNetdfs_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } magicNetdfs_MIDL_PROC_FORMAT_STRING;

typedef struct _magicNetdfs_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } magicNetdfs_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const magicNetdfs_MIDL_TYPE_FORMAT_STRING magicNetdfs__MIDL_TypeFormatString;
extern const magicNetdfs_MIDL_PROC_FORMAT_STRING magicNetdfs__MIDL_ProcFormatString;
extern const magicNetdfs_MIDL_EXPR_FORMAT_STRING magicNetdfs__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 3.0,
   GUID={0x4fc742e0,0x4a10,0x11cf,{0x82,0x73,0x00,0xaa,0x00,0x4a,0xe6,0x73}} */

 extern const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo;


static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x4fc742e0,0x4a10,0x11cf,{0x82,0x73,0x00,0xaa,0x00,0x4a,0xe6,0x73}},{3,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &DefaultIfName_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE DefaultIfName_v3_0_c_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcClientInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;


long Proc0( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  0,
                  0,
                  IDL_handle);
    return ( long  )_RetVal.Simple;
    
}


long Proc1( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  1,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc2( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  2,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc3( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [switch_is][in] */ union union_24 *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  3,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc4( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [switch_is][out] */ union union_24 *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  4,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc5( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_0,
    /* [in] */ long arg_1,
    /* [unique][out][in] */ struct Struct_1320_t *arg_2,
    /* [unique][out][in] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  5,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc6( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  6,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc7( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  7,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc8( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ struct Struct_272_t *arg_2,
    /* [unique][out][in] */ struct Struct_1392_t **arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  8,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc9( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ struct Struct_1446_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  9,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc10( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4,
    /* [string][in] */ wchar_t *arg_5,
    /* [in] */ unsigned char arg_6,
    /* [in] */ long arg_7,
    /* [unique][out][in] */ struct Struct_1502_t **arg_8)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  10,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6,
                  arg_7,
                  arg_8);
    return ( long  )_RetVal.Simple;
    
}


long Proc11( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [unique][out][in] */ struct Struct_1502_t **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  11,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( long  )_RetVal.Simple;
    
}


long Proc12( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  12,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc13( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  13,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc14( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  14,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc15( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][in] */ wchar_t *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  15,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc16( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][ref][out][in] */ wchar_t **arg_1,
    /* [out][in] */ unsigned char *arg_2,
    /* [out][in] */ long *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  16,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc17( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  17,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3);
    return ( long  )_RetVal.Simple;
    
}


long Proc18( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  18,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc19( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][unique][in] */ wchar_t *arg_4,
    /* [in] */ long arg_5,
    /* [unique][out][in] */ struct Struct_1502_t **arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  19,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( long  )_RetVal.Simple;
    
}


long Proc20( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [unique][out][in] */ struct Struct_1502_t **arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  20,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc21( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [in] */ long arg_1,
    /* [in] */ long arg_2,
    /* [unique][out][in] */ struct Struct_1320_t *arg_3,
    /* [unique][out][in] */ long *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  21,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4);
    return ( long  )_RetVal.Simple;
    
}


long Proc22( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_0,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ long arg_4,
    /* [switch_is][in] */ union union_24 *arg_5,
    /* [unique][out][in] */ struct Struct_1502_t **arg_6)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  22,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5,
                  arg_6);
    return ( long  )_RetVal.Simple;
    
}


long Proc23( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [in] */ unsigned char arg_4,
    /* [in] */ long arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  23,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2,
                  arg_3,
                  arg_4,
                  arg_5);
    return ( long  )_RetVal.Simple;
    
}


long Proc24( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  24,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


long Proc25( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ short arg_0,
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [out] */ struct Struct_1544_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&DefaultIfName_ProxyInfo,
                  25,
                  0,
                  IDL_handle,
                  arg_0,
                  arg_1,
                  arg_2);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const magicNetdfs_MIDL_PROC_FORMAT_STRING magicNetdfs__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0 */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1 */

/* 36 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 46 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	NdrFcShort( 0x8 ),	/* 8 */
/* 54 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 56 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 66 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 68 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 72 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 74 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 76 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 78 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 80 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 82 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_3 */

/* 84 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 86 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 88 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2 */

/* 102 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x2 ),	/* 2 */
/* 110 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 112 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 122 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 132 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 134 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 136 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 138 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 140 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 142 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 144 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 148 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 152 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3 */

/* 156 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x3 ),	/* 3 */
/* 164 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 166 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 176 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 196 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_3 */

/* 204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 206 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 212 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 214 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4 */

/* 222 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 230 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 232 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 242 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 252 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_3 */

/* 270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 272 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 276 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 278 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 280 */	NdrFcShort( 0x30c ),	/* Type Offset=780 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5 */

/* 288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x5 ),	/* 5 */
/* 296 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 298 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 300 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 302 */	NdrFcShort( 0x2c ),	/* 44 */
/* 304 */	NdrFcShort( 0x24 ),	/* 36 */
/* 306 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 308 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_1 */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 330 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 334 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Parameter arg_3 */

/* 336 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 340 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 344 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6 */

/* 348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x6 ),	/* 6 */
/* 356 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 358 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 368 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 378 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 384 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 398 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7 */

/* 402 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x7 ),	/* 7 */
/* 410 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 412 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 422 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 432 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 434 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 436 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 438 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 440 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 442 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8 */

/* 450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 460 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 464 */	NdrFcShort( 0x44 ),	/* 68 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 470 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 480 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 484 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 486 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 492 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 496 */	NdrFcShort( 0x110 ),	/* Type Offset=272 */

	/* Parameter arg_3 */

/* 498 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 502 */	NdrFcShort( 0x540 ),	/* Type Offset=1344 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 506 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9 */

/* 510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x9 ),	/* 9 */
/* 518 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 520 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 530 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 540 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 544 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 548 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 550 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10 */

/* 558 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0xa ),	/* 10 */
/* 566 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 568 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 572 */	NdrFcShort( 0xd ),	/* 13 */
/* 574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 576 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 578 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 580 */	NdrFcShort( 0x1 ),	/* 1 */
/* 582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 588 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 600 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 604 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_3 */

/* 606 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 610 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_4 */

/* 612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 614 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 616 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_5 */

/* 618 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 620 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 622 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_6 */

/* 624 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 626 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 628 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter arg_7 */

/* 630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 632 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_8 */

/* 636 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 638 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 640 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11 */

/* 648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0xb ),	/* 11 */
/* 656 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 668 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 670 */	NdrFcShort( 0x1 ),	/* 1 */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 682 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 684 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 686 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 688 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 694 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_3 */

/* 696 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 698 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 700 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_4 */

/* 702 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 704 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 708 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 712 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12 */

/* 720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xc ),	/* 12 */
/* 728 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 730 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 740 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 750 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 754 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 756 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 760 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 762 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 766 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_3 */

/* 768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 770 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13 */

/* 780 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0xd ),	/* 13 */
/* 788 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 790 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 800 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 816 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14 */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xe ),	/* 14 */
/* 842 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 864 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 868 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15 */

/* 882 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0xf ),	/* 15 */
/* 890 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 892 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 902 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 912 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 914 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 916 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 922 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 924 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 926 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 928 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_3 */

/* 930 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 932 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 934 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16 */

/* 942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 952 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 956 */	NdrFcShort( 0x35 ),	/* 53 */
/* 958 */	NdrFcShort( 0x3d ),	/* 61 */
/* 960 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 962 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 976 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 978 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 982 */	NdrFcShort( 0x5ea ),	/* Type Offset=1514 */

	/* Parameter arg_2 */

/* 984 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 986 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 988 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 990 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 992 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 998 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17 */

/* 1002 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1010 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1012 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1020 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1022 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1032 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1034 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1036 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1038 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1040 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1042 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 1044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1046 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1052 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc18 */

/* 1062 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1070 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1072 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1080 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1082 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1092 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1094 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1096 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1098 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1100 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1102 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1106 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc19 */

/* 1110 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1116 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1118 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1128 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1130 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1140 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1142 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1144 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1146 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1148 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1150 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 1152 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1156 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_3 */

/* 1158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1160 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1162 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1164 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1166 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1168 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_5 */

/* 1170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1172 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_6 */

/* 1176 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1178 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1180 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc20 */

/* 1188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1196 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1198 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1206 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1208 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1218 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1222 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1224 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1228 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 1230 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1234 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_3 */

/* 1236 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1238 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1240 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1242 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1246 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc21 */

/* 1254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1262 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1268 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1270 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1272 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1274 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1276 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1278 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1284 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1288 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1292 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 1296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1302 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1304 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1306 */	NdrFcShort( 0x316 ),	/* Type Offset=790 */

	/* Parameter arg_4 */

/* 1308 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1310 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1312 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc22 */

/* 1320 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1328 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1330 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1332 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1338 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1340 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1344 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1350 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1352 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1354 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_1 */

/* 1356 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1360 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arg_2 */

/* 1362 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1366 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_3 */

/* 1368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1370 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1372 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1376 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1380 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1382 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1384 */	NdrFcShort( 0x5fa ),	/* Type Offset=1530 */

	/* Parameter arg_6 */

/* 1386 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 1388 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1390 */	NdrFcShort( 0x5b2 ),	/* Type Offset=1458 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc23 */

/* 1398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1406 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1408 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1412 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1432 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_1 */

/* 1434 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1438 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 1440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_3 */

/* 1446 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1448 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1450 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_4 */

/* 1452 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1454 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1456 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 1458 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1460 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc24 */

/* 1470 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1478 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1480 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1490 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1502 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1504 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_1 */

/* 1506 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1510 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc25 */

/* 1524 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1532 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1534 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1536 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1538 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1540 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1544 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 1554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1558 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter arg_1 */

/* 1560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1564 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter arg_2 */

/* 1566 */	NdrFcShort( 0x8112 ),	/* Flags:  must free, out, simple ref, srv alloc size=32 */
/* 1568 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1570 */	NdrFcShort( 0x608 ),	/* Type Offset=1544 */

	/* Return value */

/* 1572 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1574 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const magicNetdfs_MIDL_TYPE_FORMAT_STRING magicNetdfs__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x0,	/* FC_RP */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 16 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 20 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0x13 ),	/* 19 */
/* 28 */	NdrFcLong( 0x1 ),	/* 1 */
/* 32 */	NdrFcShort( 0x70 ),	/* Offset= 112 (144) */
/* 34 */	NdrFcLong( 0x2 ),	/* 2 */
/* 38 */	NdrFcShort( 0x7c ),	/* Offset= 124 (162) */
/* 40 */	NdrFcLong( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x90 ),	/* Offset= 144 (188) */
/* 46 */	NdrFcLong( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (262) */
/* 52 */	NdrFcLong( 0x5 ),	/* 5 */
/* 56 */	NdrFcShort( 0x11a ),	/* Offset= 282 (338) */
/* 58 */	NdrFcLong( 0x6 ),	/* 6 */
/* 62 */	NdrFcShort( 0x136 ),	/* Offset= 310 (372) */
/* 64 */	NdrFcLong( 0x7 ),	/* 7 */
/* 68 */	NdrFcShort( 0x18e ),	/* Offset= 398 (466) */
/* 70 */	NdrFcLong( 0x8 ),	/* 8 */
/* 74 */	NdrFcShort( 0x196 ),	/* Offset= 406 (480) */
/* 76 */	NdrFcLong( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0x1c4 ),	/* Offset= 452 (532) */
/* 82 */	NdrFcLong( 0x32 ),	/* 50 */
/* 86 */	NdrFcShort( 0x202 ),	/* Offset= 514 (600) */
/* 88 */	NdrFcLong( 0x64 ),	/* 100 */
/* 92 */	NdrFcShort( 0x208 ),	/* Offset= 520 (612) */
/* 94 */	NdrFcLong( 0x65 ),	/* 101 */
/* 98 */	NdrFcShort( 0x214 ),	/* Offset= 532 (630) */
/* 100 */	NdrFcLong( 0x66 ),	/* 102 */
/* 104 */	NdrFcShort( 0x20e ),	/* Offset= 526 (630) */
/* 106 */	NdrFcLong( 0x67 ),	/* 103 */
/* 110 */	NdrFcShort( 0x212 ),	/* Offset= 530 (640) */
/* 112 */	NdrFcLong( 0x68 ),	/* 104 */
/* 116 */	NdrFcShort( 0x218 ),	/* Offset= 536 (652) */
/* 118 */	NdrFcLong( 0x69 ),	/* 105 */
/* 122 */	NdrFcShort( 0x220 ),	/* Offset= 544 (666) */
/* 124 */	NdrFcLong( 0x6a ),	/* 106 */
/* 128 */	NdrFcShort( 0x230 ),	/* Offset= 560 (688) */
/* 130 */	NdrFcLong( 0x6b ),	/* 107 */
/* 134 */	NdrFcShort( 0x238 ),	/* Offset= 568 (702) */
/* 136 */	NdrFcLong( 0x96 ),	/* 150 */
/* 140 */	NdrFcShort( 0x25c ),	/* Offset= 604 (744) */
/* 142 */	NdrFcShort( 0xffff ),	/* Offset= -1 (141) */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x4 ),	/* Offset= 4 (158) */
/* 156 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 158 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x18 ),	/* 24 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x8 ),	/* Offset= 8 (180) */
/* 174 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 176 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 182 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 184 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0x2e ),	/* Offset= 46 (236) */
/* 192 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x18 ),	/* 24 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* Offset= 8 (206) */
/* 200 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 202 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 220 */	NdrFcShort( 0x14 ),	/* 20 */
/* 222 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 224 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 228 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 230 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 232 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (192) */
/* 234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 236 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 238 */	NdrFcShort( 0x20 ),	/* 32 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x8 ),	/* Offset= 8 (250) */
/* 244 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 246 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 248 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 258 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 260 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (214) */
/* 262 */	
			0x12, 0x0,	/* FC_UP */
/* 264 */	NdrFcShort( 0x2a ),	/* Offset= 42 (306) */
/* 266 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 270 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 272 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 274 */	NdrFcShort( 0x10 ),	/* 16 */
/* 276 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 278 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 280 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (266) */
			0x5b,		/* FC_END */
/* 284 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 290 */	NdrFcShort( 0x28 ),	/* 40 */
/* 292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 294 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 298 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 300 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 302 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (192) */
/* 304 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x38 ),	/* 56 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0xe ),	/* Offset= 14 (326) */
/* 314 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 316 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 320 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (272) */
/* 322 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 324 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 326 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 328 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 330 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 332 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 334 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 336 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (284) */
/* 338 */	
			0x12, 0x0,	/* FC_UP */
/* 340 */	NdrFcShort( 0x2 ),	/* Offset= 2 (342) */
/* 342 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 344 */	NdrFcShort( 0x38 ),	/* 56 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x10 ),	/* Offset= 16 (364) */
/* 350 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 354 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 356 */	NdrFcShort( 0xffac ),	/* Offset= -84 (272) */
/* 358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 360 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 362 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 364 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 366 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 368 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 370 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 372 */	
			0x12, 0x0,	/* FC_UP */
/* 374 */	NdrFcShort( 0x3a ),	/* Offset= 58 (432) */
/* 376 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 382 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 384 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 386 */	NdrFcShort( 0x20 ),	/* 32 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0xc ),	/* Offset= 12 (402) */
/* 392 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 394 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 396 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0xffea ),	/* Offset= -22 (376) */
/* 400 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 402 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 404 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 406 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 408 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 410 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 416 */	NdrFcShort( 0x30 ),	/* 48 */
/* 418 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 420 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 424 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 426 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 428 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (384) */
/* 430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 432 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 434 */	NdrFcShort( 0x40 ),	/* 64 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x10 ),	/* Offset= 16 (454) */
/* 440 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 442 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 446 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (272) */
/* 448 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 450 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 452 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 454 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 458 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 460 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 462 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 464 */	NdrFcShort( 0xffca ),	/* Offset= -54 (410) */
/* 466 */	
			0x12, 0x0,	/* FC_UP */
/* 468 */	NdrFcShort( 0x2 ),	/* Offset= 2 (470) */
/* 470 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x10 ),	/* 16 */
/* 474 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0xff34 ),	/* Offset= -204 (272) */
/* 478 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 480 */	
			0x12, 0x0,	/* FC_UP */
/* 482 */	NdrFcShort( 0xe ),	/* Offset= 14 (496) */
/* 484 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 488 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 490 */	NdrFcShort( 0x30 ),	/* 48 */
/* 492 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 494 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 496 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 498 */	NdrFcShort( 0x48 ),	/* 72 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x12 ),	/* Offset= 18 (520) */
/* 504 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 506 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 508 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 510 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (272) */
/* 512 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 514 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 516 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 518 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 520 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 522 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 524 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 528 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 530 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (484) */
/* 532 */	
			0x12, 0x0,	/* FC_UP */
/* 534 */	NdrFcShort( 0x18 ),	/* Offset= 24 (558) */
/* 536 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 542 */	NdrFcShort( 0x40 ),	/* 64 */
/* 544 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 546 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 550 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (384) */
/* 556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 558 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 560 */	NdrFcShort( 0x50 ),	/* 80 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x14 ),	/* Offset= 20 (584) */
/* 566 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 568 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0xfed4 ),	/* Offset= -300 (272) */
/* 574 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 576 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 578 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 580 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 582 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 584 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 586 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 588 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 590 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 592 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 594 */	NdrFcShort( 0xff92 ),	/* Offset= -110 (484) */
/* 596 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 598 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (536) */
/* 600 */	
			0x12, 0x0,	/* FC_UP */
/* 602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (604) */
/* 604 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 606 */	NdrFcShort( 0x10 ),	/* 16 */
/* 608 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 610 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 612 */	
			0x12, 0x0,	/* FC_UP */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x4 ),	/* Offset= 4 (626) */
/* 624 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 626 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 628 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 630 */	
			0x12, 0x0,	/* FC_UP */
/* 632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (634) */
/* 634 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x4 ),	/* 4 */
/* 638 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 640 */	
			0x12, 0x0,	/* FC_UP */
/* 642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (644) */
/* 644 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (656) */
/* 656 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 660 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 662 */	NdrFcShort( 0xfee2 ),	/* Offset= -286 (376) */
/* 664 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 666 */	
			0x12, 0x0,	/* FC_UP */
/* 668 */	NdrFcShort( 0x2 ),	/* Offset= 2 (670) */
/* 670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 672 */	NdrFcShort( 0x18 ),	/* 24 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x8 ),	/* Offset= 8 (684) */
/* 678 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 682 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 688 */	
			0x12, 0x0,	/* FC_UP */
/* 690 */	NdrFcShort( 0x2 ),	/* Offset= 2 (692) */
/* 692 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 694 */	NdrFcShort( 0xc ),	/* 12 */
/* 696 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 698 */	0x0,		/* 0 */
			NdrFcShort( 0xfebd ),	/* Offset= -323 (376) */
			0x5b,		/* FC_END */
/* 702 */	
			0x12, 0x0,	/* FC_UP */
/* 704 */	NdrFcShort( 0xe ),	/* Offset= 14 (718) */
/* 706 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 710 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 712 */	NdrFcShort( 0x18 ),	/* 24 */
/* 714 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 716 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 718 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x28 ),	/* 40 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xc ),	/* Offset= 12 (736) */
/* 726 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 728 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 730 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 732 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 738 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 740 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 742 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (706) */
/* 744 */	
			0x12, 0x0,	/* FC_UP */
/* 746 */	NdrFcShort( 0xe ),	/* Offset= 14 (760) */
/* 748 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 758 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x10 ),	/* 16 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x6 ),	/* Offset= 6 (772) */
/* 768 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 770 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 772 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 774 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (748) */
/* 776 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 778 */	NdrFcShort( 0x2 ),	/* Offset= 2 (780) */
/* 780 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 782 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 786 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 788 */	NdrFcShort( 0xfd04 ),	/* Offset= -764 (24) */
/* 790 */	
			0x12, 0x0,	/* FC_UP */
/* 792 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1320) */
/* 794 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 796 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 800 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (804) */
/* 804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 806 */	NdrFcShort( 0xa ),	/* 10 */
/* 808 */	NdrFcLong( 0x1 ),	/* 1 */
/* 812 */	NdrFcShort( 0x3a ),	/* Offset= 58 (870) */
/* 814 */	NdrFcLong( 0x2 ),	/* 2 */
/* 818 */	NdrFcShort( 0x5e ),	/* Offset= 94 (912) */
/* 820 */	NdrFcLong( 0x3 ),	/* 3 */
/* 824 */	NdrFcShort( 0x82 ),	/* Offset= 130 (954) */
/* 826 */	NdrFcLong( 0x4 ),	/* 4 */
/* 830 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (996) */
/* 832 */	NdrFcLong( 0x5 ),	/* 5 */
/* 836 */	NdrFcShort( 0xca ),	/* Offset= 202 (1038) */
/* 838 */	NdrFcLong( 0x6 ),	/* 6 */
/* 842 */	NdrFcShort( 0xee ),	/* Offset= 238 (1080) */
/* 844 */	NdrFcLong( 0x8 ),	/* 8 */
/* 848 */	NdrFcShort( 0x112 ),	/* Offset= 274 (1122) */
/* 850 */	NdrFcLong( 0x9 ),	/* 9 */
/* 854 */	NdrFcShort( 0x136 ),	/* Offset= 310 (1164) */
/* 856 */	NdrFcLong( 0xc8 ),	/* 200 */
/* 860 */	NdrFcShort( 0x15a ),	/* Offset= 346 (1206) */
/* 862 */	NdrFcLong( 0x12c ),	/* 300 */
/* 866 */	NdrFcShort( 0x18c ),	/* Offset= 396 (1262) */
/* 868 */	NdrFcShort( 0xffff ),	/* Offset= -1 (867) */
/* 870 */	
			0x12, 0x0,	/* FC_UP */
/* 872 */	NdrFcShort( 0x18 ),	/* Offset= 24 (896) */
/* 874 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 884 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 888 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 890 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 892 */	NdrFcShort( 0xfd18 ),	/* Offset= -744 (148) */
/* 894 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 896 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x10 ),	/* 16 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x6 ),	/* Offset= 6 (908) */
/* 904 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 906 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 908 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 910 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (874) */
/* 912 */	
			0x12, 0x0,	/* FC_UP */
/* 914 */	NdrFcShort( 0x18 ),	/* Offset= 24 (938) */
/* 916 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 926 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 930 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 932 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 934 */	NdrFcShort( 0xfd00 ),	/* Offset= -768 (166) */
/* 936 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 938 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x10 ),	/* 16 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x6 ),	/* Offset= 6 (950) */
/* 946 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 948 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 950 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 952 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (916) */
/* 954 */	
			0x12, 0x0,	/* FC_UP */
/* 956 */	NdrFcShort( 0x18 ),	/* Offset= 24 (980) */
/* 958 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 968 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 972 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 974 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0xfd1c ),	/* Offset= -740 (236) */
/* 978 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 980 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 982 */	NdrFcShort( 0x10 ),	/* 16 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x6 ),	/* Offset= 6 (992) */
/* 988 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 990 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 992 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 994 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (958) */
/* 996 */	
			0x12, 0x0,	/* FC_UP */
/* 998 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1022) */
/* 1000 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1010 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1014 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1016 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1018 */	NdrFcShort( 0xfd38 ),	/* Offset= -712 (306) */
/* 1020 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1022 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1024 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1034) */
/* 1030 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1032 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1034 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1036 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1000) */
/* 1038 */	
			0x12, 0x0,	/* FC_UP */
/* 1040 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1064) */
/* 1042 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1052 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1056 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1058 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0xfd32 ),	/* Offset= -718 (342) */
/* 1062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1064 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1076) */
/* 1072 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1074 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1076 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1078 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1042) */
/* 1080 */	
			0x12, 0x0,	/* FC_UP */
/* 1082 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1106) */
/* 1084 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1094 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1098 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1100 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1102 */	NdrFcShort( 0xfd62 ),	/* Offset= -670 (432) */
/* 1104 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1106 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1108 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1118) */
/* 1114 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1116 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1118 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1120 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1084) */
/* 1122 */	
			0x12, 0x0,	/* FC_UP */
/* 1124 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1148) */
/* 1126 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1136 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1140 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1142 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1144 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (496) */
/* 1146 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1148 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1150 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1160) */
/* 1156 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1158 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1160 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1162 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1126) */
/* 1164 */	
			0x12, 0x0,	/* FC_UP */
/* 1166 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1190) */
/* 1168 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1178 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1182 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1184 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1186 */	NdrFcShort( 0xfd8c ),	/* Offset= -628 (558) */
/* 1188 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1190 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1192 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1202) */
/* 1198 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1200 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1202 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1204 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1168) */
/* 1206 */	
			0x12, 0x0,	/* FC_UP */
/* 1208 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1246) */
/* 1210 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1220) */
/* 1218 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1220 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1222 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1224 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1234 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1238 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1242 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1210) */
/* 1244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1246 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1248 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1258) */
/* 1254 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1256 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1258 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1260 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1224) */
/* 1262 */	
			0x12, 0x0,	/* FC_UP */
/* 1264 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1304) */
/* 1266 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1268 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1278) */
/* 1274 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1276 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1278 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1280 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1282 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1292 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1296 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1298 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1300 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1266) */
/* 1302 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1304 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1316) */
/* 1312 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1314 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1316 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1318 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1282) */
/* 1320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1322 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1326) */
/* 1328 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1332 */	NdrFcShort( 0xfde6 ),	/* Offset= -538 (794) */
/* 1334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1336 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1338 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1340 */	
			0x11, 0x0,	/* FC_RP */
/* 1342 */	NdrFcShort( 0xfbd2 ),	/* Offset= -1070 (272) */
/* 1344 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1346 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1348) */
/* 1348 */	
			0x12, 0x0,	/* FC_UP */
/* 1350 */	NdrFcShort( 0x2a ),	/* Offset= 42 (1392) */
/* 1352 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1366) */
/* 1360 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1362 */	NdrFcShort( 0xfbbe ),	/* Offset= -1090 (272) */
/* 1364 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1366 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1370 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 1376 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1378 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1380 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1384 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1388 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1352) */
/* 1390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1396 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1370) */
/* 1398 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1398) */
/* 1400 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1402 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1404 */	
			0x11, 0x0,	/* FC_RP */
/* 1406 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1446) */
/* 1408 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1420) */
/* 1416 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1418 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1420 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1422 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1424 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 1430 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1432 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1434 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1438 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1440 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1442 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1408) */
/* 1444 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1446 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1450 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1424) */
/* 1452 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1452) */
/* 1454 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1456 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1458 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 1460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1462) */
/* 1462 */	
			0x12, 0x0,	/* FC_UP */
/* 1464 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1502) */
/* 1466 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1476) */
/* 1474 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1476 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1478 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1480 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 1486 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1488 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1490 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1494 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1496 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1498 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (1466) */
/* 1500 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1502 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1506 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1480) */
/* 1508 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1508) */
/* 1510 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1514 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1516 */	NdrFcShort( 0xfa1a ),	/* Offset= -1510 (6) */
/* 1518 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1520 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1522 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1524 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1526 */	
			0x11, 0x0,	/* FC_RP */
/* 1528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1530) */
/* 1530 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1532 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1534 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1538 */	NdrFcShort( 0xfa16 ),	/* Offset= -1514 (24) */
/* 1540 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1542 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1544) */
/* 1544 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1546 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1548 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1550 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 1552 */	0x8,		/* FC_LONG */
			0xb,		/* FC_HYPER */
/* 1554 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    36,
    102,
    156,
    222,
    288,
    348,
    402,
    450,
    510,
    558,
    648,
    720,
    780,
    834,
    882,
    942,
    1002,
    1062,
    1110,
    1188,
    1254,
    1320,
    1398,
    1470,
    1524
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for magicNetdfs.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_CHAR
__midl_frag462_t;
extern const __midl_frag462_t __midl_frag462;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag461_t;
extern const __midl_frag461_t __midl_frag461;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag460_t;
extern const __midl_frag460_t __midl_frag460;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag459_t;
extern const __midl_frag459_t __midl_frag459;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag458_t;
extern const __midl_frag458_t __midl_frag458;

typedef 
NDR64_FORMAT_CHAR
__midl_frag457_t;
extern const __midl_frag457_t __midl_frag457;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag456_t;
extern const __midl_frag456_t __midl_frag456;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag449_t;
extern const __midl_frag449_t __midl_frag449;

typedef 
NDR64_FORMAT_CHAR
__midl_frag446_t;
extern const __midl_frag446_t __midl_frag446;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag438_t;
extern const __midl_frag438_t __midl_frag438;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag436_t;
extern const __midl_frag436_t __midl_frag436;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag435_t;
extern const __midl_frag435_t __midl_frag435;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag434_t;
extern const __midl_frag434_t __midl_frag434;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag433_t;
extern const __midl_frag433_t __midl_frag433;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag432_t;
extern const __midl_frag432_t __midl_frag432;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag431_t;
extern const __midl_frag431_t __midl_frag431;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag430_t;
extern const __midl_frag430_t __midl_frag430;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag428_t;
extern const __midl_frag428_t __midl_frag428;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag426_t;
extern const __midl_frag426_t __midl_frag426;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag425_t;
extern const __midl_frag425_t __midl_frag425;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag424_t;
extern const __midl_frag424_t __midl_frag424;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag423_t;
extern const __midl_frag423_t __midl_frag423;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag422_t;
extern const __midl_frag422_t __midl_frag422;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag421_t;
extern const __midl_frag421_t __midl_frag421;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag420_t;
extern const __midl_frag420_t __midl_frag420;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag419_t;
extern const __midl_frag419_t __midl_frag419;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag418_t;
extern const __midl_frag418_t __midl_frag418;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag417_t;
extern const __midl_frag417_t __midl_frag417;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag415_t;
extern const __midl_frag415_t __midl_frag415;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    NDR64_UINT32 frag22;
}
__midl_frag414_t;
extern const __midl_frag414_t __midl_frag414;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag413_t;
extern const __midl_frag413_t __midl_frag413;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag406_t;
extern const __midl_frag406_t __midl_frag406;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag403_t;
extern const __midl_frag403_t __midl_frag403;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag400_t;
extern const __midl_frag400_t __midl_frag400;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag399_t;
extern const __midl_frag399_t __midl_frag399;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag394_t;
extern const __midl_frag394_t __midl_frag394;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag367_t;
extern const __midl_frag367_t __midl_frag367;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag361_t;
extern const __midl_frag361_t __midl_frag361;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag353_t;
extern const __midl_frag353_t __midl_frag353;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag350_t;
extern const __midl_frag350_t __midl_frag350;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag348_t;
extern const __midl_frag348_t __midl_frag348;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag345_t;
extern const __midl_frag345_t __midl_frag345;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag342_t;
extern const __midl_frag342_t __midl_frag342;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag332_t;
extern const __midl_frag332_t __midl_frag332;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag327_t;
extern const __midl_frag327_t __midl_frag327;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag320_t;
extern const __midl_frag320_t __midl_frag320;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag311_t;
extern const __midl_frag311_t __midl_frag311;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag298_t;
extern const __midl_frag298_t __midl_frag298;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag293_t;
extern const __midl_frag293_t __midl_frag293;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag292_t;
extern const __midl_frag292_t __midl_frag292;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag291_t;
extern const __midl_frag291_t __midl_frag291;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
}
__midl_frag274_t;
extern const __midl_frag274_t __midl_frag274;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag272_t;
extern const __midl_frag272_t __midl_frag272;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag257_t;
extern const __midl_frag257_t __midl_frag257;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag252_t;
extern const __midl_frag252_t __midl_frag252;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag247_t;
extern const __midl_frag247_t __midl_frag247;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag206_t;
extern const __midl_frag206_t __midl_frag206;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag205_t;
extern const __midl_frag205_t __midl_frag205;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag199_t;
extern const __midl_frag199_t __midl_frag199;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag195_t;
extern const __midl_frag195_t __midl_frag195;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag194_t;
extern const __midl_frag194_t __midl_frag194;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag189_t;
extern const __midl_frag189_t __midl_frag189;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag188_t;
extern const __midl_frag188_t __midl_frag188;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag187_t;
extern const __midl_frag187_t __midl_frag187;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag186_t;
extern const __midl_frag186_t __midl_frag186;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag174_t;
extern const __midl_frag174_t __midl_frag174;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag173_t;
extern const __midl_frag173_t __midl_frag173;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag172_t;
extern const __midl_frag172_t __midl_frag172;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag163_t;
extern const __midl_frag163_t __midl_frag163;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    NDR64_UINT32 frag22;
}
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag120_t;
extern const __midl_frag120_t __midl_frag120;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag118_t;
extern const __midl_frag118_t __midl_frag118;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag103_t;
extern const __midl_frag103_t __midl_frag103;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag462_t __midl_frag462 =
0x5    /* FC64_INT32 */;

static const __midl_frag461_t __midl_frag461 =
{ 
/* Struct_1544_t */
    { 
    /* Struct_1544_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1544_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    }
};

static const __midl_frag460_t __midl_frag460 =
{ 
/* *Struct_1544_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag461
};

static const __midl_frag459_t __midl_frag459 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag458_t __midl_frag458 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag459
};

static const __midl_frag457_t __midl_frag457 =
0x4    /* FC64_INT16 */;

static const __midl_frag456_t __midl_frag456 =
{ 
/* Proc25 */
    { 
    /* Proc25 */      /* procedure Proc25 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag457,
        { 
        /* arg_0 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag461,
        { 
        /* arg_2 */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag449_t __midl_frag449 =
{ 
/* Proc24 */
    { 
    /* Proc24 */      /* procedure Proc24 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag458,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag462,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag446_t __midl_frag446 =
0x10    /* FC64_CHAR */;

static const __midl_frag438_t __midl_frag438 =
{ 
/* Proc23 */
    { 
    /* Proc23 */      /* procedure Proc23 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 21 /* 0x15 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag458,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag462,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag458,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag446,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag462,
        { 
        /* arg_5 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag436_t __midl_frag436 =
{ 
/* *Struct_1502_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag291
};

static const __midl_frag435_t __midl_frag435 =
{ 
/* **Struct_1502_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag436
};

static const __midl_frag434_t __midl_frag434 =
{ 
/* *Struct_760_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag122
};

static const __midl_frag433_t __midl_frag433 =
{ 
/* *Struct_718_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag115
};

static const __midl_frag432_t __midl_frag432 =
{ 
/* *Struct_692_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag431_t __midl_frag431 =
{ 
/* *Struct_670_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag110
};

static const __midl_frag430_t __midl_frag430 =
{ 
/* *Struct_656_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag108
};

static const __midl_frag428_t __midl_frag428 =
{ 
/* *Struct_634_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag103
};

static const __midl_frag426_t __midl_frag426 =
{ 
/* *Struct_616_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag295
};

static const __midl_frag425_t __midl_frag425 =
{ 
/* *Struct_604_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag98
};

static const __midl_frag424_t __midl_frag424 =
{ 
/* *Struct_558_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag87
};

static const __midl_frag423_t __midl_frag423 =
{ 
/* *Struct_496_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag78
};

static const __midl_frag422_t __midl_frag422 =
{ 
/* *Struct_470_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag253
};

static const __midl_frag421_t __midl_frag421 =
{ 
/* *Struct_432_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag420_t __midl_frag420 =
{ 
/* *Struct_342_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag60
};

static const __midl_frag419_t __midl_frag419 =
{ 
/* *Struct_306_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag52
};

static const __midl_frag418_t __midl_frag418 =
{ 
/* *Struct_236_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag42
};

static const __midl_frag417_t __midl_frag417 =
{ 
/* *Struct_166_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag38
};

static const __midl_frag415_t __midl_frag415 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag414_t __midl_frag414 =
{ 
/* union_24 */
    { 
    /* union_24 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag415,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 19 /* 0x13 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag426,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag417,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag418,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag419,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag420,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag421,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag422,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag423,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag424,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 50 /* 0x32 */,
        &__midl_frag425,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 100 /* 0x64 */,
        &__midl_frag426,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 101 /* 0x65 */,
        &__midl_frag428,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 102 /* 0x66 */,
        &__midl_frag428,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 103 /* 0x67 */,
        &__midl_frag430,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 104 /* 0x68 */,
        &__midl_frag430,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 105 /* 0x69 */,
        &__midl_frag431,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 106 /* 0x6a */,
        &__midl_frag432,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 107 /* 0x6b */,
        &__midl_frag433,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 150 /* 0x96 */,
        &__midl_frag434,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag413_t __midl_frag413 =
{ 
/* *union_24 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag414
};

static const __midl_frag406_t __midl_frag406 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag459
};

static const __midl_frag403_t __midl_frag403 =
{ 
/* Proc22 */
    { 
    /* Proc22 */      /* procedure Proc22 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag458,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag462,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag414,
        { 
        /* arg_5 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* arg_6 */      /* parameter arg_6 */
        &__midl_frag435,
        { 
        /* arg_6 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag400_t __midl_frag400 =
{ 
/* *long */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag462
};

static const __midl_frag399_t __midl_frag399 =
{ 
/* *Struct_1320_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag163
};

static const __midl_frag394_t __midl_frag394 =
{ 
/* Proc21 */
    { 
    /* Proc21 */      /* procedure Proc21 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag462,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag462,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag399,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag400,
        { 
        /* arg_4 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag382_t __midl_frag382 =
{ 
/* Proc20 */
    { 
    /* Proc20 */      /* procedure Proc20 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag458,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag435,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag367_t __midl_frag367 =
{ 
/* Proc19 */
    { 
    /* Proc19 */      /* procedure Proc19 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag459,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag458,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag458,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag462,
        { 
        /* arg_5 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* arg_6 */      /* parameter arg_6 */
        &__midl_frag435,
        { 
        /* arg_6 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag361_t __midl_frag361 =
{ 
/* Proc18 */
    { 
    /* Proc18 */      /* procedure Proc18 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag353_t __midl_frag353 =
{ 
/* Proc17 */
    { 
    /* Proc17 */      /* procedure Proc17 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag462,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag462,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag350_t __midl_frag350 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag462
};

static const __midl_frag348_t __midl_frag348 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag446
};

static const __midl_frag345_t __midl_frag345 =
{ 
/* **wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag458
};

static const __midl_frag342_t __midl_frag342 =
{ 
/* Proc16 */
    { 
    /* Proc16 */      /* procedure Proc16 */
        (NDR64_UINT32) 17694784 /* 0x10e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 61 /* 0x3d */,
        (NDR64_UINT32) 69 /* 0x45 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag345,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag446,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag462,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag332_t __midl_frag332 =
{ 
/* Proc15 */
    { 
    /* Proc15 */      /* procedure Proc15 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag459,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag459,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag327_t __midl_frag327 =
{ 
/* Proc14 */
    { 
    /* Proc14 */      /* procedure Proc14 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag462,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag320_t __midl_frag320 =
{ 
/* Proc13 */
    { 
    /* Proc13 */      /* procedure Proc13 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag462,
        { 
        /* arg_2 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag311_t __midl_frag311 =
{ 
/* Proc12 */
    { 
    /* Proc12 */      /* procedure Proc12 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag459,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag462,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag298_t __midl_frag298 =
{ 
/* Proc11 */
    { 
    /* Proc11 */      /* procedure Proc11 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag459,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag459,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag462,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag435,
        { 
        /* arg_5 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag295_t __midl_frag295 =
{ 
/* Struct_1466_t */
    { 
    /* Struct_1466_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1466_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag293_t __midl_frag293 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag292_t __midl_frag292 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag293
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag295
    }
};

static const __midl_frag291_t __midl_frag291 =
{ 
/* Struct_1502_t */
    { 
    /* Struct_1502_t */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1502_t */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag292,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag274_t __midl_frag274 =
{ 
/* Proc10 */
    { 
    /* Proc10 */      /* procedure Proc10 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 13 /* 0xd */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag459,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag459,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag459,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* arg_5 */      /* parameter arg_5 */
        &__midl_frag459,
        { 
        /* arg_5 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* arg_6 */      /* parameter arg_6 */
        &__midl_frag446,
        { 
        /* arg_6 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* arg_7 */      /* parameter arg_7 */
        &__midl_frag462,
        { 
        /* arg_7 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* arg_8 */      /* parameter arg_8 */
        &__midl_frag435,
        { 
        /* arg_8 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag272_t __midl_frag272 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    }
};

static const __midl_frag270_t __midl_frag270 =
{ 
/* Struct_1408_t */
    { 
    /* Struct_1408_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1408_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag272,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag268_t __midl_frag268 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag270
        },
        &__midl_frag293,
        0,
        0
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* Struct_1446_t */
    { 
    /* Struct_1446_t */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1446_t */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag268,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag266_t __midl_frag266 =
{ 
/* *Struct_1446_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag267
};

static const __midl_frag263_t __midl_frag263 =
{ 
/* Proc9 */
    { 
    /* Proc9 */      /* procedure Proc9 */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag267,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* Struct_1352_t */
    { 
    /* Struct_1352_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1352_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag257_t __midl_frag257 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag293
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag260
    }
};

static const __midl_frag256_t __midl_frag256 =
{ 
/* Struct_1392_t */
    { 
    /* Struct_1392_t */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1392_t */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag257,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag255_t __midl_frag255 =
{ 
/* *Struct_1392_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag256
};

static const __midl_frag254_t __midl_frag254 =
{ 
/* **Struct_1392_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag255
};

static const __midl_frag253_t __midl_frag253 =
{ 
/* Struct_272_t */
    { 
    /* Struct_272_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_272_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag252_t __midl_frag252 =
{ 
/* *Struct_272_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag253
};

static const __midl_frag247_t __midl_frag247 =
{ 
/* Proc8 */
    { 
    /* Proc8 */      /* procedure Proc8 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag253,
        { 
        /* arg_2 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag254,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/*  */
    { 
    /* *Struct_1266_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag268
    }
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* Struct_1304_t */
    { 
    /* Struct_1304_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1304_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag230,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag223_t __midl_frag223 =
{ 
/* *Struct_1304_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag224
};

static const __midl_frag222_t __midl_frag222 =
{ 
/*  */
    { 
    /* *Struct_1210_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag292
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* Struct_1246_t */
    { 
    /* Struct_1246_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1246_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag222,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* *Struct_1246_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag216
};

static const __midl_frag214_t __midl_frag214 =
{ 
/*  */
    { 
    /* *Struct_558_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag212
    }
};

static const __midl_frag212_t __midl_frag212 =
{ 
/* *Struct_558_t */
    { 
    /* *Struct_558_t */
        { 
        /* *Struct_558_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_558_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag87
        },
        &__midl_frag293,
        0,
        0
    }
};

static const __midl_frag211_t __midl_frag211 =
{ 
/* Struct_1190_t */
    { 
    /* Struct_1190_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1190_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag214,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* *Struct_1190_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag211
};

static const __midl_frag209_t __midl_frag209 =
{ 
/*  */
    { 
    /* *Struct_496_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag207
    }
};

static const __midl_frag207_t __midl_frag207 =
{ 
/* *Struct_496_t */
    { 
    /* *Struct_496_t */
        { 
        /* *Struct_496_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_496_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag78
        },
        &__midl_frag293,
        0,
        0
    }
};

static const __midl_frag206_t __midl_frag206 =
{ 
/* Struct_1148_t */
    { 
    /* Struct_1148_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1148_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag209,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag205_t __midl_frag205 =
{ 
/* *Struct_1148_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag206
};

static const __midl_frag204_t __midl_frag204 =
{ 
/*  */
    { 
    /* *Struct_432_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag202
    }
};

static const __midl_frag202_t __midl_frag202 =
{ 
/* *Struct_432_t */
    { 
    /* *Struct_432_t */
        { 
        /* *Struct_432_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_432_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag64
        },
        &__midl_frag293,
        0,
        0
    }
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* Struct_1106_t */
    { 
    /* Struct_1106_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1106_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag204,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* *Struct_1106_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag201
};

static const __midl_frag199_t __midl_frag199 =
{ 
/*  */
    { 
    /* *Struct_342_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag195
    }
};

static const __midl_frag195_t __midl_frag195 =
{ 
/* *Struct_342_t */
    { 
    /* *Struct_342_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *Struct_342_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag293
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 2 /* 0x2 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag60
    }
};

static const __midl_frag194_t __midl_frag194 =
{ 
/* Struct_1064_t */
    { 
    /* Struct_1064_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1064_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag199,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag193_t __midl_frag193 =
{ 
/* *Struct_1064_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag194
};

static const __midl_frag192_t __midl_frag192 =
{ 
/*  */
    { 
    /* *Struct_306_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag190
    }
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* *Struct_306_t */
    { 
    /* *Struct_306_t */
        { 
        /* *Struct_306_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_306_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag52
        },
        &__midl_frag293,
        0,
        0
    }
};

static const __midl_frag189_t __midl_frag189 =
{ 
/* Struct_1022_t */
    { 
    /* Struct_1022_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1022_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag192,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag188_t __midl_frag188 =
{ 
/* *Struct_1022_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag189
};

static const __midl_frag187_t __midl_frag187 =
{ 
/*  */
    { 
    /* *Struct_236_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag181
    }
};

static const __midl_frag186_t __midl_frag186 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 20 /* 0x14 */
    }
};

static const __midl_frag185_t __midl_frag185 =
{ 
/* *Struct_192_t */
    { 
    /* *Struct_192_t */
        { 
        /* *Struct_192_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_192_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag47
        },
        &__midl_frag186,
        0,
        0
    }
};

static const __midl_frag181_t __midl_frag181 =
{ 
/* *Struct_236_t */
    { 
    /* *Struct_236_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *Struct_236_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag293
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 3 /* 0x3 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *Struct_192_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 32 /* 0x20 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag185
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag42
    }
};

static const __midl_frag180_t __midl_frag180 =
{ 
/* Struct_980_t */
    { 
    /* Struct_980_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_980_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag187,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* *Struct_980_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag178_t __midl_frag178 =
{ 
/*  */
    { 
    /* *Struct_166_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag174
    }
};

static const __midl_frag174_t __midl_frag174 =
{ 
/* *Struct_166_t */
    { 
    /* *Struct_166_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *Struct_166_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag293
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 2 /* 0x2 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag459
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag38
    }
};

static const __midl_frag173_t __midl_frag173 =
{ 
/* Struct_938_t */
    { 
    /* Struct_938_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_938_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag178,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag172_t __midl_frag172 =
{ 
/* *Struct_938_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag173
};

static const __midl_frag164_t __midl_frag164 =
{ 
/* union_804 */
    { 
    /* union_804 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag293,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag215,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag172,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag179,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag188,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag193,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag200,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag205,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag210,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 200 /* 0xc8 */,
        &__midl_frag215,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 300 /* 0x12c */,
        &__midl_frag223,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag163_t __midl_frag163 =
{ 
/* Struct_1320_t */
    { 
    /* Struct_1320_t */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_1320_t */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag164
        },
        { 
        /* Struct_1320_t */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag159_t __midl_frag159 =
{ 
/* Proc5 */
    { 
    /* Proc5 */      /* procedure Proc5 */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag462,
        { 
        /* arg_0 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag462,
        { 
        /* arg_1 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag399,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag400,
        { 
        /* arg_3 */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag138_t __midl_frag138 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* union_24 */
    { 
    /* union_24 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag138,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 19 /* 0x13 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag426,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag417,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag418,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag419,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag420,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag421,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag422,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag423,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag424,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 50 /* 0x32 */,
        &__midl_frag425,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 100 /* 0x64 */,
        &__midl_frag426,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 101 /* 0x65 */,
        &__midl_frag428,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 102 /* 0x66 */,
        &__midl_frag428,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 103 /* 0x67 */,
        &__midl_frag430,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 104 /* 0x68 */,
        &__midl_frag430,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 105 /* 0x69 */,
        &__midl_frag431,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 106 /* 0x6a */,
        &__midl_frag432,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 107 /* 0x6b */,
        &__midl_frag433,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 150 /* 0x96 */,
        &__midl_frag434,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag136_t __midl_frag136 =
{ 
/* *union_24 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag137
};

static const __midl_frag128_t __midl_frag128 =
{ 
/* Proc4 */
    { 
    /* Proc4 */      /* procedure Proc4 */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag462,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag137,
        { 
        /* arg_4 */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag126_t __midl_frag126 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag123
    }
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag293
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag446
    }
};

static const __midl_frag122_t __midl_frag122 =
{ 
/* Struct_760_t */
    { 
    /* Struct_760_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_760_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag126,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag120_t __midl_frag120 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag117
    }
};

static const __midl_frag118_t __midl_frag118 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag118
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag446
    }
};

static const __midl_frag115_t __midl_frag115 =
{ 
/* Struct_718_t */
    { 
    /* Struct_718_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_718_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag120,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* Struct_692_t */
    { 
    /* Struct_692_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_692_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* Struct_670_t */
    { 
    /* Struct_670_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_670_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag108_t __midl_frag108 =
{ 
/* Struct_656_t */
    { 
    /* Struct_656_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_656_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag103_t __midl_frag103 =
{ 
/* Struct_634_t */
    { 
    /* Struct_634_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_634_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag98_t __midl_frag98 =
{ 
/* Struct_604_t */
    { 
    /* Struct_604_t */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_604_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag95_t __midl_frag95 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag90
    },
    { 
    /* *Struct_384_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag93
    }
};

static const __midl_frag94_t __midl_frag94 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* *Struct_384_t */
    { 
    /* *Struct_384_t */
        { 
        /* *Struct_384_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_384_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag69
        },
        &__midl_frag94,
        0,
        0
    }
};

static const __midl_frag91_t __midl_frag91 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag91
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag446
    }
};

static const __midl_frag87_t __midl_frag87 =
{ 
/* Struct_558_t */
    { 
    /* Struct_558_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_558_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 80 /* 0x50 */,
        0,
        0,
        &__midl_frag95,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag96
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag84_t __midl_frag84 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag90
    }
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* Struct_496_t */
    { 
    /* Struct_496_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_496_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        0,
        0,
        &__midl_frag84,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag96
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* Struct_496_t */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag73_t __midl_frag73 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *Struct_384_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag67
    }
};

static const __midl_frag72_t __midl_frag72 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* Struct_384_t */
    { 
    /* Struct_384_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_384_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag72,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* *Struct_384_t */
    { 
    /* *Struct_384_t */
        { 
        /* *Struct_384_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_384_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag69
        },
        &__midl_frag91,
        0,
        0
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* Struct_432_t */
    { 
    /* Struct_432_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_432_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag73,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag96
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* Struct_342_t */
    { 
    /* Struct_342_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_342_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag57_t __midl_frag57 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag459
    },
    { 
    /* *Struct_192_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag55
    }
};

static const __midl_frag56_t __midl_frag56 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* *Struct_192_t */
    { 
    /* *Struct_192_t */
        { 
        /* *Struct_192_t */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *Struct_192_t */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag47
        },
        &__midl_frag56,
        0,
        0
    }
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* Struct_306_t */
    { 
    /* Struct_306_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_306_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        &__midl_frag57,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag96
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* Struct_192_t */
    { 
    /* Struct_192_t */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_192_t */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag72,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* Struct_236_t */
    { 
    /* Struct_236_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_236_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *Struct_192_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag185
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* Struct_166_t */
    { 
    /* Struct_166_t */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* Struct_166_t */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag459
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag31_t __midl_frag31 =
{ 
/* *union_24 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag137
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* Proc3 */
    { 
    /* Proc3 */      /* procedure Proc3 */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag462,
        { 
        /* arg_3 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag137,
        { 
        /* arg_4 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* Proc2 */
    { 
    /* Proc2 */      /* procedure Proc2 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag458,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* Proc1 */
    { 
    /* Proc1 */      /* procedure Proc1 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag459,
        { 
        /* arg_0 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag459,
        { 
        /* arg_1 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* arg_2 */      /* parameter arg_2 */
        &__midl_frag458,
        { 
        /* arg_2 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* arg_3 */      /* parameter arg_3 */
        &__midl_frag458,
        { 
        /* arg_3 */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* arg_4 */      /* parameter arg_4 */
        &__midl_frag462,
        { 
        /* arg_4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Proc0 */
    { 
    /* Proc0 */      /* procedure Proc0 */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag462,
        { 
        /* long */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef DefaultIfName_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag4,
    &__midl_frag15,
    &__midl_frag23,
    &__midl_frag128,
    &__midl_frag159,
    &__midl_frag320,
    &__midl_frag361,
    &__midl_frag247,
    &__midl_frag263,
    &__midl_frag274,
    &__midl_frag298,
    &__midl_frag311,
    &__midl_frag320,
    &__midl_frag327,
    &__midl_frag332,
    &__midl_frag342,
    &__midl_frag353,
    &__midl_frag361,
    &__midl_frag367,
    &__midl_frag382,
    &__midl_frag394,
    &__midl_frag403,
    &__midl_frag438,
    &__midl_frag449,
    &__midl_frag456
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &DefaultIfName__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    magicNetdfs__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& DefaultIfName_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO DefaultIfName_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    magicNetdfs__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    magicNetdfs__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) DefaultIfName_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO DefaultIfName_ProxyInfo =
    {
    &DefaultIfName_StubDesc,
    magicNetdfs__MIDL_ProcFormatString.Format,
    DefaultIfName_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)DefaultIfName_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

