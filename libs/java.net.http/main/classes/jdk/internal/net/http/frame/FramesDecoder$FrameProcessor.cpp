#include <jdk/internal/net/http/frame/FramesDecoder$FrameProcessor.h>
#include <jdk/internal/net/http/frame/FramesDecoder.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

$Class* FramesDecoder$FrameProcessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"processFrame", "(Ljdk/internal/net/http/frame/Http2Frame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FramesDecoder$FrameProcessor, processFrame, void, $Http2Frame*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.frame.FramesDecoder$FrameProcessor", "jdk.internal.net.http.frame.FramesDecoder", "FrameProcessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.frame.FramesDecoder$FrameProcessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.frame.FramesDecoder"
	};
	$loadClass(FramesDecoder$FrameProcessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FramesDecoder$FrameProcessor);
	});
	return class$;
}

$Class* FramesDecoder$FrameProcessor::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk