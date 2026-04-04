#ifndef _java_rmi_StubNotFoundException_h_
#define _java_rmi_StubNotFoundException_h_
//$ class java.rmi.StubNotFoundException
//$ extends java.rmi.RemoteException

#include <java/rmi/RemoteException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace rmi {

class $import StubNotFoundException : public ::java::rmi::RemoteException {
	$class(StubNotFoundException, $NO_CLASS_INIT, ::java::rmi::RemoteException)
public:
	StubNotFoundException();
	void init$($String* s);
	void init$($String* s, ::java::lang::Exception* ex);
	static const int64_t serialVersionUID = (int64_t)0x9da1a83213e4914b;
	StubNotFoundException(const StubNotFoundException& e);
	virtual void throw$() override;
	inline StubNotFoundException* operator ->() const {
		return (StubNotFoundException*)throwing$;
	}
	inline operator StubNotFoundException*() const {
		return (StubNotFoundException*)throwing$;
	}
};

	} // rmi
} // java

#endif // _java_rmi_StubNotFoundException_h_