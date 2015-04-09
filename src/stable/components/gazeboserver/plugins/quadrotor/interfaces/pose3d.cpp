// **********************************************************************
//
// Copyright (c) 2003-2011 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.4.2
//
// <auto-generated>
//
// Generated from file `pose3d.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <pose3d.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 304
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 2
#       error Ice patch level mismatch!
#   endif
#endif

static const ::std::string __jderobot__Pose3D__getPose3DData_name = "getPose3DData";

static const ::std::string __jderobot__Pose3D__setPose3DData_name = "setPose3DData";

::Ice::Object* IceInternal::upCast(::jderobot::Pose3DData* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::jderobot::Pose3DData* p) { return p; }

::Ice::Object* IceInternal::upCast(::jderobot::Pose3D* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::jderobot::Pose3D* p) { return p; }

void
jderobot::__read(::IceInternal::BasicStream* __is, ::jderobot::Pose3DDataPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DData;
        v->__copyFrom(proxy);
    }
}

void
jderobot::__read(::IceInternal::BasicStream* __is, ::jderobot::Pose3DPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3D;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DData::ice_staticId()
{
    return ::jderobot::Pose3DData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DData);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DData::__newInstance() const
{
    return new Pose3DData;
}

::jderobot::Pose3DDataPtr
IceProxy::jderobot::Pose3D::getPose3DData(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3D__getPose3DData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3D* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3D*>(__delBase.get());
            return __del->getPose3DData(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3D::begin_getPose3DData(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3D__getPose3DData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3D__getPose3DData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3D__getPose3DData_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__getOs();
        __os->endWriteEncaps();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::jderobot::Pose3DDataPtr
IceProxy::jderobot::Pose3D::end_getPose3DData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3D__getPose3DData_name);
    ::jderobot::Pose3DDataPtr __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__getIs();
    __is->startReadEncaps();
    __is->read(::jderobot::__patch__Pose3DDataPtr, &__ret);
    __is->readPendingObjects();
    __is->endReadEncaps();
    return __ret;
}

::Ice::Int
IceProxy::jderobot::Pose3D::setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3D__setPose3DData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3D* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3D*>(__delBase.get());
            return __del->setPose3DData(data, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3D::begin_setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3D__setPose3DData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3D__setPose3DData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3D__setPose3DData_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__getOs();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(data.get())));
        __os->writePendingObjects();
        __os->endWriteEncaps();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Ice::Int
IceProxy::jderobot::Pose3D::end_setPose3DData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3D__setPose3DData_name);
    ::Ice::Int __ret;
    if(!__result->__wait())
    {
        try
        {
            __result->__throwUserException();
        }
        catch(const ::Ice::UserException& __ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
        }
    }
    ::IceInternal::BasicStream* __is = __result->__getIs();
    __is->startReadEncaps();
    __is->read(__ret);
    __is->endReadEncaps();
    return __ret;
}

const ::std::string&
IceProxy::jderobot::Pose3D::ice_staticId()
{
    return ::jderobot::Pose3D::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3D::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3D);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3D::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3D);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3D::__newInstance() const
{
    return new Pose3D;
}

::jderobot::Pose3DDataPtr
IceDelegateM::jderobot::Pose3D::getPose3DData(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3D__getPose3DData_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    ::jderobot::Pose3DDataPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::jderobot::__patch__Pose3DDataPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::jderobot::Pose3D::setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3D__setPose3DData_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(::Ice::ObjectPtr(::IceInternal::upCast(data.get())));
        __os->writePendingObjects();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::Pose3DDataPtr
IceDelegateD::jderobot::Pose3D::getPose3DData(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::Pose3DDataPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3D* servant = dynamic_cast< ::jderobot::Pose3D*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getPose3DData(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::Pose3DDataPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3D__getPose3DData_name, ::Ice::Normal, __context);
    ::jderobot::Pose3DDataPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::jderobot::Pose3D::setPose3DData(const ::jderobot::Pose3DDataPtr& data, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::jderobot::Pose3DDataPtr& data, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_data(data)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3D* servant = dynamic_cast< ::jderobot::Pose3D*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setPose3DData(_m_data, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        const ::jderobot::Pose3DDataPtr& _m_data;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3D__setPose3DData_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, data, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

jderobot::Pose3DData::Pose3DData(::Ice::Float __ice_x, ::Ice::Float __ice_y, ::Ice::Float __ice_z, ::Ice::Float __ice_h, ::Ice::Float __ice_q0, ::Ice::Float __ice_q1, ::Ice::Float __ice_q2, ::Ice::Float __ice_q3) :
    x(__ice_x),
    y(__ice_y),
    z(__ice_z),
    h(__ice_h),
    q0(__ice_q0),
    q1(__ice_q1),
    q2(__ice_q2),
    q3(__ice_q3)
{
}

::Ice::ObjectPtr
jderobot::Pose3DData::ice_clone() const
{
    ::jderobot::Pose3DDataPtr __p = new ::jderobot::Pose3DData(*this);
    return __p;
}

static const ::std::string __jderobot__Pose3DData_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DData"
};

bool
jderobot::Pose3DData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DData_ids, __jderobot__Pose3DData_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DData_ids[0], &__jderobot__Pose3DData_ids[2]);
}

const ::std::string&
jderobot::Pose3DData::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DData_ids[1];
}

