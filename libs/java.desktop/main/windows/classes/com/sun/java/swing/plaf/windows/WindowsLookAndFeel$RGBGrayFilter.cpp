#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsLookAndFeel$RGBGrayFilter::init$() {
	$RGBImageFilter::init$();
	this->canFilterIndexColorModel = true;
}

int32_t WindowsLookAndFeel$RGBGrayFilter::filterRGB(int32_t x, int32_t y, int32_t rgb) {
	float avg = (((rgb >> 16) & 0xff) / 255.0f + ((rgb >> 8) & 0xff) / 255.0f + (rgb & 0xff) / 255.0f) / 3;
	float alpha = (((rgb >> 24) & 0xff) / 255.0f);
	avg = $Math::min(1.0f, $div((1.0f - avg), (100.0f / 35.0f)) + avg);
	int32_t rgbval = ((($cast(int32_t, (alpha * 255.0f)) << 24) | ($cast(int32_t, (avg * 255.0f)) << 16)) | ($cast(int32_t, (avg * 255.0f)) << 8)) | $cast(int32_t, (avg * 255.0f));
	return rgbval;
}

WindowsLookAndFeel$RGBGrayFilter::WindowsLookAndFeel$RGBGrayFilter() {
}

$Class* WindowsLookAndFeel$RGBGrayFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$RGBGrayFilter, init$, void)},
		{"filterRGB", "(III)I", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$RGBGrayFilter, filterRGB, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "RGBGrayFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter",
		"java.awt.image.RGBImageFilter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$RGBGrayFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsLookAndFeel$RGBGrayFilter));
	});
	return class$;
}

$Class* WindowsLookAndFeel$RGBGrayFilter::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com