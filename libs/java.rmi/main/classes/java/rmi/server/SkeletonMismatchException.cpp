#include <java/rmi/server/SkeletonMismatchException.h>
#include <java/rmi/RemoteException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;

namespace java {
	namespace rmi {
		namespace server {

void SkeletonMismatchException::init$($String* s) {
	$RemoteException::init$(s);
}

SkeletonMismatchException::SkeletonMismatchException() {
}

SkeletonMismatchException::SkeletonMismatchException(const SkeletonMismatchException& e) : $RemoteException(e) {
}

void SkeletonMismatchException::throw$() {
	throw *this;
}

$Class* SkeletonMismatchException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SkeletonMismatchException, serialVersionUID)},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(SkeletonMismatchException, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.rmi.server.SkeletonMismatchException",
		"java.rmi.RemoteException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SkeletonMismatchException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SkeletonMismatchException);
	});
	return class$;
}

$Class* SkeletonMismatchException::class$ = nullptr;

		} // server
	} // rmi
} // java