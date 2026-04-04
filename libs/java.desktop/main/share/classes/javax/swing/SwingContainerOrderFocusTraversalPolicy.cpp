#include <javax/swing/SwingContainerOrderFocusTraversalPolicy.h>
#include <java/awt/Component.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

void SwingContainerOrderFocusTraversalPolicy::init$() {
	$ContainerOrderFocusTraversalPolicy::init$();
}

bool SwingContainerOrderFocusTraversalPolicy::accept($Component* aComponent) {
	return $ContainerOrderFocusTraversalPolicy::accept(aComponent);
}

SwingContainerOrderFocusTraversalPolicy::SwingContainerOrderFocusTraversalPolicy() {
}

$Class* SwingContainerOrderFocusTraversalPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SwingContainerOrderFocusTraversalPolicy, init$, void)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(SwingContainerOrderFocusTraversalPolicy, accept, bool, $Component*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SwingContainerOrderFocusTraversalPolicy",
		"java.awt.ContainerOrderFocusTraversalPolicy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SwingContainerOrderFocusTraversalPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SwingContainerOrderFocusTraversalPolicy));
	});
	return class$;
}

$Class* SwingContainerOrderFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax