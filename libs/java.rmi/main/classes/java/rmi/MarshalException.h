#ifndef _java_rmi_MarshalException_h_
#define _java_rmi_MarshalException_h_
//$ class java.rmi.MarshalException
//$ extends java.rmi.RemoteException

#include <java/rmi/RemoteException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace rmi {

class $export MarshalException : public ::java::rmi::RemoteException {
	$class(MarshalException, $NO_CLASS_INIT, ::java::rmi::RemoteException)
public:
	MarshalException();
	void init$($String* s);
	void init$($String* s, ::java::lang::Exception* ex);
	static const int64_t serialVersionUID = (int64_t)0x565e821426c57db0;
	MarshalException(const MarshalException& e);
	virtual void throw$() override;
	inline MarshalException* operator ->() const {
		return (MarshalException*)throwing$;
	}
	inline operator MarshalException*() const {
		return (MarshalException*)throwing$;
	}
};

	} // rmi
} // java

#endif // _java_rmi_MarshalException_h_