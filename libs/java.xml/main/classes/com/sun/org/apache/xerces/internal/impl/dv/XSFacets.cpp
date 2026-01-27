#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _XSFacets_FieldInfo_[] = {
	{"length", "I", nullptr, $PUBLIC, $field(XSFacets, length)},
	{"minLength", "I", nullptr, $PUBLIC, $field(XSFacets, minLength)},
	{"maxLength", "I", nullptr, $PUBLIC, $field(XSFacets, maxLength)},
	{"whiteSpace", "S", nullptr, $PUBLIC, $field(XSFacets, whiteSpace)},
	{"totalDigits", "I", nullptr, $PUBLIC, $field(XSFacets, totalDigits)},
	{"fractionDigits", "I", nullptr, $PUBLIC, $field(XSFacets, fractionDigits)},
	{"pattern", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSFacets, pattern)},
	{"enumeration", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(XSFacets, enumeration)},
	{"enumNSDecls", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;>;", $PUBLIC, $field(XSFacets, enumNSDecls)},
	{"maxInclusive", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSFacets, maxInclusive)},
	{"maxExclusive", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSFacets, maxExclusive)},
	{"minInclusive", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSFacets, minInclusive)},
	{"minExclusive", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSFacets, minExclusive)},
	{"lengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, lengthAnnotation)},
	{"minLengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, minLengthAnnotation)},
	{"maxLengthAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, maxLengthAnnotation)},
	{"whiteSpaceAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, whiteSpaceAnnotation)},
	{"totalDigitsAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, totalDigitsAnnotation)},
	{"fractionDigitsAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, fractionDigitsAnnotation)},
	{"patternAnnotations", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, $PUBLIC, $field(XSFacets, patternAnnotations)},
	{"enumAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSFacets, enumAnnotations)},
	{"maxInclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, maxInclusiveAnnotation)},
	{"maxExclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, maxExclusiveAnnotation)},
	{"minInclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, minInclusiveAnnotation)},
	{"minExclusiveAnnotation", "Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $field(XSFacets, minExclusiveAnnotation)},
	{}
};

$MethodInfo _XSFacets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSFacets, init$, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSFacets, reset, void)},
	{}
};

$ClassInfo _XSFacets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.XSFacets",
	"java.lang.Object",
	nullptr,
	_XSFacets_FieldInfo_,
	_XSFacets_MethodInfo_
};

$Object* allocate$XSFacets($Class* clazz) {
	return $of($alloc(XSFacets));
}

void XSFacets::init$() {
}

void XSFacets::reset() {
	$set(this, lengthAnnotation, nullptr);
	$set(this, minLengthAnnotation, nullptr);
	$set(this, maxLengthAnnotation, nullptr);
	$set(this, whiteSpaceAnnotation, nullptr);
	$set(this, totalDigitsAnnotation, nullptr);
	$set(this, fractionDigitsAnnotation, nullptr);
	$set(this, patternAnnotations, nullptr);
	$set(this, enumAnnotations, nullptr);
	$set(this, maxInclusiveAnnotation, nullptr);
	$set(this, maxExclusiveAnnotation, nullptr);
	$set(this, minInclusiveAnnotation, nullptr);
	$set(this, minExclusiveAnnotation, nullptr);
}

XSFacets::XSFacets() {
}

$Class* XSFacets::load$($String* name, bool initialize) {
	$loadClass(XSFacets, name, initialize, &_XSFacets_ClassInfo_, allocate$XSFacets);
	return class$;
}

$Class* XSFacets::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com