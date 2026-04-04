#include <bug8038113.h>
#include <bug8038113$1.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8038113$1 = ::bug8038113$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug8038113::init$() {
	$JApplet::init$();
}

void bug8038113::init() {
	$SwingUtilities::invokeLater($$new($bug8038113$1, this));
}

bug8038113::bug8038113() {
}

$Class* bug8038113::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8038113, init$, void)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug8038113, init, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8038113$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8038113",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8038113$1,bug8038113$1$1"
	};
	$loadClass(bug8038113, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8038113));
	});
	return class$;
}

$Class* bug8038113::class$ = nullptr;