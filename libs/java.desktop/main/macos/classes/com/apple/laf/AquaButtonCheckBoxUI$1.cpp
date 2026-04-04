#include <com/apple/laf/AquaButtonCheckBoxUI$1.h>
#include <com/apple/laf/AquaNativeResources.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $AquaNativeResources = ::com::apple::laf::AquaNativeResources;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonCheckBoxUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonCheckBoxUI$1::getInstance() {
	return $of($new($ImageIcon, $($AquaNativeResources::getRadioButtonSizerImage())));
}

AquaButtonCheckBoxUI$1::AquaButtonCheckBoxUI$1() {
}

$Class* AquaButtonCheckBoxUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonCheckBoxUI$1, init$, void)},
		{"getInstance", "()Ljavax/swing/ImageIcon;", nullptr, $PROTECTED, $virtualMethod(AquaButtonCheckBoxUI$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonCheckBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonCheckBoxUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonCheckBoxUI$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/ImageIcon;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonCheckBoxUI"
	};
	$loadClass(AquaButtonCheckBoxUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonCheckBoxUI$1);
	});
	return class$;
}

$Class* AquaButtonCheckBoxUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com