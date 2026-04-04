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

$Class* XPointerPart::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EVENT_ELEMENT_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_START)},
		{"EVENT_ELEMENT_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_END)},
		{"EVENT_ELEMENT_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerPart, EVENT_ELEMENT_EMPTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xpointer.XPointerPart",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPointerPart, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPointerPart);
	});
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