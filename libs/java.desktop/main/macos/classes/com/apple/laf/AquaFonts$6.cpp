#include <com/apple/laf/AquaFonts$6.h>
#include <com/apple/laf/AquaFonts$DerivedUIResourceFont.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Font.h>
#include <jcpp.h>

#undef BOLD

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

void AquaFonts$6::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaFonts$6::getInstance() {
	return $of($new($AquaFonts$DerivedUIResourceFont, "Lucida Grande"_s, $Font::BOLD, 13));
}

AquaFonts$6::AquaFonts$6() {
}

$Class* AquaFonts$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaFonts$6, init$, void)},
		{"getInstance", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PROTECTED, $virtualMethod(AquaFonts$6, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaFonts",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFonts$6", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFonts$6",
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
	$loadClass(AquaFonts$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFonts$6);
	});
	return class$;
}

$Class* AquaFonts$6::class$ = nullptr;

		} // laf
	} // apple
} // com