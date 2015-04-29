// This file is generated by omniidl (C++ backend)- omniORB_4_0. Do not edit.

#include "IAccessCorbaDef.h"
#include <omniORB4/tcDescriptor.h>

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_0;

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace Base_Bus { 
  const CORBA::TypeCode_ptr _tc_IAccessCorbaDef = CORBA::TypeCode::PR_interface_tc("IDL:Base_Bus/IAccessCorbaDef:1.0", "IAccessCorbaDef");
} 
#else
const CORBA::TypeCode_ptr Base_Bus::_tc_IAccessCorbaDef = CORBA::TypeCode::PR_interface_tc("IDL:Base_Bus/IAccessCorbaDef:1.0", "IAccessCorbaDef");
#endif

static void
_0RL_tcParser_setObjectPtr_Base__Bus_mIAccessCorbaDef(const tcObjrefDesc *_desc, CORBA::Object_ptr _ptr)
{
  Base_Bus::IAccessCorbaDef_ptr _p = Base_Bus::IAccessCorbaDef::_narrow(_ptr);
  Base_Bus::IAccessCorbaDef_ptr* pp = (Base_Bus::IAccessCorbaDef_ptr*)_desc->opq_objref;
  if (_desc->opq_release && !CORBA::is_nil(*pp)) CORBA::release(*pp);
  *pp = _p;
  CORBA::release(_ptr);
}

static CORBA::Object_ptr
_0RL_tcParser_getObjectPtr_Base__Bus_mIAccessCorbaDef(const tcObjrefDesc *_desc)
{
  return (CORBA::Object_ptr) *((Base_Bus::IAccessCorbaDef_ptr*)_desc->opq_objref);
}

void _0RL_buildDesc_cBase__Bus_mIAccessCorbaDef(tcDescriptor& _desc, const _CORBA_ObjRef_tcDesc_arg< Base_Bus::_objref_IAccessCorbaDef, Base_Bus::IAccessCorbaDef_Helper> & _d)
{
  _desc.p_objref.opq_objref = (void*) &_d._data;
  _desc.p_objref.opq_release = _d._rel;
  _desc.p_objref.setObjectPtr = _0RL_tcParser_setObjectPtr_Base__Bus_mIAccessCorbaDef;
  _desc.p_objref.getObjectPtr = _0RL_tcParser_getObjectPtr_Base__Bus_mIAccessCorbaDef;
}

void _0RL_delete_Base__Bus_mIAccessCorbaDef(void* _data) {
  CORBA::release((Base_Bus::IAccessCorbaDef_ptr) _data);
}

void operator<<=(CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr _s) {
  tcDescriptor tcd;
  _CORBA_ObjRef_tcDesc_arg< Base_Bus::_objref_IAccessCorbaDef, Base_Bus::IAccessCorbaDef_Helper>  tmp(_s,0);
  _0RL_buildDesc_cBase__Bus_mIAccessCorbaDef(tcd, tmp);
  _a.PR_packFrom(Base_Bus::_tc_IAccessCorbaDef, &tcd);
}

void operator<<=(CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr* _sp) {
  _a <<= *_sp;
  CORBA::release(*_sp);
  *_sp = Base_Bus::IAccessCorbaDef::_nil();
}

CORBA::Boolean operator>>=(const CORBA::Any& _a, Base_Bus::IAccessCorbaDef_ptr& _s) {
  Base_Bus::IAccessCorbaDef_ptr sp = (Base_Bus::IAccessCorbaDef_ptr) _a.PR_getCachedData();
  if (sp == 0) {
    tcDescriptor tcd;
    Base_Bus::IAccessCorbaDef_var tmp;
    _0RL_buildDesc_cBase__Bus_mIAccessCorbaDef(tcd, tmp);
    if( _a.PR_unpackTo(Base_Bus::_tc_IAccessCorbaDef, &tcd) ) {
      if (!omniORB::omniORB_27_CompatibleAnyExtraction) {
        ((CORBA::Any*)&_a)->PR_setCachedData((void*)(Base_Bus::IAccessCorbaDef_ptr)tmp,_0RL_delete_Base__Bus_mIAccessCorbaDef);
      }
      _s = tmp._retn();
      return 1;
    } else {
      _s = Base_Bus::IAccessCorbaDef::_nil(); return 0;
    }
  }
  else {
    CORBA::TypeCode_var tc = _a.type();
    if (tc->equivalent(Base_Bus::_tc_IAccessCorbaDef)) {
    _s = sp; return 1;
    }
    else {
    _s = Base_Bus::IAccessCorbaDef::_nil(); return 0;
    }
  }
}
