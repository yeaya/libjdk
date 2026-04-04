#include <java/awt/Container$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Container$1::init$() {
}

void Container$1::validateUnconditionally($Container* cont) {
	$nc(cont)->validateUnconditionally();
}

$Component* Container$1::findComponentAt($Container* cont, int32_t x, int32_t y, bool ignoreEnabled) {
	return $nc(cont)->findComponentAt(x, y, ignoreEnabled);
}

void Container$1::startLWModal($Container* cont) {
	$nc(cont)->startLWModal();
}

void Container$1::stopLWModal($Container* cont) {
	$nc(cont)->stopLWModal();
}

Container$1::Container$1() {
}

$Class* Container$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Container$1, init$, void)},
		{"findComponentAt", "(Ljava/awt/Container;IIZ)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(Container$1, findComponentAt, $Component*, $Container*, int32_t, int32_t, bool)},
		{"startLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(Container$1, startLWModal, void, $Container*)},
		{"stopLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(Container$1, stopLWModal, void, $Container*)},
		{"validateUnconditionally", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(Container$1, validateUnconditionally, void, $Container*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Container",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$ContainerAccessor", "sun.awt.AWTAccessor", "ContainerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Container$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$ContainerAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container$1);
	});
	return class$;
}

$Class* Container$1::class$ = nullptr;

	} // awt
} // java