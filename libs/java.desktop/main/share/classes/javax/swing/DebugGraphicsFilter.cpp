#include <javax/swing/DebugGraphicsFilter.h>
#include <java/awt/Color.h>
#include <java/awt/image/RGBImageFilter.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void DebugGraphicsFilter::init$($Color* c) {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
	$set(this, color, c);
}

int32_t DebugGraphicsFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	return $nc(this->color)->getRGB() | (rgb & (int32_t)0xff000000);
}

DebugGraphicsFilter::DebugGraphicsFilter() {
}

$Class* DebugGraphicsFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"color", "Ljava/awt/Color;", nullptr, 0, $field(DebugGraphicsFilter, color)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;)V", nullptr, 0, $method(DebugGraphicsFilter, init$, void, $Color*)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC, $virtualMethod(DebugGraphicsFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DebugGraphicsFilter",
		"java.awt.image.RGBImageFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DebugGraphicsFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DebugGraphicsFilter));
	});
	return class$;
}

$Class* DebugGraphicsFilter::class$ = nullptr;

	} // swing
} // javax