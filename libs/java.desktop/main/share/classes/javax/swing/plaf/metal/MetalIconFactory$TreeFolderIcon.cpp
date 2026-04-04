#include <javax/swing/plaf/metal/MetalIconFactory$TreeFolderIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FolderIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalIconFactory$FolderIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FolderIcon16;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalIconFactory$TreeFolderIcon::init$() {
	$MetalIconFactory$FolderIcon16::init$();
}

int32_t MetalIconFactory$TreeFolderIcon::getShift() {
	return -1;
}

int32_t MetalIconFactory$TreeFolderIcon::getAdditionalHeight() {
	return 2;
}

MetalIconFactory$TreeFolderIcon::MetalIconFactory$TreeFolderIcon() {
}

$Class* MetalIconFactory$TreeFolderIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalIconFactory$TreeFolderIcon, init$, void)},
		{"getAdditionalHeight", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$TreeFolderIcon, getAdditionalHeight, int32_t)},
		{"getShift", "()I", nullptr, $PUBLIC, $virtualMethod(MetalIconFactory$TreeFolderIcon, getShift, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeFolderIcon", $PUBLIC | $STATIC},
		{"javax.swing.plaf.metal.MetalIconFactory$FolderIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FolderIcon16", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon",
		"javax.swing.plaf.metal.MetalIconFactory$FolderIcon16",
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
	$loadClass(MetalIconFactory$TreeFolderIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalIconFactory$TreeFolderIcon));
	});
	return class$;
}

$Class* MetalIconFactory$TreeFolderIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax