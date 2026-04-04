#include <com/apple/laf/AquaButtonRadioUI$1.h>
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

void AquaButtonRadioUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaButtonRadioUI$1::getInstance() {
	return $of($new($ImageIcon, $($AquaNativeResources::getRadioButtonSizerImage())));
}

AquaButtonRadioUI$1::AquaButtonRadioUI$1() {
}

$Class* AquaButtonRadioUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaButtonRadioUI$1, init$, void)},
		{"getInstance", "()Ljavax/swing/ImageIcon;", nullptr, $PROTECTED, $virtualMethod(AquaButtonRadioUI$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaButtonRadioUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonRadioUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaButtonRadioUI$1",
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
		"com.apple.laf.AquaButtonRadioUI"
	};
	$loadClass(AquaButtonRadioUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonRadioUI$1);
	});
	return class$;
}

$Class* AquaButtonRadioUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com