#include <sun/rmi/server/MarshalOutputStream$1.h>
#include <sun/rmi/server/MarshalOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MarshalOutputStream = ::sun::rmi::server::MarshalOutputStream;

namespace sun {
	namespace rmi {
		namespace server {

void MarshalOutputStream$1::init$($MarshalOutputStream* this$0) {
	$set(this, this$0, this$0);
}

$Object* MarshalOutputStream$1::run() {
	$MarshalOutputStream::access$000(this->this$0, true);
	return nullptr;
}

MarshalOutputStream$1::MarshalOutputStream$1() {
}

$Class* MarshalOutputStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/server/MarshalOutputStream;", nullptr, $FINAL | $SYNTHETIC, $field(MarshalOutputStream$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/server/MarshalOutputStream;)V", nullptr, 0, $method(MarshalOutputStream$1, init$, void, $MarshalOutputStream*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(MarshalOutputStream$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.server.MarshalOutputStream",
		"<init>",
		"(Ljava/io/OutputStream;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.MarshalOutputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.MarshalOutputStream$1",
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
		"sun.rmi.server.MarshalOutputStream"
	};
	$loadClass(MarshalOutputStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarshalOutputStream$1);
	});
	return class$;
}

$Class* MarshalOutputStream$1::class$ = nullptr;

		} // server
	} // rmi
} // sun