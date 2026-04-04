#include <com/apple/laf/AquaFocus$FocusedIcon$1.h>
#include <com/apple/laf/AquaFocus$FocusedIcon.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $AlphaComposite = ::java::awt::AlphaComposite;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace apple {
		namespace laf {

void AquaFocus$FocusedIcon$1::init$(int32_t val$slack, $Icon* val$icon) {
	this->val$slack = val$slack;
	$set(this, val$icon, val$icon);
}

void AquaFocus$FocusedIcon$1::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Graphics2D, imgG, $cast($Graphics2D, g));
	$init($AlphaComposite);
	$nc(imgG)->setComposite($AlphaComposite::Src);
	imgG->setColor($($UIManager::getColor("Focus.color"_s)));
	imgG->fillRect(x, y, w - (this->val$slack * 2), h - (this->val$slack * 2));
	imgG->setComposite($AlphaComposite::DstAtop);
	$nc(this->val$icon)->paintIcon(nullptr, imgG, x, y);
}

AquaFocus$FocusedIcon$1::AquaFocus$FocusedIcon$1() {
}

$Class* AquaFocus$FocusedIcon$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$icon", "Ljavax/swing/Icon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFocus$FocusedIcon$1, val$icon)},
		{"val$slack", "I", nullptr, $FINAL | $SYNTHETIC, $field(AquaFocus$FocusedIcon$1, val$slack)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjavax/swing/Icon;)V", "()V", 0, $method(AquaFocus$FocusedIcon$1, init$, void, int32_t, $Icon*)},
		{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaFocus$FocusedIcon$1, paint, void, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFocus$FocusedIcon",
		"<init>",
		"(Ljavax/swing/Icon;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFocus$FocusedIcon", "com.apple.laf.AquaFocus", "FocusedIcon", $STATIC},
		{"com.apple.laf.AquaFocus$FocusedIcon$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFocus$FocusedIcon$1",
		"java.lang.Object",
		"com.apple.laf.AquaUtils$Painter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFocus"
	};
	$loadClass(AquaFocus$FocusedIcon$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFocus$FocusedIcon$1);
	});
	return class$;
}

$Class* AquaFocus$FocusedIcon$1::class$ = nullptr;

		} // laf
	} // apple
} // com