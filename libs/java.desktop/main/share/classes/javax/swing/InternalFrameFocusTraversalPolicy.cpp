#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

void InternalFrameFocusTraversalPolicy::init$() {
	$FocusTraversalPolicy::init$();
}

$Component* InternalFrameFocusTraversalPolicy::getInitialComponent($JInternalFrame* frame) {
	return getDefaultComponent(frame);
}

InternalFrameFocusTraversalPolicy::InternalFrameFocusTraversalPolicy() {
}

$Class* InternalFrameFocusTraversalPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(InternalFrameFocusTraversalPolicy, init$, void)},
		{"getInitialComponent", "(Ljavax/swing/JInternalFrame;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(InternalFrameFocusTraversalPolicy, getInitialComponent, $Component*, $JInternalFrame*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.InternalFrameFocusTraversalPolicy",
		"java.awt.FocusTraversalPolicy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InternalFrameFocusTraversalPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalFrameFocusTraversalPolicy);
	});
	return class$;
}

$Class* InternalFrameFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax