#include <sun/rmi/transport/tcp/TCPChannel$1.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/transport/tcp/TCPChannel.h>
#include <sun/rmi/transport/tcp/TCPTransport.h>
#include <jcpp.h>

#undef VERBOSE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Log = ::sun::rmi::runtime::Log;
using $TCPChannel = ::sun::rmi::transport::tcp::TCPChannel;
using $TCPTransport = ::sun::rmi::transport::tcp::TCPTransport;

namespace sun {
	namespace rmi {
		namespace transport {
			namespace tcp {

void TCPChannel$1::init$($TCPChannel* this$0) {
	$set(this, this$0, this$0);
}

void TCPChannel$1::run() {
	$init($TCPTransport);
	$init($Log);
	$nc($TCPTransport::tcpLog)->log($Log::VERBOSE, "wake up"_s);
	this->this$0->freeCachedConnections();
}

TCPChannel$1::TCPChannel$1() {
}

$Class* TCPChannel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/transport/tcp/TCPChannel;", nullptr, $FINAL | $SYNTHETIC, $field(TCPChannel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/tcp/TCPChannel;)V", nullptr, 0, $method(TCPChannel$1, init$, void, $TCPChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TCPChannel$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.transport.tcp.TCPChannel",
		"free",
		"(Lsun/rmi/transport/Connection;Z)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.transport.tcp.TCPChannel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.tcp.TCPChannel$1",
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
		"sun.rmi.transport.tcp.TCPChannel"
	};
	$loadClass(TCPChannel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TCPChannel$1);
	});
	return class$;
}

$Class* TCPChannel$1::class$ = nullptr;

			} // tcp
		} // transport
	} // rmi
} // sun