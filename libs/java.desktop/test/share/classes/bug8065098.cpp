#include <bug8065098.h>
#include <javax/swing/JApplet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;

void bug8065098::init$() {
	$JApplet::init$();
}

bug8065098::bug8065098() {
}

$Class* bug8065098::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8065098, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8065098",
		"javax.swing.JApplet",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug8065098, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8065098));
	});
	return class$;
}

$Class* bug8065098::class$ = nullptr;