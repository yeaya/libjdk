#include <sun/net/httpserver/SSLStreams$WrapperResult.h>

#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams$WrapperResult_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$WrapperResult, this$0)},
	{"result", "Ljavax/net/ssl/SSLEngineResult;", nullptr, 0, $field(SSLStreams$WrapperResult, result)},
	{"buf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$WrapperResult, buf)},
	{}
};

$MethodInfo _SSLStreams$WrapperResult_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/SSLStreams;)V", nullptr, 0, $method(static_cast<void(SSLStreams$WrapperResult::*)($SSLStreams*)>(&SSLStreams$WrapperResult::init$))},
	{}
};

$InnerClassInfo _SSLStreams$WrapperResult_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$WrapperResult", "sun.net.httpserver.SSLStreams", "WrapperResult", 0},
	{}
};

$ClassInfo _SSLStreams$WrapperResult_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.SSLStreams$WrapperResult",
	"java.lang.Object",
	nullptr,
	_SSLStreams$WrapperResult_FieldInfo_,
	_SSLStreams$WrapperResult_MethodInfo_,
	nullptr,
	nullptr,
	_SSLStreams$WrapperResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$WrapperResult($Class* clazz) {
	return $of($alloc(SSLStreams$WrapperResult));
}

void SSLStreams$WrapperResult::init$($SSLStreams* this$0) {
	$set(this, this$0, this$0);
}

SSLStreams$WrapperResult::SSLStreams$WrapperResult() {
}

$Class* SSLStreams$WrapperResult::load$($String* name, bool initialize) {
	$loadClass(SSLStreams$WrapperResult, name, initialize, &_SSLStreams$WrapperResult_ClassInfo_, allocate$SSLStreams$WrapperResult);
	return class$;
}

$Class* SSLStreams$WrapperResult::class$ = nullptr;

		} // httpserver
	} // net
} // sun