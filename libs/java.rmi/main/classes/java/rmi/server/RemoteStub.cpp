#include <java/rmi/server/RemoteStub.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/rmi/server/RemoteObject.h>
#include <java/rmi/server/RemoteRef.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $RemoteObject = ::java::rmi::server::RemoteObject;
using $RemoteRef = ::java::rmi::server::RemoteRef;

namespace java {
	namespace rmi {
		namespace server {

void RemoteStub::init$() {
	$RemoteObject::init$();
}

void RemoteStub::init$($RemoteRef* ref) {
	$RemoteObject::init$(ref);
}

void RemoteStub::setRef(RemoteStub* stub, $RemoteRef* ref) {
	$init(RemoteStub);
	$throwNew($UnsupportedOperationException);
}

RemoteStub::RemoteStub() {
}

$Class* RemoteStub::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RemoteStub, serialVersionUID)},
		{}
	};
	$CompoundAttribute setRefmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(RemoteStub, init$, void)},
		{"<init>", "(Ljava/rmi/server/RemoteRef;)V", nullptr, $PROTECTED, $method(RemoteStub, init$, void, $RemoteRef*)},
		{"setRef", "(Ljava/rmi/server/RemoteStub;Ljava/rmi/server/RemoteRef;)V", nullptr, $PROTECTED | $STATIC | $DEPRECATED, $staticMethod(RemoteStub, setRef, void, RemoteStub*, $RemoteRef*), nullptr, nullptr, setRefmethodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.rmi.server.RemoteStub",
		"java.rmi.server.RemoteObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RemoteStub, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RemoteStub));
	});
	return class$;
}

$Class* RemoteStub::class$ = nullptr;

		} // server
	} // rmi
} // java