#include <com/apple/laf/AquaMenuPainter$RecyclableBorder.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

void AquaMenuPainter$RecyclableBorder::init$($String* borderName) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, borderName, borderName);
}

$Object* AquaMenuPainter$RecyclableBorder::getInstance() {
	return $UIManager::getBorder(this->borderName);
}

AquaMenuPainter$RecyclableBorder::AquaMenuPainter$RecyclableBorder() {
}

$Class* AquaMenuPainter$RecyclableBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"borderName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaMenuPainter$RecyclableBorder, borderName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(AquaMenuPainter$RecyclableBorder, init$, void, $String*)},
		{"getInstance", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(AquaMenuPainter$RecyclableBorder, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMenuPainter$RecyclableBorder", "com.apple.laf.AquaMenuPainter", "RecyclableBorder", $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaMenuPainter$RecyclableBorder",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaMenuPainter"
	};
	$loadClass(AquaMenuPainter$RecyclableBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMenuPainter$RecyclableBorder);
	});
	return class$;
}

$Class* AquaMenuPainter$RecyclableBorder::class$ = nullptr;

		} // laf
	} // apple
} // com