#include <jdk/internal/net/http/frame/ResetFrame.h>
#include <jdk/internal/net/http/frame/ErrorFrame.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorFrame = ::jdk::internal::net::http::frame::ErrorFrame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

void ResetFrame::init$(int32_t streamid, int32_t errorCode) {
	$ErrorFrame::init$(streamid, 0, errorCode);
}

int32_t ResetFrame::type() {
	return ResetFrame::TYPE;
}

int32_t ResetFrame::length() {
	return 4;
}

ResetFrame::ResetFrame() {
}

$Class* ResetFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResetFrame, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(ResetFrame, init$, void, int32_t, int32_t)},
		{"length", "()I", nullptr, 0, $virtualMethod(ResetFrame, length, int32_t)},
		{"type", "()I", nullptr, $PUBLIC, $virtualMethod(ResetFrame, type, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.ResetFrame",
		"jdk.internal.net.http.frame.ErrorFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResetFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResetFrame);
	});
	return class$;
}

$Class* ResetFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk