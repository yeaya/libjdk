#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ElementImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSAnnotationInfo_FieldInfo_[] = {
	{"fAnnotation", "Ljava/lang/String;", nullptr, 0, $field(XSAnnotationInfo, fAnnotation)},
	{"fLine", "I", nullptr, 0, $field(XSAnnotationInfo, fLine)},
	{"fColumn", "I", nullptr, 0, $field(XSAnnotationInfo, fColumn)},
	{"fCharOffset", "I", nullptr, 0, $field(XSAnnotationInfo, fCharOffset)},
	{"next", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo;", nullptr, 0, $field(XSAnnotationInfo, next)},
	{}
};

$MethodInfo _XSAnnotationInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;III)V", nullptr, 0, $method(XSAnnotationInfo, init$, void, $String*, int32_t, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, 0, $method(XSAnnotationInfo, init$, void, $String*, $Element*)},
	{}
};

$ClassInfo _XSAnnotationInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSAnnotationInfo",
	"java.lang.Object",
	nullptr,
	_XSAnnotationInfo_FieldInfo_,
	_XSAnnotationInfo_MethodInfo_
};

$Object* allocate$XSAnnotationInfo($Class* clazz) {
	return $of($alloc(XSAnnotationInfo));
}

void XSAnnotationInfo::init$($String* annotation, int32_t line, int32_t column, int32_t charOffset) {
	$set(this, fAnnotation, annotation);
	this->fLine = line;
	this->fColumn = column;
	this->fCharOffset = charOffset;
}

void XSAnnotationInfo::init$($String* annotation, $Element* annotationDecl) {
	$set(this, fAnnotation, annotation);
	if ($instanceOf($ElementImpl, annotationDecl)) {
		$var($ElementImpl, annotationDeclImpl, $cast($ElementImpl, annotationDecl));
		this->fLine = $nc(annotationDeclImpl)->getLineNumber();
		this->fColumn = annotationDeclImpl->getColumnNumber();
		this->fCharOffset = annotationDeclImpl->getCharacterOffset();
	} else {
		this->fLine = -1;
		this->fColumn = -1;
		this->fCharOffset = -1;
	}
}

XSAnnotationInfo::XSAnnotationInfo() {
}

$Class* XSAnnotationInfo::load$($String* name, bool initialize) {
	$loadClass(XSAnnotationInfo, name, initialize, &_XSAnnotationInfo_ClassInfo_, allocate$XSAnnotationInfo);
	return class$;
}

$Class* XSAnnotationInfo::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com