#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARATION
#undef EMPTY_LIST
#undef SCOPE_ABSENT
#undef SCOPE_GLOBAL
#undef SCOPE_LOCAL
#undef UNAVAILABLE_DT
#undef VC_NONE

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$CompoundAttribute _XSAttributeDecl_MethodAnnotations_getActualVC1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDecl_MethodAnnotations_getActualVCType2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDecl_MethodAnnotations_getConstraintValue6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeDecl_MethodAnnotations_getItemValueTypes8[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XSAttributeDecl_FieldInfo_[] = {
	{"SCOPE_ABSENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAttributeDecl, SCOPE_ABSENT)},
	{"SCOPE_GLOBAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAttributeDecl, SCOPE_GLOBAL)},
	{"SCOPE_LOCAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSAttributeDecl, SCOPE_LOCAL)},
	{"fName", "Ljava/lang/String;", nullptr, 0, $field(XSAttributeDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, 0, $field(XSAttributeDecl, fTargetNamespace)},
	{"fType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, 0, $field(XSAttributeDecl, fType)},
	{"fUnresolvedTypeName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $field(XSAttributeDecl, fUnresolvedTypeName)},
	{"fConstraintType", "S", nullptr, 0, $field(XSAttributeDecl, fConstraintType)},
	{"fScope", "S", nullptr, 0, $field(XSAttributeDecl, fScope)},
	{"fEnclosingCT", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, 0, $field(XSAttributeDecl, fEnclosingCT)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, 0, $field(XSAttributeDecl, fAnnotations)},
	{"fDefault", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, 0, $field(XSAttributeDecl, fDefault)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSAttributeDecl, fNamespaceItem)},
	{}
};

$MethodInfo _XSAttributeDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSAttributeDecl, init$, void)},
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeDecl, getActualVC, $Object*), nullptr, nullptr, _XSAttributeDecl_MethodAnnotations_getActualVC1},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeDecl, getActualVCType, int16_t), nullptr, nullptr, _XSAttributeDecl_MethodAnnotations_getActualVCType2},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getAnnotations, $XSObjectList*)},
	{"getConstraintType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getConstraintType, int16_t)},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeDecl, getConstraintValue, $String*), nullptr, nullptr, _XSAttributeDecl_MethodAnnotations_getConstraintValue6},
	{"getEnclosingCTDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getEnclosingCTDefinition, $XSComplexTypeDefinition*)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeDecl, getItemValueTypes, $ShortList*), nullptr, nullptr, _XSAttributeDecl_MethodAnnotations_getItemValueTypes8},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getScope", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getScope, int16_t)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getType, int16_t)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getValInfo", "()Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getValInfo, $ValidatedInfo*)},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, getValueConstraintValue, $XSValue*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, reset, void)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0, $virtualMethod(XSAttributeDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;SSLcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)V", nullptr, $PUBLIC, $virtualMethod(XSAttributeDecl, setValues, void, $String*, $String*, $XSSimpleType*, int16_t, int16_t, $ValidatedInfo*, $XSComplexTypeDecl*, $XSObjectList*)},
	{}
};

$ClassInfo _XSAttributeDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSAttributeDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSAttributeDeclaration",
	_XSAttributeDecl_FieldInfo_,
	_XSAttributeDecl_MethodInfo_
};

$Object* allocate$XSAttributeDecl($Class* clazz) {
	return $of($alloc(XSAttributeDecl));
}

void XSAttributeDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fType, nullptr);
	$set(this, fUnresolvedTypeName, nullptr);
	this->fConstraintType = $XSConstants::VC_NONE;
	this->fScope = $XSConstants::SCOPE_ABSENT;
	$set(this, fEnclosingCT, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fDefault, nullptr);
	$set(this, fNamespaceItem, nullptr);
}

void XSAttributeDecl::setValues($String* name, $String* targetNamespace, $XSSimpleType* simpleType, int16_t constraintType, int16_t scope, $ValidatedInfo* valInfo, $XSComplexTypeDecl* enclosingCT, $XSObjectList* annotations) {
	$set(this, fName, name);
	$set(this, fTargetNamespace, targetNamespace);
	$set(this, fType, simpleType);
	this->fConstraintType = constraintType;
	this->fScope = scope;
	$set(this, fDefault, valInfo);
	$set(this, fEnclosingCT, enclosingCT);
	$set(this, fAnnotations, annotations);
}

void XSAttributeDecl::reset() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fType, nullptr);
	$set(this, fUnresolvedTypeName, nullptr);
	this->fConstraintType = $XSConstants::VC_NONE;
	this->fScope = $XSConstants::SCOPE_ABSENT;
	$set(this, fDefault, nullptr);
	$set(this, fAnnotations, nullptr);
}

int16_t XSAttributeDecl::getType() {
	return $XSConstants::ATTRIBUTE_DECLARATION;
}

$String* XSAttributeDecl::getName() {
	return this->fName;
}

$String* XSAttributeDecl::getNamespace() {
	return this->fTargetNamespace;
}

$XSSimpleTypeDefinition* XSAttributeDecl::getTypeDefinition() {
	return this->fType;
}

int16_t XSAttributeDecl::getScope() {
	return this->fScope;
}

$XSComplexTypeDefinition* XSAttributeDecl::getEnclosingCTDefinition() {
	return this->fEnclosingCT;
}

int16_t XSAttributeDecl::getConstraintType() {
	return this->fConstraintType;
}

$String* XSAttributeDecl::getConstraintValue() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($String*)nullptr : $nc(this->fDefault)->stringValue();
}

$XSAnnotation* XSAttributeDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSAttributeDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$ValidatedInfo* XSAttributeDecl::getValInfo() {
	return this->fDefault;
}

$XSNamespaceItem* XSAttributeDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSAttributeDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

$Object* XSAttributeDecl::getActualVC() {
	return $of(getConstraintType() == $XSConstants::VC_NONE ? ($Object*)nullptr : $nc(this->fDefault)->actualValue);
}

int16_t XSAttributeDecl::getActualVCType() {
	return getConstraintType() == $XSConstants::VC_NONE ? $XSConstants::UNAVAILABLE_DT : $nc(this->fDefault)->actualValueType;
}

$ShortList* XSAttributeDecl::getItemValueTypes() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($ShortList*)nullptr : $nc(this->fDefault)->itemValueTypes;
}

$XSValue* XSAttributeDecl::getValueConstraintValue() {
	return this->fDefault;
}

XSAttributeDecl::XSAttributeDecl() {
}

$Class* XSAttributeDecl::load$($String* name, bool initialize) {
	$loadClass(XSAttributeDecl, name, initialize, &_XSAttributeDecl_ClassInfo_, allocate$XSAttributeDecl);
	return class$;
}

$Class* XSAttributeDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com