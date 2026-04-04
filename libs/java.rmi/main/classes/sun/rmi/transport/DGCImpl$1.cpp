#include <sun/rmi/transport/DGCImpl$1.h>
#include <sun/rmi/transport/DGCImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DGCImpl = ::sun::rmi::transport::DGCImpl;

namespace sun {
	namespace rmi {
		namespace transport {

void DGCImpl$1::init$($DGCImpl* this$0) {
	$set(this, this$0, this$0);
}

void DGCImpl$1::run() {
	this->this$0->checkLeases();
}

DGCImpl$1::DGCImpl$1() {
}

$Class* DGCImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/DGCImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DGCImpl$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/DGCImpl;)V", nullptr, 0, $method(DGCImpl$1, init$, void, $DGCImpl*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DGCImpl$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.DGCImpl",
		"dirty",
		"([Ljava/rmi/server/ObjID;JLjava/rmi/dgc/Lease;)Ljava/rmi/dgc/Lease;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCImpl$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.transport.DGCImpl"
	};
	$loadClass(DGCImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCImpl$1);
	});
	return class$;
}

$Class* DGCImpl$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun