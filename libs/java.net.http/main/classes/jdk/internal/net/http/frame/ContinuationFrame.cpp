#include <jdk/internal/net/http/frame/ContinuationFrame.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/frame/HeaderFrame.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $HeaderFrame = ::jdk::internal::net::http::frame::HeaderFrame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

void ContinuationFrame::init$(int32_t streamid, int32_t flags, $List* headerBlocks) {
	$HeaderFrame::init$(streamid, flags, headerBlocks);
}

void ContinuationFrame::init$(int32_t streamid, $ByteBuffer* headersBlock) {
	ContinuationFrame::init$(streamid, 0, $($List::of(headersBlock)));
}

int32_t ContinuationFrame::type() {
	return ContinuationFrame::TYPE;
}

int32_t ContinuationFrame::length() {
	return this->headerLength;
}

ContinuationFrame::ContinuationFrame() {
}

$Class* ContinuationFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContinuationFrame, TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/util/List;)V", "(IILjava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(ContinuationFrame, init$, void, int32_t, int32_t, $List*)},
		{"<init>", "(ILjava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(ContinuationFrame, init$, void, int32_t, $ByteBuffer*)},
		{"length", "()I", nullptr, 0, $virtualMethod(ContinuationFrame, length, int32_t)},
		{"type", "()I", nullptr, $PUBLIC, $virtualMethod(ContinuationFrame, type, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.frame.ContinuationFrame",
		"jdk.internal.net.http.frame.HeaderFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ContinuationFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContinuationFrame);
	});
	return class$;
}

$Class* ContinuationFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk