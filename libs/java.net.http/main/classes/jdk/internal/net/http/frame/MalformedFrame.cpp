#include <jdk/internal/net/http/frame/MalformedFrame.h>
#include <jdk/internal/net/http/frame/ErrorFrame.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorFrame = ::jdk::internal::net::http::frame::ErrorFrame;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

void MalformedFrame::init$(int32_t errorCode, $String* msg) {
	MalformedFrame::init$(errorCode, 0, msg);
}

void MalformedFrame::init$(int32_t errorCode, int32_t errorStream, $String* msg) {
	$Http2Frame::init$(0, 0);
	this->errorCode = errorCode;
	this->errorStream = errorStream;
	$set(this, msg, msg);
}

$String* MalformedFrame::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Http2Frame::toString()));
	var$0->append(" MalformedFrame, Error: "_s);
	var$0->append($($ErrorFrame::stringForCode(this->errorCode)));
	var$0->append(" streamid: "_s);
	var$0->append(this->streamid$);
	var$0->append(" reason: "_s);
	var$0->append(this->msg);
	return $str(var$0);
}

int32_t MalformedFrame::getErrorCode() {
	return this->errorCode;
}

$String* MalformedFrame::getMessage() {
	return this->msg;
}

MalformedFrame::MalformedFrame() {
}

$Class* MalformedFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"errorCode", "I", nullptr, $PRIVATE, $field(MalformedFrame, errorCode)},
		{"errorStream", "I", nullptr, $PRIVATE, $field(MalformedFrame, errorStream)},
		{"msg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MalformedFrame, msg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedFrame, init$, void, int32_t, $String*)},
		{"<init>", "(IILjava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedFrame, init$, void, int32_t, int32_t, $String*)},
		{"getErrorCode", "()I", nullptr, $PUBLIC, $virtualMethod(MalformedFrame, getErrorCode, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedFrame, getMessage, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MalformedFrame, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.MalformedFrame",
		"jdk.internal.net.http.frame.Http2Frame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedFrame);
	});
	return class$;
}

$Class* MalformedFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk