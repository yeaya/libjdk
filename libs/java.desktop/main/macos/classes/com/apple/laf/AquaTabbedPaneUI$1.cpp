#include <com/apple/laf/AquaTabbedPaneUI$1.h>
#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Image.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $AquaIcon = ::com::apple::laf::AquaIcon;
using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneUI$1::init$($AquaTabbedPaneUI* this$0, int32_t width, int32_t height, $Icon* val$mainIcon) {
	$set(this, this$0, this$0);
	$set(this, val$mainIcon, val$mainIcon);
	$AquaIcon$CachingScalingIcon::init$(width, height);
}

$Image* AquaTabbedPaneUI$1::createImage() {
	return $AquaIcon::getImageForIcon(this->val$mainIcon);
}

AquaTabbedPaneUI$1::AquaTabbedPaneUI$1() {
}

$Class* AquaTabbedPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$1, this$0)},
		{"val$mainIcon", "Ljavax/swing/Icon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$1, val$mainIcon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;IILjavax/swing/Icon;)V", nullptr, 0, $method(AquaTabbedPaneUI$1, init$, void, $AquaTabbedPaneUI*, int32_t, int32_t, $Icon*)},
		{"createImage", "()Ljava/awt/Image;", nullptr, 0, $virtualMethod(AquaTabbedPaneUI$1, createImage, $Image*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTabbedPaneUI",
		"getIconForTab",
		"(I)Ljavax/swing/Icon;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneUI$1",
		"com.apple.laf.AquaIcon$CachingScalingIcon",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneUI"
	};
	$loadClass(AquaTabbedPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTabbedPaneUI$1));
	});
	return class$;
}

$Class* AquaTabbedPaneUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com