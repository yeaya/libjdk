#include <java/awt/CheckboxMenuItem$1.h>
#include <java/awt/CheckboxMenuItem.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void CheckboxMenuItem$1::init$() {
}

bool CheckboxMenuItem$1::getState($CheckboxMenuItem* cmi) {
	return $nc(cmi)->state;
}

CheckboxMenuItem$1::CheckboxMenuItem$1() {
}

$Class* CheckboxMenuItem$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckboxMenuItem$1, init$, void)},
		{"getState", "(Ljava/awt/CheckboxMenuItem;)Z", nullptr, $PUBLIC, $virtualMethod(CheckboxMenuItem$1, getState, bool, $CheckboxMenuItem*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.CheckboxMenuItem",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.CheckboxMenuItem$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$CheckboxMenuItemAccessor", "sun.awt.AWTAccessor", "CheckboxMenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.CheckboxMenuItem$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$CheckboxMenuItemAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.CheckboxMenuItem"
	};
	$loadClass(CheckboxMenuItem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckboxMenuItem$1);
	});
	return class$;
}

$Class* CheckboxMenuItem$1::class$ = nullptr;

	} // awt
} // java