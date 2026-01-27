#include <com/sun/org/apache/xerces/internal/xpointer/XPointerProcessor.h>

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

$FieldInfo _XPointerProcessor_FieldInfo_[] = {
	{"EVENT_ELEMENT_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerProcessor, EVENT_ELEMENT_START)},
	{"EVENT_ELEMENT_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerProcessor, EVENT_ELEMENT_END)},
	{"EVENT_ELEMENT_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPointerProcessor, EVENT_ELEMENT_EMPTY)},
	{}
};

$MethodInfo _XPointerProcessor_MethodInfo_[] = {
	{"isFragmentResolved", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerProcessor, isFragmentResolved, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isXPointerResolved", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerProcessor, isXPointerResolved, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"parseXPointer", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerProcessor, parseXPointer, void, $String*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveXPointer", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPointerProcessor, resolveXPointer, bool, $QName*, $XMLAttributes*, $Augmentations*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XPointerProcessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xpointer.XPointerProcessor",
	nullptr,
	nullptr,
	_XPointerProcessor_FieldInfo_,
	_XPointerProcessor_MethodInfo_
};

$Object* allocate$XPointerProcessor($Class* clazz) {
	return $of($alloc(XPointerProcessor));
}

$Class* XPointerProcessor::load$($String* name, bool initialize) {
	$loadClass(XPointerProcessor, name, initialize, &_XPointerProcessor_ClassInfo_, allocate$XPointerProcessor);
	return class$;
}

$Class* XPointerProcessor::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com