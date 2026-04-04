#include <java/awt/Component$BltSubRegionBufferStrategy.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Component$BltBufferStrategy.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Component = ::java::awt::Component;
using $Component$BltBufferStrategy = ::java::awt::Component$BltBufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

int32_t Component$BltSubRegionBufferStrategy::hashCode() {
	 return this->$Component$BltBufferStrategy::hashCode();
}

bool Component$BltSubRegionBufferStrategy::equals(Object$* arg0) {
	 return this->$Component$BltBufferStrategy::equals(arg0);
}

$Object* Component$BltSubRegionBufferStrategy::clone() {
	 return this->$Component$BltBufferStrategy::clone();
}

$String* Component$BltSubRegionBufferStrategy::toString() {
	 return this->$Component$BltBufferStrategy::toString();
}

void Component$BltSubRegionBufferStrategy::finalize() {
	this->$Component$BltBufferStrategy::finalize();
}

void Component$BltSubRegionBufferStrategy::init$($Component* this$0, int32_t numBuffers, $BufferCapabilities* caps) {
	$set(this, this$0, this$0);
	$Component$BltBufferStrategy::init$(this$0, numBuffers, caps);
}

void Component$BltSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	showSubRegion(x1, y1, x2, y2);
}

bool Component$BltSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
	if (!contentsLost()) {
		showSubRegion(x1, y1, x2, y2);
		return !contentsLost();
	}
	return false;
}

Component$BltSubRegionBufferStrategy::Component$BltSubRegionBufferStrategy() {
}

$Class* Component$BltSubRegionBufferStrategy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$BltSubRegionBufferStrategy, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PROTECTED, $method(Component$BltSubRegionBufferStrategy, init$, void, $Component*, int32_t, $BufferCapabilities*)},
		{"show", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(Component$BltSubRegionBufferStrategy, show, void, int32_t, int32_t, int32_t, int32_t)},
		{"showIfNotLost", "(IIII)Z", nullptr, $PUBLIC, $virtualMethod(Component$BltSubRegionBufferStrategy, showIfNotLost, bool, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$BltSubRegionBufferStrategy", "java.awt.Component", "BltSubRegionBufferStrategy", $PRIVATE},
		{"java.awt.Component$BltBufferStrategy", "java.awt.Component", "BltBufferStrategy", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$BltSubRegionBufferStrategy",
		"java.awt.Component$BltBufferStrategy",
		"sun.awt.SubRegionShowable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$BltSubRegionBufferStrategy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Component$BltSubRegionBufferStrategy));
	});
	return class$;
}

$Class* Component$BltSubRegionBufferStrategy::class$ = nullptr;

	} // awt
} // java