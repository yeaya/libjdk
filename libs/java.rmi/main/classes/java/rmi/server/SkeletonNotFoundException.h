#ifndef _java_rmi_server_SkeletonNotFoundException_h_
#define _java_rmi_server_SkeletonNotFoundException_h_
//$ class java.rmi.server.SkeletonNotFoundException
//$ extends java.rmi.RemoteException

#include <java/rmi/RemoteException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace java {
	namespace rmi {
		namespace server {

class $export SkeletonNotFoundException : public ::java::rmi::RemoteException {
	$class(SkeletonNotFoundException, $NO_CLASS_INIT, ::java::rmi::RemoteException)
public:
	SkeletonNotFoundException();
	void init$($String* s);
	void init$($String* s, ::java::lang::Exception* ex);
	static const int64_t serialVersionUID = (int64_t)0x92ea9b17a1aceef1;
	SkeletonNotFoundException(const SkeletonNotFoundException& e);
	virtual void throw$() override;
	inline SkeletonNotFoundException* operator ->() const {
		return (SkeletonNotFoundException*)throwing$;
	}
	inline operator SkeletonNotFoundException*() const {
		return (SkeletonNotFoundException*)throwing$;
	}
};

		} // server
	} // rmi
} // java

#endif // _java_rmi_server_SkeletonNotFoundException_h_