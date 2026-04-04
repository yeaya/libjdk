#include <jdk/internal/net/http/frame/WindowUpdateFrame.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

void WindowUpdateFrame::init$(int32_t streamid, int32_t windowUpdate) {
	$Http2Frame::init$(streamid, 0);
	this->windowUpdate = windowUpdate;
}

int32_t WindowUpdateFrame::type() {
	return WindowUpdateFrame::TYPE;
}

int32_t WindowUpdateFrame::length() {
	return 4;
}

$String* WindowUpdateFrame::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Http2Frame::toString()))->append(" WindowUpdate: "_s)->append(this->windowUpdate);
	return sb->toString();
}

int32_t WindowUpdateFrame::getUpdate() {
	return this->windowUpdate;
}

WindowUpdateFrame::WindowUpdateFrame() {
}

$Class* WindowUpdateFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"windowUpdate", "I", nullptr, $PRIVATE | $FINAL, $field(WindowUpdateFrame, windowUpdate)},
		{"TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowUpdateFrame, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(WindowUpdateFrame, init$, void, int32_t, int32_t)},
		{"getUpdate", "()I", nullptr, $PUBLIC, $virtualMethod(WindowUpdateFrame, getUpdate, int32_t)},
		{"length", "()I", nullptr, 0, $virtualMethod(WindowUpdateFrame, length, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowUpdateFrame, toString, $String*)},
		{"type", "()I", nullptr, $PUBLIC, $virtualMethod(WindowUpdateFrame, type, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.WindowUpdateFrame",
		"jdk.internal.net.http.frame.Http2Frame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowUpdateFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowUpdateFrame);
	});
	return class$;
}

$Class* WindowUpdateFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk