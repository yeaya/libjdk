#include <java/rmi/server/RemoteRef.h>
#include <java/io/ObjectOutput.h>
#include <java/lang/reflect/Method.h>
#include <java/rmi/Remote.h>
#include <java/rmi/server/Operation.h>
#include <java/rmi/server/RemoteCall.h>
#include <java/rmi/server/RemoteObject.h>
#include <jcpp.h>

using $OperationArray = $Array<::java::rmi::server::Operation>;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Remote = ::java::rmi::Remote;
using $RemoteCall = ::java::rmi::server::RemoteCall;
using $RemoteObject = ::java::rmi::server::RemoteObject;

namespace java {
	namespace rmi {
		namespace server {

$String* RemoteRef::packagePrefix = nullptr;

void RemoteRef::clinit$($Class* clazz) {
	$assignStatic(RemoteRef::packagePrefix, "sun.rmi.server"_s);
}

$Class* RemoteRef::load$($String* name, bool initialize) {
	$CompoundAttribute serialVersionUIDfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(RemoteRef, serialVersionUID), serialVersionUIDfieldAnnotations$$},
		{"packagePrefix", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RemoteRef, packagePrefix)},
		{}
	};
	$CompoundAttribute donemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute invokemethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute newCallmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"done", "(Ljava/rmi/server/RemoteCall;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteRef, done, void, $RemoteCall*), "java.rmi.RemoteException", nullptr, donemethodAnnotations$$},
		{"getRefClass", "(Ljava/io/ObjectOutput;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RemoteRef, getRefClass, $String*, $ObjectOutput*)},
		{"invoke", "(Ljava/rmi/Remote;Ljava/lang/reflect/Method;[Ljava/lang/Object;J)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RemoteRef, invoke, $Object*, $Remote*, $Method*, $ObjectArray*, int64_t), "java.lang.Exception"},
		{"invoke", "(Ljava/rmi/server/RemoteCall;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteRef, invoke, void, $RemoteCall*), "java.lang.Exception", nullptr, invokemethodAnnotations$$$1},
		{"newCall", "(Ljava/rmi/server/RemoteObject;[Ljava/rmi/server/Operation;IJ)Ljava/rmi/server/RemoteCall;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteRef, newCall, $RemoteCall*, $RemoteObject*, $OperationArray*, int32_t, int64_t), "java.rmi.RemoteException", nullptr, newCallmethodAnnotations$$},
		{"remoteEquals", "(Ljava/rmi/server/RemoteRef;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RemoteRef, remoteEquals, bool, RemoteRef*)},
		{"remoteHashCode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RemoteRef, remoteHashCode, int32_t)},
		{"remoteToString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RemoteRef, remoteToString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.RemoteRef",
		nullptr,
		"java.io.Externalizable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RemoteRef, name, initialize, &classInfo$$, RemoteRef::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RemoteRef);
	});
	return class$;
}

$Class* RemoteRef::class$ = nullptr;

		} // server
	} // rmi
} // java