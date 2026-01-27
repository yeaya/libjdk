#include <javax/swing/text/MutableAttributeSet.h>

#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _MutableAttributeSet_MethodInfo_[] = {
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, addAttribute, void, Object$*, Object$*)},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, addAttributes, void, $AttributeSet*)},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, removeAttribute, void, Object$*)},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, removeAttributes, void, $Enumeration*)},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, removeAttributes, void, $AttributeSet*)},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableAttributeSet, setResolveParent, void, $AttributeSet*)},
	{}
};

$ClassInfo _MutableAttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.MutableAttributeSet",
	nullptr,
	"javax.swing.text.AttributeSet",
	nullptr,
	_MutableAttributeSet_MethodInfo_
};

$Object* allocate$MutableAttributeSet($Class* clazz) {
	return $of($alloc(MutableAttributeSet));
}

$Class* MutableAttributeSet::load$($String* name, bool initialize) {
	$loadClass(MutableAttributeSet, name, initialize, &_MutableAttributeSet_ClassInfo_, allocate$MutableAttributeSet);
	return class$;
}

$Class* MutableAttributeSet::class$ = nullptr;

		} // text
	} // swing
} // javax