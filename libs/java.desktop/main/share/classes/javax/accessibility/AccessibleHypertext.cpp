#include <javax/accessibility/AccessibleHypertext.h>

#include <javax/accessibility/AccessibleHyperlink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleHyperlink = ::javax::accessibility::AccessibleHyperlink;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleHypertext_MethodInfo_[] = {
	{"getLink", "(I)Ljavax/accessibility/AccessibleHyperlink;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLink, $AccessibleHyperlink*, int32_t)},
	{"getLinkCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLinkCount, int32_t)},
	{"getLinkIndex", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleHypertext, getLinkIndex, int32_t, int32_t)},
	{}
};

$ClassInfo _AccessibleHypertext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleHypertext",
	nullptr,
	"javax.accessibility.AccessibleText",
	nullptr,
	_AccessibleHypertext_MethodInfo_
};

$Object* allocate$AccessibleHypertext($Class* clazz) {
	return $of($alloc(AccessibleHypertext));
}

$Class* AccessibleHypertext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHypertext, name, initialize, &_AccessibleHypertext_ClassInfo_, allocate$AccessibleHypertext);
	return class$;
}

$Class* AccessibleHypertext::class$ = nullptr;

	} // accessibility
} // javax