#include <sun/rmi/registry/RegistryImpl$1.h>
#include <java/io/ObjectInputFilter.h>
#include <java/rmi/server/ObjID.h>
#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/rmi/server/RMIServerSocketFactory.h>
#include <sun/rmi/registry/RegistryImpl.h>
#include <sun/rmi/server/UnicastServerRef2.h>
#include <sun/rmi/transport/LiveRef.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIClientSocketFactory = ::java::rmi::server::RMIClientSocketFactory;
using $RMIServerSocketFactory = ::java::rmi::server::RMIServerSocketFactory;
using $RegistryImpl = ::sun::rmi::registry::RegistryImpl;
using $UnicastServerRef2 = ::sun::rmi::server::UnicastServerRef2;
using $LiveRef = ::sun::rmi::transport::LiveRef;

namespace sun {
	namespace rmi {
		namespace registry {

void RegistryImpl$1::init$($RegistryImpl* this$0, int32_t val$port, $RMIClientSocketFactory* val$csf, $RMIServerSocketFactory* val$ssf, $ObjectInputFilter* val$serialFilter) {
	$set(this, this$0, this$0);
	this->val$port = val$port;
	$set(this, val$csf, val$csf);
	$set(this, val$ssf, val$ssf);
	$set(this, val$serialFilter, val$serialFilter);
}

$Object* RegistryImpl$1::run() {
	$useLocalObjectStack();
	$init($RegistryImpl);
	$var($LiveRef, lref, $new($LiveRef, $RegistryImpl::id, this->val$port, this->val$csf, this->val$ssf));
	this->this$0->setup($$new($UnicastServerRef2, lref, this->val$serialFilter));
	return nullptr;
}

RegistryImpl$1::RegistryImpl$1() {
}

$Class* RegistryImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/registry/RegistryImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$1, this$0)},
		{"val$serialFilter", "Ljava/io/ObjectInputFilter;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$1, val$serialFilter)},
		{"val$ssf", "Ljava/rmi/server/RMIServerSocketFactory;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$1, val$ssf)},
		{"val$csf", "Ljava/rmi/server/RMIClientSocketFactory;", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$1, val$csf)},
		{"val$port", "I", nullptr, $FINAL | $SYNTHETIC, $field(RegistryImpl$1, val$port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/registry/RegistryImpl;ILjava/rmi/server/RMIClientSocketFactory;Ljava/rmi/server/RMIServerSocketFactory;Ljava/io/ObjectInputFilter;)V", "()V", 0, $method(RegistryImpl$1, init$, void, $RegistryImpl*, int32_t, $RMIClientSocketFactory*, $RMIServerSocketFactory*, $ObjectInputFilter*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(RegistryImpl$1, run, $Object*), "java.rmi.RemoteException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.registry.RegistryImpl",
		"<init>",
		"(ILjava/rmi/server/RMIClientSocketFactory;Ljava/rmi/server/RMIServerSocketFactory;Ljava/io/ObjectInputFilter;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.registry.RegistryImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.registry.RegistryImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.registry.RegistryImpl"
	};
	$loadClass(RegistryImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RegistryImpl$1);
	});
	return class$;
}

$Class* RegistryImpl$1::class$ = nullptr;

		} // registry
	} // rmi
} // sun