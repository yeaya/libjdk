#include <java/awt/Menu$1.h>
#include <java/awt/Menu.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {

void Menu$1::init$() {
}

$Vector* Menu$1::getItems($Menu* menu) {
	return $nc(menu)->items;
}

Menu$1::Menu$1() {
}

$Class* Menu$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Menu$1, init$, void)},
		{"getItems", "(Ljava/awt/Menu;)Ljava/util/Vector;", "(Ljava/awt/Menu;)Ljava/util/Vector<Ljava/awt/MenuItem;>;", $PUBLIC, $virtualMethod(Menu$1, getItems, $Vector*, $Menu*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Menu",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Menu$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$MenuAccessor", "sun.awt.AWTAccessor", "MenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Menu$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$MenuAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Menu"
	};
	$loadClass(Menu$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Menu$1);
	});
	return class$;
}

$Class* Menu$1::class$ = nullptr;

	} // awt
} // java