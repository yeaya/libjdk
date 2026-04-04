#include <javax/management/remote/rmi/RMIConnectionImpl$RMIServerCommunicatorAdmin.h>
#include <com/sun/jmx/remote/internal/ServerCommunicatorAdmin.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/io/IOException.h>
#include <javax/management/remote/rmi/RMIConnectionImpl.h>
#include <jcpp.h>

using $ServerCommunicatorAdmin = ::com::sun::jmx::remote::internal::ServerCommunicatorAdmin;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RMIConnectionImpl = ::javax::management::remote::rmi::RMIConnectionImpl;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnectionImpl$RMIServerCommunicatorAdmin::init$($RMIConnectionImpl* this$0, int64_t timeout) {
	$set(this, this$0, this$0);
	$ServerCommunicatorAdmin::init$(timeout);
}

void RMIConnectionImpl$RMIServerCommunicatorAdmin::doStop() {
	try {
		this->this$0->close();
	} catch ($IOException& ie) {
		$init($RMIConnectionImpl);
		$nc($RMIConnectionImpl::logger)->warning("RMIServerCommunicatorAdmin-doStop"_s, $$str({"Failed to close: "_s, ie}));
		$RMIConnectionImpl::logger->debug("RMIServerCommunicatorAdmin-doStop"_s, ie);
	}
}

RMIConnectionImpl$RMIServerCommunicatorAdmin::RMIConnectionImpl$RMIServerCommunicatorAdmin() {
}

$Class* RMIConnectionImpl$RMIServerCommunicatorAdmin::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/management/remote/rmi/RMIConnectionImpl;", nullptr, $FINAL | $SYNTHETIC, $field(RMIConnectionImpl$RMIServerCommunicatorAdmin, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/remote/rmi/RMIConnectionImpl;J)V", nullptr, $PUBLIC, $method(RMIConnectionImpl$RMIServerCommunicatorAdmin, init$, void, $RMIConnectionImpl*, int64_t)},
		{"doStop", "()V", nullptr, $PROTECTED, $virtualMethod(RMIConnectionImpl$RMIServerCommunicatorAdmin, doStop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnectionImpl$RMIServerCommunicatorAdmin", "javax.management.remote.rmi.RMIConnectionImpl", "RMIServerCommunicatorAdmin", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.RMIConnectionImpl$RMIServerCommunicatorAdmin",
		"com.sun.jmx.remote.internal.ServerCommunicatorAdmin",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnectionImpl"
	};
	$loadClass(RMIConnectionImpl$RMIServerCommunicatorAdmin, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnectionImpl$RMIServerCommunicatorAdmin);
	});
	return class$;
}

$Class* RMIConnectionImpl$RMIServerCommunicatorAdmin::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax