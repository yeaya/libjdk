#include <com/apple/laf/AquaImageFactory$4.h>
#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$4::init$(int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
}

$Image* AquaImageFactory$4::createImage() {
	return $AquaImageFactory::getGenericJavaIcon();
}

AquaImageFactory$4::AquaImageFactory$4() {
}

$Class* AquaImageFactory$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(AquaImageFactory$4, init$, void, int32_t, int32_t)},
		{"createImage", "()Ljava/awt/Image;", nullptr, 0, $virtualMethod(AquaImageFactory$4, createImage, $Image*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaImageFactory",
		"getAppIconImageCompositedOn",
		"(Ljava/awt/Image;I)Ljava/awt/image/BufferedImage;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$4",
		"com.apple.laf.AquaIcon$CachingScalingIcon",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaImageFactory$4));
	});
	return class$;
}

$Class* AquaImageFactory$4::class$ = nullptr;

		} // laf
	} // apple
} // com