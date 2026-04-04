#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void FocusTraversalPolicy::init$() {
}

$Component* FocusTraversalPolicy::getInitialComponent($Window* window) {
	if (window == nullptr) {
		$throwNew($IllegalArgumentException, "window cannot be equal to null."_s);
	}
	$var($Component, def, getDefaultComponent(window));
	if (def == nullptr && $nc(window)->isFocusableWindow()) {
		$assign(def, window);
	}
	return def;
}

FocusTraversalPolicy::FocusTraversalPolicy() {
}

$Class* FocusTraversalPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(FocusTraversalPolicy, init$, void)},
		{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusTraversalPolicy, getComponentAfter, $Component*, $Container*, $Component*)},
		{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusTraversalPolicy, getComponentBefore, $Component*, $Container*, $Component*)},
		{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusTraversalPolicy, getDefaultComponent, $Component*, $Container*)},
		{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusTraversalPolicy, getFirstComponent, $Component*, $Container*)},
		{"getInitialComponent", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(FocusTraversalPolicy, getInitialComponent, $Component*, $Window*)},
		{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FocusTraversalPolicy, getLastComponent, $Component*, $Container*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.FocusTraversalPolicy",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FocusTraversalPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusTraversalPolicy);
	});
	return class$;
}

$Class* FocusTraversalPolicy::class$ = nullptr;

	} // awt
} // java