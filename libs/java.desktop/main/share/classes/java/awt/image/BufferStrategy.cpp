#include <java/awt/image/BufferStrategy.h>

#include <java/awt/BufferCapabilities.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _BufferStrategy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(BufferStrategy, init$, void)},
	{"contentsLost", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferStrategy, contentsLost, bool)},
	{"contentsRestored", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferStrategy, contentsRestored, bool)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(BufferStrategy, dispose, void)},
	{"getCapabilities", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferStrategy, getCapabilities, $BufferCapabilities*)},
	{"getDrawGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferStrategy, getDrawGraphics, $Graphics*)},
	{"show", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferStrategy, show, void)},
	{}
};

$ClassInfo _BufferStrategy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.image.BufferStrategy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BufferStrategy_MethodInfo_
};

$Object* allocate$BufferStrategy($Class* clazz) {
	return $of($alloc(BufferStrategy));
}

void BufferStrategy::init$() {
}

void BufferStrategy::dispose() {
}

BufferStrategy::BufferStrategy() {
}

$Class* BufferStrategy::load$($String* name, bool initialize) {
	$loadClass(BufferStrategy, name, initialize, &_BufferStrategy_ClassInfo_, allocate$BufferStrategy);
	return class$;
}

$Class* BufferStrategy::class$ = nullptr;

		} // image
	} // awt
} // java