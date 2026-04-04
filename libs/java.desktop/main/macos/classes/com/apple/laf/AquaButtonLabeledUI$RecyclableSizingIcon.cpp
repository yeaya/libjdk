#include <com/apple/laf/AquaButtonLabeledUI$RecyclableSizingIcon.h>
#include <com/apple/laf/AquaButtonLabeledUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

namespace com {
	namespace apple {
		namespace laf {

void AquaButtonLabeledUI$RecyclableSizingIcon::init$(int32_t iconSize) {
	$AquaUtils$RecyclableSingleton::init$();
	this->iconSize = iconSize;
}

$Object* AquaButtonLabeledUI$RecyclableSizingIcon::getInstance() {
	return $of($new($ImageIcon, $$new($BufferedImage, this->iconSize, this->iconSize, $BufferedImage::TYPE_INT_ARGB_PRE)));
}

AquaButtonLabeledUI$RecyclableSizingIcon::AquaButtonLabeledUI$RecyclableSizingIcon() {
}

$Class* AquaButtonLabeledUI$RecyclableSizingIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iconSize", "I", nullptr, $FINAL, $field(AquaButtonLabeledUI$RecyclableSizingIcon, iconSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(AquaButtonLabeledUI$RecyclableSizingIcon, init$, void, int32_t)},
		{"getInstance", "()Ljavax/swing/Icon;", nullptr, $PROTECTED, $virtualMethod(AquaButtonLabeledUI$RecyclableSizingIcon, getInstance, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon", "com.apple.laf.AquaButtonLabeledUI", "RecyclableSizingIcon", $PROTECTED | $STATIC},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaButtonLabeledUI$RecyclableSizingIcon",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaButtonLabeledUI"
	};
	$loadClass(AquaButtonLabeledUI$RecyclableSizingIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaButtonLabeledUI$RecyclableSizingIcon);
	});
	return class$;
}

$Class* AquaButtonLabeledUI$RecyclableSizingIcon::class$ = nullptr;

		} // laf
	} // apple
} // com