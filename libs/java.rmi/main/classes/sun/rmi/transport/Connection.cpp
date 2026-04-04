#include <sun/rmi/transport/Connection.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <sun/rmi/transport/Channel.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::sun::rmi::transport::Channel;

namespace sun {
	namespace rmi {
		namespace transport {

$Class* Connection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, close, void), "java.io.IOException"},
		{"getChannel", "()Lsun/rmi/transport/Channel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getChannel, $Channel*)},
		{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getInputStream, $InputStream*), "java.io.IOException"},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, getOutputStream, $OutputStream*), "java.io.IOException"},
		{"isReusable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, isReusable, bool)},
		{"releaseInputStream", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, releaseInputStream, void), "java.io.IOException"},
		{"releaseOutputStream", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Connection, releaseOutputStream, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.rmi.transport.Connection",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Connection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Connection);
	});
	return class$;
}

$Class* Connection::class$ = nullptr;

		} // transport
	} // rmi
} // sun