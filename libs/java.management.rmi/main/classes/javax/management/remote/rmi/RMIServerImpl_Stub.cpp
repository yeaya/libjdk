#include <javax/management/remote/rmi/RMIServerImpl_Stub.h>
#include <java/io/IOException.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/UnexpectedException.h>
#include <java/rmi/server/RemoteObject.h>
#include <java/rmi/server/RemoteRef.h>
#include <java/rmi/server/RemoteStub.h>
#include <javax/management/remote/rmi/RMIConnection.h>
#include <javax/management/remote/rmi/RMIServer.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $RemoteException = ::java::rmi::RemoteException;
using $UnexpectedException = ::java::rmi::UnexpectedException;
using $RemoteRef = ::java::rmi::server::RemoteRef;
using $RemoteStub = ::java::rmi::server::RemoteStub;
using $RMIConnection = ::javax::management::remote::rmi::RMIConnection;
using $RMIServer = ::javax::management::remote::rmi::RMIServer;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

int32_t RMIServerImpl_Stub::hashCode() {
	 return this->$RemoteStub::hashCode();
}

bool RMIServerImpl_Stub::equals(Object$* arg0) {
	 return this->$RemoteStub::equals(arg0);
}

$String* RMIServerImpl_Stub::toString() {
	 return this->$RemoteStub::toString();
}

$Object* RMIServerImpl_Stub::clone() {
	 return this->$RemoteStub::clone();
}

void RMIServerImpl_Stub::finalize() {
	this->$RemoteStub::finalize();
}

$Method* RMIServerImpl_Stub::$method_getVersion_0 = nullptr;
$Method* RMIServerImpl_Stub::$method_newClient_1 = nullptr;

void RMIServerImpl_Stub::init$($RemoteRef* ref) {
	$RemoteStub::init$(ref);
}

$String* RMIServerImpl_Stub::getVersion() {
	try {
		$var($Object, $result, $nc(this->ref)->invoke($cast($RemoteStub, this), RMIServerImpl_Stub::$method_getVersion_0, nullptr, (int64_t)0x8fda2350c701988d));
		return $cast($String, $result);
	} catch ($RuntimeException& e) {
		$throw(e);
	} catch ($RemoteException& e) {
		$throw(e);
	} catch ($Exception& e) {
		$throwNew($UnexpectedException, "undeclared checked exception"_s, e);
	}
	$shouldNotReachHere();
}

$RMIConnection* RMIServerImpl_Stub::newClient(Object$* $param_Object_1) {
	$useLocalObjectStack();
	try {
		$var($Object, $result, $nc(this->ref)->invoke($cast($RemoteStub, this), RMIServerImpl_Stub::$method_newClient_1, $$new($ObjectArray, {$param_Object_1}), (int64_t)0xf0e074eaad0caea8));
		return $cast($RMIConnection, $result);
	} catch ($RuntimeException& e) {
		$throw(e);
	} catch ($IOException& e) {
		$throw(e);
	} catch ($Exception& e) {
		$throwNew($UnexpectedException, "undeclared checked exception"_s, e);
	}
	$shouldNotReachHere();
}

void RMIServerImpl_Stub::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		try {
			$load($RMIServer);
			$assignStatic(RMIServerImpl_Stub::$method_getVersion_0, $RMIServer::class$->getMethod("getVersion"_s, $$new($ClassArray, 0)));
			$assignStatic(RMIServerImpl_Stub::$method_newClient_1, $RMIServer::class$->getMethod("newClient"_s, $$new($ClassArray, {$Object::class$})));
		} catch ($NoSuchMethodException& e) {
			$throwNew($NoSuchMethodError, "stub class initialization failed"_s);
		}
	}
}

RMIServerImpl_Stub::RMIServerImpl_Stub() {
}

$Class* RMIServerImpl_Stub::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RMIServerImpl_Stub, serialVersionUID)},
		{"$method_getVersion_0", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(RMIServerImpl_Stub, $method_getVersion_0)},
		{"$method_newClient_1", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(RMIServerImpl_Stub, $method_newClient_1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/rmi/server/RemoteRef;)V", nullptr, $PUBLIC, $method(RMIServerImpl_Stub, init$, void, $RemoteRef*)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RMIServerImpl_Stub, getVersion, $String*), "java.rmi.RemoteException"},
		{"newClient", "(Ljava/lang/Object;)Ljavax/management/remote/rmi/RMIConnection;", nullptr, $PUBLIC, $virtualMethod(RMIServerImpl_Stub, newClient, $RMIConnection*, Object$*), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.management.remote.rmi.RMIServerImpl_Stub",
		"java.rmi.server.RemoteStub",
		"javax.management.remote.rmi.RMIServer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RMIServerImpl_Stub, name, initialize, &classInfo$$, RMIServerImpl_Stub::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RMIServerImpl_Stub));
	});
	return class$;
}

$Class* RMIServerImpl_Stub::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax