#include <javax/swing/plaf/metal/MetalIconFactory$TreeLeafIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalIconFactory$FileIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FileIcon16;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalIconFactory$TreeLeafIcon::init$() {
	$MetalIconFactory$FileIcon16::init$();
}

int32_t MetalIconFactory$TreeLeafIcon::getShift() {
	return 2;
}

int32_t MetalIconFactory$TreeLeafIcon::getAdditionalHeight() {
	return 4;
}

MetalIconFactory$TreeLeafIcon::MetalIconFactory$TreeLeafIcon() {
}

$Class* MetalIconFactory$TreeLeafIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalIconFactory$TreeLeafIcon, init$, void)},
		{"getAdditionalHeight", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$TreeLeafIcon, getAdditionalHeight, int32_t)},
		{"getShift", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$TreeLeafIcon, getShift, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeLeafIcon", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalIconFactory$FileIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FileIcon16", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon",
		"javax.swing.plaf.metal.MetalIconFactory$FileIcon16",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalIconFactory"
	};
	$loadClass(MetalIconFactory$TreeLeafIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalIconFactory$TreeLeafIcon));
	});
	return class$;
}

$Class* MetalIconFactory$TreeLeafIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax