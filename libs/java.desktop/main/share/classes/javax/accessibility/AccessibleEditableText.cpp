#include <javax/accessibility/AccessibleEditableText.h>

#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleEditableText_MethodInfo_[] = {
	{"cut", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, cut, void, int32_t, int32_t)},
	{"delete", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, delete$, void, int32_t, int32_t)},
	{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, getTextRange, $String*, int32_t, int32_t)},
	{"insertTextAtIndex", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, insertTextAtIndex, void, int32_t, $String*)},
	{"paste", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, paste, void, int32_t)},
	{"replaceText", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, replaceText, void, int32_t, int32_t, $String*)},
	{"selectText", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, selectText, void, int32_t, int32_t)},
	{"setAttributes", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, setAttributes, void, int32_t, int32_t, $AttributeSet*)},
	{"setTextContents", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibleEditableText, setTextContents, void, $String*)},
	{}
};

$ClassInfo _AccessibleEditableText_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleEditableText",
	nullptr,
	"javax.accessibility.AccessibleText",
	nullptr,
	_AccessibleEditableText_MethodInfo_
};

$Object* allocate$AccessibleEditableText($Class* clazz) {
	return $of($alloc(AccessibleEditableText));
}

$Class* AccessibleEditableText::load$($String* name, bool initialize) {
	$loadClass(AccessibleEditableText, name, initialize, &_AccessibleEditableText_ClassInfo_, allocate$AccessibleEditableText);
	return class$;
}

$Class* AccessibleEditableText::class$ = nullptr;

	} // accessibility
} // javax