const ::std::string&
jderobot::Pose3DData::ice_staticId()
{
    return __jderobot__Pose3DData_ids[1];
}

void
jderobot::Pose3DData::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(x);
    __os->write(y);
    __os->write(z);
    __os->write(h);
    __os->write(q0);
    __os->write(q1);
    __os->write(q2);
    __os->write(q3);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
jderobot::Pose3DData::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(x);
    __is->read(y);
    __is->read(z);
    __is->read(h);
    __is->read(q0);
    __is->read(q1);
    __is->read(q2);
    __is->read(q3);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

// COMPILERFIX: Stream API is not supported with VC++ 6
#if !defined(_MSC_VER) || (_MSC_VER >= 1300)
void
jderobot::Pose3DData::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::Pose3DData was not generated with stream support";
    throw ex;
}

void
jderobot::Pose3DData::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::Pose3DData was not generated with stream support";
    throw ex;
}
#endif

class __F__jderobot__Pose3DData : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::jderobot::Pose3DData::ice_staticId());
        return new ::jderobot::Pose3DData;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__jderobot__Pose3DData_Ptr = new __F__jderobot__Pose3DData;

const ::Ice::ObjectFactoryPtr&
jderobot::Pose3DData::ice_factory()
{
    return __F__jderobot__Pose3DData_Ptr;
}

class __F__jderobot__Pose3DData__Init
{
public:

    __F__jderobot__Pose3DData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::Pose3DData::ice_staticId(), ::jderobot::Pose3DData::ice_factory());
    }

    ~__F__jderobot__Pose3DData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::Pose3DData::ice_staticId());
    }
};

static __F__jderobot__Pose3DData__Init __F__jderobot__Pose3DData__i;

#ifdef __APPLE__
extern "C" { void __F__jderobot__Pose3DData__initializer() {} }
#endif

void 
jderobot::__patch__Pose3DDataPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::jderobot::Pose3DDataPtr* p = static_cast< ::jderobot::Pose3DDataPtr*>(__addr);
    assert(p);
    *p = ::jderobot::Pose3DDataPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DData::ice_staticId(), v->ice_id());
    }
}

::Ice::ObjectPtr
jderobot::Pose3D::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __jderobot__Pose3D_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3D"
};

bool
jderobot::Pose3D::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3D_ids, __jderobot__Pose3D_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3D::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3D_ids[0], &__jderobot__Pose3D_ids[2]);
}

const ::std::string&
jderobot::Pose3D::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3D_ids[1];
}

const ::std::string&
jderobot::Pose3D::ice_staticId()
{
    return __jderobot__Pose3D_ids[1];
}

::Ice::DispatchStatus
jderobot::Pose3D::___getPose3DData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::jderobot::Pose3DDataPtr __ret = getPose3DData(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::Pose3D::___setPose3DData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::jderobot::Pose3DDataPtr data;
    __is->read(::jderobot::__patch__Pose3DDataPtr, &data);
    __is->readPendingObjects();
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = setPose3DData(data, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __jderobot__Pose3D_all[] =
{
    "getPose3DData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setPose3DData"
};

::Ice::DispatchStatus
jderobot::Pose3D::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__jderobot__Pose3D_all, __jderobot__Pose3D_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__Pose3D_all)
    {
        case 0:
        {
            return ___getPose3DData(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___setPose3DData(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::Pose3D::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
jderobot::Pose3D::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

// COMPILERFIX: Stream API is not supported with VC++ 6
#if !defined(_MSC_VER) || (_MSC_VER >= 1300)
void
jderobot::Pose3D::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::Pose3D was not generated with stream support";
    throw ex;
}

void
jderobot::Pose3D::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::Pose3D was not generated with stream support";
    throw ex;
}
#endif

void 
jderobot::__patch__Pose3DPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::jderobot::Pose3DPtr* p = static_cast< ::jderobot::Pose3DPtr*>(__addr);
    assert(p);
    *p = ::jderobot::Pose3DPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3D::ice_staticId(), v->ice_id());
    }
}
