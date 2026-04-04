#include <sun/rmi/transport/DGCClient$EndpointEntry$1.h>
#include <sun/rmi/transport/DGCClient$EndpointEntry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DGCClient$EndpointEntry = ::sun::rmi::transport::DGCClient$EndpointEntry;

namespace sun {
	namespace rmi {
		namespace transport {

void DGCClient$EndpointEntry$1::init$($DGCClient$EndpointEntry* this$0) {
	$set(this, this$0, this$0);
}

$Object* DGCClient$EndpointEntry$1::run() {
	$nc(this->this$0->renewCleanThread)->interrupt();
	return nullptr;
}

DGCClient$EndpointEntry$1::DGCClient$EndpointEntry$1() {
}

$Class* DGCClient$EndpointEntry$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/DGCClient$EndpointEntry;", nullptr, $FINAL | $SYNTHETIC, $field(DGCClient$EndpointEntry$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/DGCClient$EndpointEntry;)V", nullptr, 0, $method(DGCClient$EndpointEntry$1, init$, void, $DGCClient$EndpointEntry*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DGCClient$EndpointEntry$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.DGCClient$EndpointEntry",
		"setRenewTime",
		"(J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCClient$EndpointEntry", "sun.rmi.transport.DGCClient", "EndpointEntry", $PRIVATE | $STATIC},
		{"sun.rmi.transport.DGCClient$EndpointEntry$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCClient$EndpointEntry$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.DGCClient"
	};
	$loadClass(DGCClient$EndpointEntry$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCClient$EndpointEntry$1);
	});
	return class$;
}

$Class* DGCClient$EndpointEntry$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun