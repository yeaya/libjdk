#include <com/apple/laf/AquaImageFactory$IconUIResourceSingleton.h>
#include <com/apple/laf/AquaImageFactory$NamedImageSingleton.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

using $AquaImageFactory$NamedImageSingleton = ::com::apple::laf::AquaImageFactory$NamedImageSingleton;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$IconUIResourceSingleton::init$($AquaImageFactory$NamedImageSingleton* holder) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, holder, holder);
}

$Object* AquaImageFactory$IconUIResourceSingleton::getInstance() {
	$useLocalObjectStack();
	return $of($new($IconUIResource, $$new($ImageIcon, $$cast($Image, $nc(this->holder)->get()))));
}

AquaImageFactory$IconUIResourceSingleton::AquaImageFactory$IconUIResourceSingleton() {
}

$Class* AquaImageFactory$IconUIResourceSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"holder", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $FINAL, $field(AquaImageFactory$IconUIResourceSingleton, holder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;)V", nullptr, $PUBLIC, $method(AquaImageFactory$IconUIResourceSingleton, init$, void, $AquaImageFactory$NamedImageSingleton*)},
		{"getInstance", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PROTECTED, $virtualMethod(AquaImageFactory$IconUIResourceSingleton, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$IconUIResourceSingleton", "com.apple.laf.AquaImageFactory", "IconUIResourceSingleton", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$IconUIResourceSingleton",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/IconUIResource;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$IconUIResourceSingleton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$IconUIResourceSingleton);
	});
	return class$;
}

$Class* AquaImageFactory$IconUIResourceSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com