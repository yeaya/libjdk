#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <jcpp.h>

#undef EVENT_ELEMENT_EMPTY
#undef EVENT_ELEMENT_END
#undef EVENT_ELEMENT_START

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _XPointerPart_FieldInfo_[] = {
	{"EVENT_ELEMENT_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_START)},
	{"EVENT_ELEMENT_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_END)},
	{"EVENT_ELEMENT_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_EMPTY)},
	{}
};

$MethodInfo _XPointerPart_MethodInfo_[] = {
	{"getSchemeData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, getSchemeData, $String*)},
	{"getSchemeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, getSchemeName, $String*)},
	{"isChildFragmentResolved", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, isChildFragmentResolved, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isFragmentResolved", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, isFragmentResolved, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parseXPointer", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, parseXPointer, void, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveXPointer", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, resolveXPointer, bool, $QName*, $XMLAttributes*, $Augmentations*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setSchemeData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, setSchemeData, void, $String*)},
	{"setSchemeName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerPart, setSchemeName, void, $String*)},
	{}
};

$ClassInfo _XPointerPart_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerPart",
	nullptr,
	nullptr,
	_XPointerPart_FieldInfo_,
	_XPointerPart_MethodInfo_
};

$Object* allocate$XPointerPart($Class* clazz) {
	return $of($alloc(XPointerPart));
}

$Class* XPointerPart::load$($String* name, bool initialize) {
	$loadClass(XPointerPart, name, initialize, &_XPointerPart_ClassInfo_, allocate$XPointerPart);
	return class$;
}

$Class* XPointerPart::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com