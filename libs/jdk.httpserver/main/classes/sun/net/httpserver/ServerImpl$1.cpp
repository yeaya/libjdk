#include <sun/net/httpserver/ServerImpl$1.h>

#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$1, this$0)},
	{}
};

$MethodInfo _ServerImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;)V", nullptr, 0, $method(static_cast<void(ServerImpl$1::*)($ServerImpl*)>(&ServerImpl$1::init$))},
	{"run", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServerImpl$1_EnclosingMethodInfo_ = {
	"sun.net.httpserver.ServerImpl",
	"getAddress",
	"()Ljava/net/InetSocketAddress;"
};

$InnerClassInfo _ServerImpl$1_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServerImpl$1_FieldInfo_,
	_ServerImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/InetSocketAddress;>;",
	&_ServerImpl$1_EnclosingMethodInfo_,
	_ServerImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$1($Class* clazz) {
	return $of($alloc(ServerImpl$1));
}

void ServerImpl$1::init$($ServerImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* ServerImpl$1::run() {
	return $of($cast($InetSocketAddress, $nc($($nc(this->this$0->schan)->socket()))->getLocalSocketAddress()));
}

ServerImpl$1::ServerImpl$1() {
}

$Class* ServerImpl$1::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$1, name, initialize, &_ServerImpl$1_ClassInfo_, allocate$ServerImpl$1);
	return class$;
}

$Class* ServerImpl$1::class$ = nullptr;

		} // httpserver
	} // net
} // sun