#include <javax/swing/LegacyLayoutFocusTraversalPolicy.h>
#include <javax/swing/CompareTabOrderComparator.h>
#include <javax/swing/DefaultFocusManager.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompareTabOrderComparator = ::javax::swing::CompareTabOrderComparator;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

void LegacyLayoutFocusTraversalPolicy::init$($DefaultFocusManager* defaultFocusManager) {
	$LayoutFocusTraversalPolicy::init$($$new($CompareTabOrderComparator, defaultFocusManager));
}

LegacyLayoutFocusTraversalPolicy::LegacyLayoutFocusTraversalPolicy() {
}

$Class* LegacyLayoutFocusTraversalPolicy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultFocusManager;)V", nullptr, 0, $method(LegacyLayoutFocusTraversalPolicy, init$, void, $DefaultFocusManager*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.LegacyLayoutFocusTraversalPolicy",
		"javax.swing.LayoutFocusTraversalPolicy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LegacyLayoutFocusTraversalPolicy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LegacyLayoutFocusTraversalPolicy));
	});
	return class$;
}

$Class* LegacyLayoutFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax