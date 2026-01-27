#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDelegate.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDelegate_FieldInfo_[] = {
	{"type", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PROTECTED | $FINAL, $field(XSSimpleTypeDelegate, type)},
	{}
};

$MethodInfo _XSSimpleTypeDelegate_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;)V", nullptr, $PUBLIC, $method(XSSimpleTypeDelegate, init$, void, $XSSimpleType*)},
	{"applyFacets", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SSLcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, applyFacets, void, $XSFacets*, int16_t, int16_t, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException"},
	{"derivedFrom", "(Ljava/lang/String;Ljava/lang/String;S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, derivedFrom, bool, $String*, $String*, int16_t)},
	{"derivedFromType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, derivedFromType, bool, $XSTypeDefinition*, int16_t)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getAnnotations, $XSObjectList*)},
	{"getAnonymous", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getAnonymous, bool)},
	{"getBaseType", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getBaseType, $XSTypeDefinition*)},
	{"getBounded", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getBounded, bool)},
	{"getBuiltInKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getBuiltInKind, int16_t)},
	{"getDefinedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getDefinedFacets, int16_t)},
	{"getFacet", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getFacet, $XSObject*, int32_t)},
	{"getFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getFacets, $XSObjectList*)},
	{"getFinal", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getFinal, int16_t)},
	{"getFinite", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getFinite, bool)},
	{"getFixedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getFixedFacets, int16_t)},
	{"getItemType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getItemType, $XSSimpleTypeDefinition*)},
	{"getLexicalEnumeration", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getLexicalEnumeration, $StringList*)},
	{"getLexicalFacetValue", "(S)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getLexicalFacetValue, $String*, int16_t)},
	{"getLexicalPattern", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getLexicalPattern, $StringList*)},
	{"getMemberTypes", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getMemberTypes, $XSObjectList*)},
	{"getMultiValueFacets", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getMultiValueFacets, $XSObjectList*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getNamespaceItem, $XSNamespaceItem*)},
	{"getNumeric", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getNumeric, bool)},
	{"getOrdered", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getOrdered, int16_t)},
	{"getPrimitiveKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getPrimitiveKind, int16_t)},
	{"getPrimitiveType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getPrimitiveType, $XSSimpleTypeDefinition*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getType, int16_t)},
	{"getTypeCategory", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getTypeCategory, int16_t)},
	{"getVariety", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getVariety, int16_t)},
	{"getWhitespace", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getWhitespace, int16_t), "com.sun.org.apache.xerces.internal.impl.dv.DatatypeException"},
	{"getWrappedXSSimpleType", "()Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, getWrappedXSSimpleType, $XSSimpleType*)},
	{"isDefinedFacet", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, isDefinedFacet, bool, int16_t)},
	{"isEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, isEqual, bool, Object$*, Object$*)},
	{"isFinal", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, isFinal, bool, int16_t)},
	{"isFixedFacet", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, isFixedFacet, bool, int16_t)},
	{"isIDType", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, isIDType, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, toString, $String*)},
	{"validate", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)V", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, validate, void, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, validate, $Object*, $String*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDelegate, validate, $Object*, Object$*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XSSimpleTypeDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDelegate",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType",
	_XSSimpleTypeDelegate_FieldInfo_,
	_XSSimpleTypeDelegate_MethodInfo_
};

$Object* allocate$XSSimpleTypeDelegate($Class* clazz) {
	return $of($alloc(XSSimpleTypeDelegate));
}

void XSSimpleTypeDelegate::init$($XSSimpleType* type) {
	if (type == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, type, type);
}

$XSSimpleType* XSSimpleTypeDelegate::getWrappedXSSimpleType() {
	return this->type;
}

$XSObjectList* XSSimpleTypeDelegate::getAnnotations() {
	return $nc(this->type)->getAnnotations();
}

bool XSSimpleTypeDelegate::getBounded() {
	return $nc(this->type)->getBounded();
}

int16_t XSSimpleTypeDelegate::getBuiltInKind() {
	return $nc(this->type)->getBuiltInKind();
}

int16_t XSSimpleTypeDelegate::getDefinedFacets() {
	return $nc(this->type)->getDefinedFacets();
}

$XSObjectList* XSSimpleTypeDelegate::getFacets() {
	return $nc(this->type)->getFacets();
}

$XSObject* XSSimpleTypeDelegate::getFacet(int32_t facetType) {
	return $nc(this->type)->getFacet(facetType);
}

bool XSSimpleTypeDelegate::getFinite() {
	return $nc(this->type)->getFinite();
}

int16_t XSSimpleTypeDelegate::getFixedFacets() {
	return $nc(this->type)->getFixedFacets();
}

$XSSimpleTypeDefinition* XSSimpleTypeDelegate::getItemType() {
	return $nc(this->type)->getItemType();
}

