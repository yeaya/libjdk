#include <javax/swing/SwingDefaultFocusTraversalPolicy.h>
#include <java/awt/Component.h>
#include <java/awt/DefaultFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DefaultFocusTraversalPolicy = ::java::awt::DefaultFocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void SwingDefaultFocusTraversalPolicy::init$() {
	$DefaultFocusTraversalPolicy::init$();
}

bool SwingDefaultFocusTraversalPolicy::accept($Component* aComponent) {
	return $DefaultFocusTraversalPolicy::accept(aComponent);
}

SwingDefaultFocusTraversalPolicy::SwingDefaultFocusTraversalPolicy() {
}

$Class* SwingDefaultFocusTraversalPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SwingDefaultFocusTraversalPolicy, init$, void)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(SwingDefaultFocusTraversalPolicy, accept, bool, $Component*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingDefaultFocusTraversalPolicy",
		"java.awt.DefaultFocusTraversalPolicy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SwingDefaultFocusTraversalPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SwingDefaultFocusTraversalPolicy));
	});
	return class$;
}

$Class* SwingDefaultFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax