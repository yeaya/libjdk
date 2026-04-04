#include <sun/rmi/registry/RegistryImpl$5.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegistryImpl = ::sun::rmi::registry::RegistryImpl;

namespace sun {
	namespace rmi {
		namespace registry {

void RegistryImpl$5::init$(int32_t val$regPort) {
	this->val$regPort = val$regPort;
}

$Object* RegistryImpl$5::run() {
	return $of($new($RegistryImpl, this->val$regPort));
}

RegistryImpl$5::RegistryImpl$5() {
}

$Class* RegistryImpl$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$regPort", "I", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$5, val$regPort)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(RegistryImpl$5, init$, void, int32_t)},
		{"run", "()Lsun/rmi/registry/RegistryImpl;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$5, run, $Object*), "java.rmi.RemoteException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"createRegistry",
		"(I)Lsun/rmi/registry/RegistryImpl;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$5",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Lsun/rmi/registry/RegistryImpl;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$5);
	});
	return class$;
}

$Class* RegistryImpl$5::class$ = nullptr;

		} // registry
	} // rmi
} // sun