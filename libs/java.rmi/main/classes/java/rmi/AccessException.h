#ifndef _java_rmi_AccessException_h_
#define _java_rmi_AccessException_h_
//$ class java.rmi.AccessException
//$ extends java.rmi.RemoteException

#include <java/rmi/RemoteException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace rmi {

class $export AccessException : public ::java::rmi::RemoteException {
	$class(AccessException, $NO_CLASS_INIT, ::java::rmi::RemoteException)
public:
	AccessException();
	void init$($String* s);
	void init$($String* s, ::java::lang::Exception* ex);
	static const int64_t serialVersionUID = (int64_t)0x57a31f0978c5d8c8;
	AccessException(const AccessException& e);
	virtual void throw$() override;
	inline AccessException* operator ->() const {
		return (AccessException*)throwing$;
	}
	inline operator AccessException*() const {
		return (AccessException*)throwing$;
	}
};

	} // rmi
} // java

#endif // _java_rmi_AccessException_h_