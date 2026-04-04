#include <sun/rmi/transport/DGCAckHandler$1.h>
#include <java/rmi/server/UID.h>
#include <java/util/Map.h>
#include <sun/rmi/transport/DGCAckHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DGCAckHandler = ::sun::rmi::transport::DGCAckHandler;

namespace sun {
	namespace rmi {
		namespace transport {

void DGCAckHandler$1::init$($DGCAckHandler* this$0) {
	$set(this, this$0, this$0);
}

void DGCAckHandler$1::run() {
	if (this->this$0->id != nullptr) {
		$nc($DGCAckHandler::idTable)->remove(this->this$0->id);
	}
	this->this$0->release();
}

DGCAckHandler$1::DGCAckHandler$1() {
}

$Class* DGCAckHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/DGCAckHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DGCAckHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/DGCAckHandler;)V", nullptr, 0, $method(DGCAckHandler$1, init$, void, $DGCAckHandler*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DGCAckHandler$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.DGCAckHandler",
		"startTimer",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.DGCAckHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.DGCAckHandler$1",
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
		"sun.rmi.transport.DGCAckHandler"
	};
	$loadClass(DGCAckHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DGCAckHandler$1);
	});
	return class$;
}

$Class* DGCAckHandler$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun