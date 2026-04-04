#include <com/apple/laf/AquaFocus$FocusedIcon$2.h>
#include <com/apple/laf/AquaFocus$FocusedIcon.h>
#include <java/awt/AlphaComposite.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <javax/swing/Icon.h>
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

namespace com {
	namespace apple {
		namespace laf {

void AquaFocus$FocusedIcon$2::init$($Icon* val$icon) {
	$set(this, val$icon, val$icon);
}

void AquaFocus$FocusedIcon$2::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($AlphaComposite);
	$nc($cast($Graphics2D, g))->setComposite($AlphaComposite::SrcAtop);
	$nc(this->val$icon)->paintIcon(nullptr, g, x, y);
}

AquaFocus$FocusedIcon$2::AquaFocus$FocusedIcon$2() {
}

$Class* AquaFocus$FocusedIcon$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$icon", "Ljavax/swing/Icon;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFocus$FocusedIcon$2, val$icon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/Icon;)V", "()V", 0, $method(AquaFocus$FocusedIcon$2, init$, void, $Icon*)},
		{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(AquaFocus$FocusedIcon$2, paint, void, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFocus$FocusedIcon",
		"<init>",
		"(Ljavax/swing/Icon;I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFocus$FocusedIcon", "com.apple.laf.AquaFocus", "FocusedIcon", $STATIC},
		{"com.apple.laf.AquaFocus$FocusedIcon$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFocus$FocusedIcon$2",
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
	$loadClass(AquaFocus$FocusedIcon$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFocus$FocusedIcon$2);
	});
	return class$;
}

$Class* AquaFocus$FocusedIcon$2::class$ = nullptr;

		} // laf
	} // apple
} // com