﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Predicate`1<System.Boolean>
struct Predicate_1_t2268544833;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Predicate`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3379886338_gshared (Predicate_1_t2268544833 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m3379886338(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2268544833 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3379886338_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Boolean>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3492771294_gshared (Predicate_1_t2268544833 * __this, bool ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3492771294(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2268544833 *, bool, const MethodInfo*))Predicate_1_Invoke_m3492771294_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1973834093_gshared (Predicate_1_t2268544833 * __this, bool ___obj0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1973834093(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2268544833 *, bool, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1973834093_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m43128384_gshared (Predicate_1_t2268544833 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m43128384(__this, ___result0, method) ((  bool (*) (Predicate_1_t2268544833 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m43128384_gshared)(__this, ___result0, method)
