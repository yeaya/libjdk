#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>

#include <jcpp.h>

#undef SAX_CONTENTHANDLER
#undef W3C_DOM_DOCUMENT
#undef W3C_DOM_ELEMENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$FieldInfo _XSAnnotation_FieldInfo_[] = {
	{"W3C_DOM_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAnnotation, W3C_DOM_ELEMENT)},
	{"SAX_CONTENTHANDLER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAnnotation, SAX_CONTENTHANDLER)},
	{"W3C_DOM_DOCUMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAnnotation, W3C_DOM_DOCUMENT)},
	{}
};

$MethodInfo _XSAnnotation_MethodInfo_[] = {
	{"getAnnotationString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAnnotation, getAnnotationString, $String*)},
	{"writeAnnotation", "(Ljava/lang/Object;S)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAnnotation, writeAnnotation, bool, Object$*, int16_t)},
	{}
};

$ClassInfo _XSAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSAnnotation",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	_XSAnnotation_FieldInfo_,
	_XSAnnotation_MethodInfo_
};

$Object* allocate$XSAnnotation($Class* clazz) {
	return $of($alloc(XSAnnotation));
}

$Class* XSAnnotation::load$($String* name, bool initialize) {
	$loadClass(XSAnnotation, name, initialize, &_XSAnnotation_ClassInfo_, allocate$XSAnnotation);
	return class$;
}

$Class* XSAnnotation::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com