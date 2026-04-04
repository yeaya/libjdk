#include <com/apple/laf/AquaImageFactory$NamedImageSingleton.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$NamedImageSingleton::init$($String* namedImage) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, namedImage, namedImage);
}

$Object* AquaImageFactory$NamedImageSingleton::getInstance() {
	return $AquaImageFactory::getNSIcon(this->namedImage);
}

AquaImageFactory$NamedImageSingleton::AquaImageFactory$NamedImageSingleton() {
}

$Class* AquaImageFactory$NamedImageSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"namedImage", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaImageFactory$NamedImageSingleton, namedImage)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(AquaImageFactory$NamedImageSingleton, init$, void, $String*)},
		{"getInstance", "()Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(AquaImageFactory$NamedImageSingleton, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$NamedImageSingleton", "com.apple.laf.AquaImageFactory", "NamedImageSingleton", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$NamedImageSingleton",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/awt/Image;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$NamedImageSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$NamedImageSingleton);
	});
	return class$;
}

$Class* AquaImageFactory$NamedImageSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com