$StringList* XSSimpleTypeDelegate::getLexicalEnumeration() {
	return $nc(this->type)->getLexicalEnumeration();
}

$String* XSSimpleTypeDelegate::getLexicalFacetValue(int16_t facetName) {
	return $nc(this->type)->getLexicalFacetValue(facetName);
}

$StringList* XSSimpleTypeDelegate::getLexicalPattern() {
	return $nc(this->type)->getLexicalPattern();
}

$XSObjectList* XSSimpleTypeDelegate::getMemberTypes() {
	return $nc(this->type)->getMemberTypes();
}

$XSObjectList* XSSimpleTypeDelegate::getMultiValueFacets() {
	return $nc(this->type)->getMultiValueFacets();
}

bool XSSimpleTypeDelegate::getNumeric() {
	return $nc(this->type)->getNumeric();
}

int16_t XSSimpleTypeDelegate::getOrdered() {
	return $nc(this->type)->getOrdered();
}

$XSSimpleTypeDefinition* XSSimpleTypeDelegate::getPrimitiveType() {
	return $nc(this->type)->getPrimitiveType();
}

int16_t XSSimpleTypeDelegate::getVariety() {
	return $nc(this->type)->getVariety();
}

bool XSSimpleTypeDelegate::isDefinedFacet(int16_t facetName) {
	return $nc(this->type)->isDefinedFacet(facetName);
}

bool XSSimpleTypeDelegate::isFixedFacet(int16_t facetName) {
	return $nc(this->type)->isFixedFacet(facetName);
}

bool XSSimpleTypeDelegate::derivedFrom($String* namespace$, $String* name, int16_t derivationMethod) {
	return $nc(this->type)->derivedFrom(namespace$, name, derivationMethod);
}

bool XSSimpleTypeDelegate::derivedFromType($XSTypeDefinition* ancestorType, int16_t derivationMethod) {
	return $nc(this->type)->derivedFromType(ancestorType, derivationMethod);
}

bool XSSimpleTypeDelegate::getAnonymous() {
	return $nc(this->type)->getAnonymous();
}

$XSTypeDefinition* XSSimpleTypeDelegate::getBaseType() {
	return $nc(this->type)->getBaseType();
}

int16_t XSSimpleTypeDelegate::getFinal() {
	return $nc(this->type)->getFinal();
}

int16_t XSSimpleTypeDelegate::getTypeCategory() {
	return $nc(this->type)->getTypeCategory();
}

bool XSSimpleTypeDelegate::isFinal(int16_t restriction) {
	return $nc(this->type)->isFinal(restriction);
}

$String* XSSimpleTypeDelegate::getName() {
	return $nc(this->type)->getName();
}

$String* XSSimpleTypeDelegate::getNamespace() {
	return $nc(this->type)->getNamespace();
}

$XSNamespaceItem* XSSimpleTypeDelegate::getNamespaceItem() {
	return $nc(this->type)->getNamespaceItem();
}

int16_t XSSimpleTypeDelegate::getType() {
	return $nc(this->type)->getType();
}

void XSSimpleTypeDelegate::applyFacets($XSFacets* facets, int16_t presentFacet, int16_t fixedFacet, $ValidationContext* context) {
	$nc(this->type)->applyFacets(facets, presentFacet, fixedFacet, context);
}

int16_t XSSimpleTypeDelegate::getPrimitiveKind() {
	return $nc(this->type)->getPrimitiveKind();
}

int16_t XSSimpleTypeDelegate::getWhitespace() {
	return $nc(this->type)->getWhitespace();
}

bool XSSimpleTypeDelegate::isEqual(Object$* value1, Object$* value2) {
	return $nc(this->type)->isEqual(value1, value2);
}

bool XSSimpleTypeDelegate::isIDType() {
	return $nc(this->type)->isIDType();
}

void XSSimpleTypeDelegate::validate($ValidationContext* context, $ValidatedInfo* validatedInfo) {
	$nc(this->type)->validate(context, validatedInfo);
}

$Object* XSSimpleTypeDelegate::validate($String* content, $ValidationContext* context, $ValidatedInfo* validatedInfo) {
	return $of($nc(this->type)->validate(content, context, validatedInfo));
}

$Object* XSSimpleTypeDelegate::validate(Object$* content, $ValidationContext* context, $ValidatedInfo* validatedInfo) {
	return $of($nc(this->type)->validate(content, context, validatedInfo));
}

$String* XSSimpleTypeDelegate::toString() {
	return $nc($of(this->type))->toString();
}

XSSimpleTypeDelegate::XSSimpleTypeDelegate() {
}

$Class* XSSimpleTypeDelegate::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDelegate, name, initialize, &_XSSimpleTypeDelegate_ClassInfo_, allocate$XSSimpleTypeDelegate);
	return class$;
}

$Class* XSSimpleTypeDelegate::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com