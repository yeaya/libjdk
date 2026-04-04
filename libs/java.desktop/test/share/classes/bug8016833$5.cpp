#include <bug8016833$5.h>
#include <bug8016833.h>
#include <javax/swing/text/Style.h>
#include <jcpp.h>

using $bug8016833 = ::bug8016833;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Style = ::javax::swing::text::Style;

void bug8016833$5::init$() {
	$bug8016833::init$();
}

void bug8016833$5::setNormalStyle($Style* style) {
}

bug8016833$5::bug8016833$5() {
}

$Class* bug8016833$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8016833$5, init$, void)},
		{"setNormalStyle", "(Ljavax/swing/text/Style;)V", nullptr, 0, $virtualMethod(bug8016833$5, setNormalStyle, void, $Style*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8016833",
		"testNormalScript",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8016833$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8016833$5",
		"bug8016833",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8016833"
	};
	$loadClass(bug8016833$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8016833$5);
	});
	return class$;
}

$Class* bug8016833$5::class$ = nullptr;