#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;

namespace sun {
	namespace net {
		namespace httpserver {

void SSLStreams$WrapperResult::init$($SSLStreams* this$0) {
	$set(this, this$0, this$0);
}

SSLStreams$WrapperResult::SSLStreams$WrapperResult() {
}

$Class* SSLStreams$WrapperResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$WrapperResult, this$0)},
		{"result", "Ljavax/net/ssl/SSLEngineResult;", nullptr, 0, $field(SSLStreams$WrapperResult, result)},
		{"buf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$WrapperResult, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/SSLStreams;)V", nullptr, 0, $method(SSLStreams$WrapperResult, init$, void, $SSLStreams*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.SSLStreams$WrapperResult", "sun.net.httpserver.SSLStreams", "WrapperResult", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.SSLStreams$WrapperResult",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.SSLStreams"
	};
	$loadClass(SSLStreams$WrapperResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLStreams$WrapperResult);
	});
	return class$;
}

$Class* SSLStreams$WrapperResult::class$ = nullptr;

		} // httpserver
	} // net
} // sun