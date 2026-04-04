#include <com/apple/laf/AquaFonts$4.h>
#include <com/apple/laf/AquaFonts$DerivedUIResourceFont.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef PLAIN

using $AquaFonts$DerivedUIResourceFont = ::com::apple::laf::AquaFonts$DerivedUIResourceFont;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFonts$4::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFonts$4::getInstance() {
	return $of($new($AquaFonts$DerivedUIResourceFont, "Lucida Grande"_s, $Font::PLAIN, 13));
}

AquaFonts$4::AquaFonts$4() {
}

$Class* AquaFonts$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaFonts$4, init$, void)},
		{"getInstance", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED, $virtualMethod(AquaFonts$4, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFonts",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFonts$4", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFonts$4",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/FontUIResource;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFonts"
	};
	$loadClass(AquaFonts$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFonts$4);
	});
	return class$;
}

$Class* AquaFonts$4::class$ = nullptr;

		} // laf
	} // apple
} // com