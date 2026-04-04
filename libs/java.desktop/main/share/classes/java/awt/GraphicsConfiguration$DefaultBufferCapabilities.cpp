#include <java/awt/GraphicsConfiguration$DefaultBufferCapabilities.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/ImageCapabilities.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void GraphicsConfiguration$DefaultBufferCapabilities::init$($ImageCapabilities* imageCaps) {
	$BufferCapabilities::init$(imageCaps, imageCaps, nullptr);
}

GraphicsConfiguration$DefaultBufferCapabilities::GraphicsConfiguration$DefaultBufferCapabilities() {
}

$Class* GraphicsConfiguration$DefaultBufferCapabilities::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/ImageCapabilities;)V", nullptr, $PUBLIC, $method(GraphicsConfiguration$DefaultBufferCapabilities, init$, void, $ImageCapabilities*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsConfiguration$DefaultBufferCapabilities", "java.awt.GraphicsConfiguration", "DefaultBufferCapabilities", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.GraphicsConfiguration$DefaultBufferCapabilities",
		"java.awt.BufferCapabilities",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.GraphicsConfiguration"
	};
	$loadClass(GraphicsConfiguration$DefaultBufferCapabilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsConfiguration$DefaultBufferCapabilities);
	});
	return class$;
}

$Class* GraphicsConfiguration$DefaultBufferCapabilities::class$ = nullptr;

	} // awt
} // java