#ifndef _java_rmi_UnknownHostException_h_
#define _java_rmi_UnknownHostException_h_
//$ class java.rmi.UnknownHostException
//$ extends java.rmi.RemoteException

#include <java/rmi/RemoteException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace rmi {

class $export UnknownHostException : public ::java::rmi::RemoteException {
	$class(UnknownHostException, $NO_CLASS_INIT, ::java::rmi::RemoteException)
public:
	UnknownHostException();
	void init$($String* s);
	void init$($String* s, ::java::lang::Exception* ex);
	static const int64_t serialVersionUID = (int64_t)0x8edbc1399086994c;
	UnknownHostException(const UnknownHostException& e);
	virtual void throw$() override;
	inline UnknownHostException* operator ->() const {
		return (UnknownHostException*)throwing$;
	}
	inline operator UnknownHostException*() const {
		return (UnknownHostException*)throwing$;
	}
};

	} // rmi
} // java

#endif // _java_rmi_UnknownHostException_h_