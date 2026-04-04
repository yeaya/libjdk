#include <FontSetToNull$1.h>
#include <FontSetToNull.h>
#include <java/awt/Font.h>
#include <javax/swing/JSpinner.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSpinner = ::javax::swing::JSpinner;

void FontSetToNull$1::init$() {
	$JSpinner::init$();
}

$Font* FontSetToNull$1::getFont() {
	return nullptr;
}

FontSetToNull$1::FontSetToNull$1() {
}

$Class* FontSetToNull$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FontSetToNull$1, init$, void)},
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(FontSetToNull$1, getFont, $Font*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FontSetToNull",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FontSetToNull$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FontSetToNull$1",
		"javax.swing.JSpinner",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FontSetToNull"
	};
	$loadClass(FontSetToNull$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FontSetToNull$1));
	});
	return class$;
}

$Class* FontSetToNull$1::class$ = nullptr;