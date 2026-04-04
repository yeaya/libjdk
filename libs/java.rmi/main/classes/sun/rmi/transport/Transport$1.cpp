#include <sun/rmi/transport/Transport$1.h>
#include <java/rmi/Remote.h>
#include <java/rmi/server/RemoteCall.h>
#include <java/security/AccessControlContext.h>
#include <sun/rmi/server/Dispatcher.h>
#include <sun/rmi/transport/Transport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Remote = ::java::rmi::Remote;
using $RemoteCall = ::java::rmi::server::RemoteCall;
using $AccessControlContext = ::java::security::AccessControlContext;
using $Dispatcher = ::sun::rmi::server::Dispatcher;
using $Transport = ::sun::rmi::transport::Transport;

namespace sun {
	namespace rmi {
		namespace transport {

void Transport$1::init$($Transport* this$0, $AccessControlContext* val$acc, $Dispatcher* val$disp, $Remote* val$impl, $RemoteCall* val$call) {
	$set(this, this$0, this$0);
	$set(this, val$acc, val$acc);
	$set(this, val$disp, val$disp);
	$set(this, val$impl, val$impl);
	$set(this, val$call, val$call);
}

$Object* Transport$1::run() {
	this->this$0->checkAcceptPermission(this->val$acc);
	$nc(this->val$disp)->dispatch(this->val$impl, this->val$call);
	return nullptr;
}

Transport$1::Transport$1() {
}

$Class* Transport$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/Transport;", nullptr, $FINAL | $SYNTHETIC, $field(Transport$1, this$0)},
		{"val$call", "Ljava/rmi/server/RemoteCall;", nullptr, $FINAL | $SYNTHETIC, $field(Transport$1, val$call)},
		{"val$impl", "Ljava/rmi/Remote;", nullptr, $FINAL | $SYNTHETIC, $field(Transport$1, val$impl)},
		{"val$disp", "Lsun/rmi/server/Dispatcher;", nullptr, $FINAL | $SYNTHETIC, $field(Transport$1, val$disp)},
		{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(Transport$1, val$acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/Transport;Ljava/security/AccessControlContext;Lsun/rmi/server/Dispatcher;Ljava/rmi/Remote;Ljava/rmi/server/RemoteCall;)V", "()V", 0, $method(Transport$1, init$, void, $Transport*, $AccessControlContext*, $Dispatcher*, $Remote*, $RemoteCall*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Transport$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.Transport",
		"serviceCall",
		"(Ljava/rmi/server/RemoteCall;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.Transport$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.Transport$1",
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
		"sun.rmi.transport.Transport"
	};
	$loadClass(Transport$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transport$1);
	});
	return class$;
}

$Class* Transport$1::class$ = nullptr;

		} // transport
	} // rmi
} // sun