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

$MethodInfo _SwingDefaultFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SwingDefaultFocusTraversalPolicy, init$, void)},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(SwingDefaultFocusTraversalPolicy, accept, bool, $Component*)},
	{}
};

$ClassInfo _SwingDefaultFocusTraversalPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingDefaultFocusTraversalPolicy",
	"java.awt.DefaultFocusTraversalPolicy",
	nullptr,
	nullptr,
	_SwingDefaultFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$SwingDefaultFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(SwingDefaultFocusTraversalPolicy));
}

void SwingDefaultFocusTraversalPolicy::init$() {
	$DefaultFocusTraversalPolicy::init$();
}

bool SwingDefaultFocusTraversalPolicy::accept($Component* aComponent) {
	return $DefaultFocusTraversalPolicy::accept(aComponent);
}

SwingDefaultFocusTraversalPolicy::SwingDefaultFocusTraversalPolicy() {
}

$Class* SwingDefaultFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(SwingDefaultFocusTraversalPolicy, name, initialize, &_SwingDefaultFocusTraversalPolicy_ClassInfo_, allocate$SwingDefaultFocusTraversalPolicy);
	return class$;
}

$Class* SwingDefaultFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax