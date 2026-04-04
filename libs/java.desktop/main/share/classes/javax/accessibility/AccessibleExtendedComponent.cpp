#include <javax/accessibility/AccessibleExtendedComponent.h>
#include <javax/accessibility/AccessibleKeyBinding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;

namespace javax {
	namespace accessibility {

$Class* AccessibleExtendedComponent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessibleKeyBinding", "()Ljavax/accessibility/AccessibleKeyBinding;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedComponent, getAccessibleKeyBinding, $AccessibleKeyBinding*)},
		{"getTitledBorderText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedComponent, getTitledBorderText, $String*)},
		{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleExtendedComponent, getToolTipText, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.accessibility.AccessibleExtendedComponent",
		nullptr,
		"javax.accessibility.AccessibleComponent",
		nullptr,
		methodInfos$$
	};
	$loadClass(AccessibleExtendedComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AccessibleExtendedComponent);
	});
	return class$;
}

$Class* AccessibleExtendedComponent::class$ = nullptr;

	} // accessibility
} // javax