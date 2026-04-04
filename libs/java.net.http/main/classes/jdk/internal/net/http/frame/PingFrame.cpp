#include <jdk/internal/net/http/frame/PingFrame.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

#undef ACK
#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

bool PingFrame::$assertionsDisabled = false;

void PingFrame::init$(int32_t flags, $bytes* data) {
	$Http2Frame::init$(0, flags);
	if (!PingFrame::$assertionsDisabled && !($nc(data)->length == 8)) {
		$throwNew($AssertionError);
	}
	$set(this, data, $cast($bytes, $nc(data)->clone()));
}

int32_t PingFrame::type() {
	return PingFrame::TYPE;
}

int32_t PingFrame::length() {
	return 8;
}

$String* PingFrame::flagAsString(int32_t flag) {
	$var($String, var$0, nullptr);
	switch (flag) {
	case PingFrame::ACK:
		$assign(var$0, "ACK"_s);
		break;
	default:
		$assign(var$0, $Http2Frame::flagAsString(flag));
		break;
	}
	return var$0;
}

$bytes* PingFrame::getData() {
	return $cast($bytes, $nc(this->data)->clone());
}

void PingFrame::clinit$($Class* clazz) {
	PingFrame::$assertionsDisabled = !PingFrame::class$->desiredAssertionStatus();
}

PingFrame::PingFrame() {
}

$Class* PingFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PingFrame, $assertionsDisabled)},
		{"data", "[B", nullptr, $PRIVATE | $FINAL, $field(PingFrame, data)},
		{"TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PingFrame, TYPE)},
		{"ACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PingFrame, ACK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(PingFrame, init$, void, int32_t, $bytes*)},
		{"flagAsString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PingFrame, flagAsString, $String*, int32_t)},
		{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(PingFrame, getData, $bytes*)},
		{"length", "()I", nullptr, 0, $virtualMethod(PingFrame, length, int32_t)},
		{"type", "()I", nullptr, $PUBLIC, $virtualMethod(PingFrame, type, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.PingFrame",
		"jdk.internal.net.http.frame.Http2Frame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PingFrame, name, initialize, &classInfo$$, PingFrame::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PingFrame);
	});
	return class$;
}

$Class* PingFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk