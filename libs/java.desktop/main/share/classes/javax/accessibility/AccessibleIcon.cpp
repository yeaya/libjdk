#include <javax/accessibility/AccessibleIcon.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleIcon_MethodInfo_[] = {
	{"getAccessibleIconDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconDescription, $String*)},
	{"getAccessibleIconHeight", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconHeight, int32_t)},
	{"getAccessibleIconWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, getAccessibleIconWidth, int32_t)},
	{"setAccessibleIconDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleIcon, setAccessibleIconDescription, void, $String*)},
	{}
};

$ClassInfo _AccessibleIcon_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleIcon",
	nullptr,
	nullptr,
	nullptr,
	_AccessibleIcon_MethodInfo_
};

$Object* allocate$AccessibleIcon($Class* clazz) {
	return $of($alloc(AccessibleIcon));
}

$Class* AccessibleIcon::load$($String* name, bool initialize) {
	$loadClass(AccessibleIcon, name, initialize, &_AccessibleIcon_ClassInfo_, allocate$AccessibleIcon);
	return class$;
}

$Class* AccessibleIcon::class$ = nullptr;

	} // accessibility
} // javax