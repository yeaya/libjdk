#include <java/rmi/server/SkeletonNotFoundException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {
		namespace server {

void SkeletonNotFoundException::init$($String* s) {
	$RemoteException::init$(s);
}

void SkeletonNotFoundException::init$($String* s, $Exception* ex) {
	$RemoteException::init$(s, ex);
}

SkeletonNotFoundException::SkeletonNotFoundException() {
}

SkeletonNotFoundException::SkeletonNotFoundException(const SkeletonNotFoundException& e) : $RemoteException(e) {
}

void SkeletonNotFoundException::throw$() {
	throw *this;
}

$Class* SkeletonNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SkeletonNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SkeletonNotFoundException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(SkeletonNotFoundException, init$, void, $String*, $Exception*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.SkeletonNotFoundException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SkeletonNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SkeletonNotFoundException);
	});
	return class$;
}

$Class* SkeletonNotFoundException::class$ = nullptr;

		} // server
	} // rmi
} // java