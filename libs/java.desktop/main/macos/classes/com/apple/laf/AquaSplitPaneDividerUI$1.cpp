#include <com/apple/laf/AquaSplitPaneDividerUI$1.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$LazyKeyedSingleton.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <jcpp.h>

#undef SCALE_SMOOTH

using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $AquaUtils$LazyKeyedSingleton = ::com::apple::laf::AquaUtils$LazyKeyedSingleton;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaSplitPaneDividerUI$1::init$() {
	$AquaUtils$LazyKeyedSingleton::init$();
}

$Image* AquaSplitPaneDividerUI$1::getInstance($Integer* direction) {
	$useLocalObjectStack();
	$var($Image, arrowImage, $AquaImageFactory::getArrowImageForDirection($nc(direction)->intValue()));
	int32_t h = ($nc(arrowImage)->getHeight(nullptr) * 5) / 7;
	int32_t w = (arrowImage->getWidth(nullptr) * 5) / 7;
	return $AquaUtils::generateLightenedImage($(arrowImage->getScaledInstance(w, h, $Image::SCALE_SMOOTH)), 50);
}

$Object* AquaSplitPaneDividerUI$1::getInstance(Object$* direction) {
	return this->getInstance($cast($Integer, direction));
}

AquaSplitPaneDividerUI$1::AquaSplitPaneDividerUI$1() {
}

$Class* AquaSplitPaneDividerUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaSplitPaneDividerUI$1, init$, void)},
		{"getInstance", "(Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(AquaSplitPaneDividerUI$1, getInstance, $Image*, $Integer*)},
		{"getInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(AquaSplitPaneDividerUI$1, getInstance, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaSplitPaneDividerUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSplitPaneDividerUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$LazyKeyedSingleton", "com.apple.laf.AquaUtils", "LazyKeyedSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSplitPaneDividerUI$1",
		"com.apple.laf.AquaUtils$LazyKeyedSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$LazyKeyedSingleton<Ljava/lang/Integer;Ljava/awt/Image;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSplitPaneDividerUI"
	};
	$loadClass(AquaSplitPaneDividerUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSplitPaneDividerUI$1);
	});
	return class$;
}

$Class* AquaSplitPaneDividerUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com