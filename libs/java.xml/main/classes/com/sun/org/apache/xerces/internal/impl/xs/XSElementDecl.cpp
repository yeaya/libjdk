#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef ABSTRACT
#undef CONSTRAINT_MASK
#undef DERIVATION_NONE
#undef ELEMENT_DECLARATION
#undef EMPTY_LIST
#undef INITIAL_SIZE
#undef NILLABLE
#undef SCOPE_ABSENT
#undef SCOPE_GLOBAL
#undef SCOPE_LOCAL
#undef UNAVAILABLE_DT
#undef VC_NONE

using $IdentityConstraintArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $XSNamedMapImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$CompoundAttribute _XSElementDecl_MethodAnnotations_getActualVC4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDecl_MethodAnnotations_getActualVCType5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDecl_MethodAnnotations_getConstraintValue9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSElementDecl_MethodAnnotations_getItemValueTypes14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XSElementDecl_FieldInfo_[] = {
	{"SCOPE_ABSENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSElementDecl, SCOPE_ABSENT)},
	{"SCOPE_GLOBAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSElementDecl, SCOPE_GLOBAL)},
	{"SCOPE_LOCAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSElementDecl, SCOPE_LOCAL)},
	{"fName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSElementDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSElementDecl, fTargetNamespace)},
	{"fType", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $field(XSElementDecl, fType)},
	{"fUnresolvedTypeName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $field(XSElementDecl, fUnresolvedTypeName)},
	{"fMiscFlags", "S", nullptr, 0, $field(XSElementDecl, fMiscFlags)},
	{"fScope", "S", nullptr, $PUBLIC, $field(XSElementDecl, fScope)},
	{"fEnclosingCT", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, 0, $field(XSElementDecl, fEnclosingCT)},
	{"fBlock", "S", nullptr, $PUBLIC, $field(XSElementDecl, fBlock)},
	{"fFinal", "S", nullptr, $PUBLIC, $field(XSElementDecl, fFinal)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSElementDecl, fAnnotations)},
	{"fDefault", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PUBLIC, $field(XSElementDecl, fDefault)},
	{"fSubGroup", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC, $field(XSElementDecl, fSubGroup)},
	{"INITIAL_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XSElementDecl, INITIAL_SIZE)},
	{"fIDCPos", "I", nullptr, 0, $field(XSElementDecl, fIDCPos)},
	{"fIDConstraints", "[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, 0, $field(XSElementDecl, fIDConstraints)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSElementDecl, fNamespaceItem)},
	{"CONSTRAINT_MASK", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSElementDecl, CONSTRAINT_MASK)},
	{"NILLABLE", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSElementDecl, NILLABLE)},
	{"ABSTRACT", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSElementDecl, ABSTRACT)},
	{"fDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSElementDecl, fDescription)},
	{}
};

$MethodInfo _XSElementDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSElementDecl, init$, void)},
	{"addIDConstraint", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, addIDConstraint, void, $IdentityConstraint*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, equals, bool, Object$*)},
	{"getAbstract", "()Z", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getAbstract, bool)},
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSElementDecl, getActualVC, $Object*), nullptr, nullptr, _XSElementDecl_MethodAnnotations_getActualVC4},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSElementDecl, getActualVCType, int16_t), nullptr, nullptr, _XSElementDecl_MethodAnnotations_getActualVCType5},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getAnnotations, $XSObjectList*)},
	{"getConstraintType", "()S", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getConstraintType, int16_t)},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSElementDecl, getConstraintValue, $String*), nullptr, nullptr, _XSElementDecl_MethodAnnotations_getConstraintValue9},
	{"getDisallowedSubstitutions", "()S", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getDisallowedSubstitutions, int16_t)},
	{"getEnclosingCTDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getEnclosingCTDefinition, $XSComplexTypeDefinition*)},
	{"getIDConstraints", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getIDConstraints, $IdentityConstraintArray*)},
	{"getIdentityConstraints", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getIdentityConstraints, $XSNamedMap*)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSElementDecl, getItemValueTypes, $ShortList*), nullptr, nullptr, _XSElementDecl_MethodAnnotations_getItemValueTypes14},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getNillable", "()Z", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getNillable, bool)},
	{"getScope", "()S", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getScope, int16_t)},
	{"getSubstitutionGroupAffiliation", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getSubstitutionGroupAffiliation, $XSElementDeclaration*)},
	{"getSubstitutionGroupExclusions", "()S", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getSubstitutionGroupExclusions, int16_t)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getType, int16_t)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getTypeDefinition, $XSTypeDefinition*)},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, getValueConstraintValue, $XSValue*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, hashCode, int32_t)},
	{"isDisallowedSubstitution", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, isDisallowedSubstitution, bool, int16_t)},
	{"isSubstitutionGroupExclusion", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, isSubstitutionGroupExclusion, bool, int16_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, reset, void)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $STATIC | $FINAL, $staticMethod(XSElementDecl, resize, $IdentityConstraintArray*, $IdentityConstraintArray*, int32_t)},
	{"setConstraintType", "(S)V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, setConstraintType, void, int16_t)},
	{"setIsAbstract", "()V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, setIsAbstract, void)},
	{"setIsGlobal", "()V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, setIsGlobal, void)},
	{"setIsLocal", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, setIsLocal, void, $XSComplexTypeDecl*)},
	{"setIsNillable", "()V", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, setIsNillable, void)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0, $virtualMethod(XSElementDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSElementDecl, toString, $String*)},
	{}
};

$ClassInfo _XSElementDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSElementDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSElementDeclaration",
	_XSElementDecl_FieldInfo_,
	_XSElementDecl_MethodInfo_
};

$Object* allocate$XSElementDecl($Class* clazz) {
	return $of($alloc(XSElementDecl));
}

void XSElementDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fType, nullptr);
	$set(this, fUnresolvedTypeName, nullptr);
	this->fMiscFlags = (int16_t)0;
	this->fScope = $XSConstants::SCOPE_ABSENT;
	$set(this, fEnclosingCT, nullptr);
	this->fBlock = $XSConstants::DERIVATION_NONE;
	this->fFinal = $XSConstants::DERIVATION_NONE;
	$set(this, fAnnotations, nullptr);
	$set(this, fDefault, nullptr);
	$set(this, fSubGroup, nullptr);
	this->fIDCPos = 0;
	$set(this, fIDConstraints, $new($IdentityConstraintArray, XSElementDecl::INITIAL_SIZE));
	$set(this, fNamespaceItem, nullptr);
	$set(this, fDescription, nullptr);
}

void XSElementDecl::setConstraintType(int16_t constraintType) {
	this->fMiscFlags ^= ((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSElementDecl::CONSTRAINT_MASK));
	this->fMiscFlags |= ((int32_t)(constraintType & (uint32_t)(int32_t)XSElementDecl::CONSTRAINT_MASK));
}

void XSElementDecl::setIsNillable() {
	this->fMiscFlags |= XSElementDecl::NILLABLE;
}

void XSElementDecl::setIsAbstract() {
	this->fMiscFlags |= XSElementDecl::ABSTRACT;
}

void XSElementDecl::setIsGlobal() {
	this->fScope = XSElementDecl::SCOPE_GLOBAL;
}

void XSElementDecl::setIsLocal($XSComplexTypeDecl* enclosingCT) {
	this->fScope = XSElementDecl::SCOPE_LOCAL;
	$set(this, fEnclosingCT, enclosingCT);
}

void XSElementDecl::addIDConstraint($IdentityConstraint* idc) {
	if (this->fIDCPos == $nc(this->fIDConstraints)->length) {
		$set(this, fIDConstraints, resize(this->fIDConstraints, this->fIDCPos * 2));
	}
	$nc(this->fIDConstraints)->set(this->fIDCPos++, idc);
}

$IdentityConstraintArray* XSElementDecl::getIDConstraints() {
	if (this->fIDCPos == 0) {
		return nullptr;
	}
	if (this->fIDCPos < $nc(this->fIDConstraints)->length) {
		$set(this, fIDConstraints, resize(this->fIDConstraints, this->fIDCPos));
	}
	return this->fIDConstraints;
}

$IdentityConstraintArray* XSElementDecl::resize($IdentityConstraintArray* oldArray, int32_t newSize) {
	$init(XSElementDecl);
	$var($IdentityConstraintArray, newArray, $new($IdentityConstraintArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $Math::min($nc(oldArray)->length, newSize));
	return newArray;
}

$String* XSElementDecl::toString() {
	if (this->fDescription == nullptr) {
		if (this->fTargetNamespace != nullptr) {
			int32_t var$0 = $nc(this->fTargetNamespace)->length();
			$var($StringBuffer, buffer, $new($StringBuffer, var$0 + ((this->fName != nullptr) ? $nc(this->fName)->length() : 4) + 3));
			buffer->append(u'\"');
			buffer->append(this->fTargetNamespace);
			buffer->append(u'\"');
			buffer->append(u':');
			buffer->append(this->fName);
			$set(this, fDescription, buffer->toString());
		} else {
			$set(this, fDescription, this->fName);
		}
	}
	return this->fDescription;
}

int32_t XSElementDecl::hashCode() {
	int32_t code = $nc(this->fName)->hashCode();
	if (this->fTargetNamespace != nullptr) {
		code = (code << 16) + $nc(this->fTargetNamespace)->hashCode();
	}
	return code;
}

bool XSElementDecl::equals(Object$* o) {
	return $equals(o, this);
}

void XSElementDecl::reset() {
	this->fScope = $XSConstants::SCOPE_ABSENT;
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fType, nullptr);
	$set(this, fUnresolvedTypeName, nullptr);
	this->fMiscFlags = (int16_t)0;
	this->fBlock = $XSConstants::DERIVATION_NONE;
	this->fFinal = $XSConstants::DERIVATION_NONE;
	$set(this, fDefault, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fSubGroup, nullptr);
	for (int32_t i = 0; i < this->fIDCPos; ++i) {
		$nc(this->fIDConstraints)->set(i, nullptr);
	}
	this->fIDCPos = 0;
}

int16_t XSElementDecl::getType() {
	return $XSConstants::ELEMENT_DECLARATION;
}

$String* XSElementDecl::getName() {
	return this->fName;
}

$String* XSElementDecl::getNamespace() {
	return this->fTargetNamespace;
}

$XSTypeDefinition* XSElementDecl::getTypeDefinition() {
	return this->fType;
}

int16_t XSElementDecl::getScope() {
	return this->fScope;
}

$XSComplexTypeDefinition* XSElementDecl::getEnclosingCTDefinition() {
	return this->fEnclosingCT;
}

int16_t XSElementDecl::getConstraintType() {
	return (int16_t)((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSElementDecl::CONSTRAINT_MASK));
}

$String* XSElementDecl::getConstraintValue() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($String*)nullptr : $nc(this->fDefault)->stringValue();
}

bool XSElementDecl::getNillable() {
	return (((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSElementDecl::NILLABLE)) != 0);
}

$XSNamedMap* XSElementDecl::getIdentityConstraints() {
	return $new($XSNamedMapImpl, $fcast($XSObjectArray, this->fIDConstraints), this->fIDCPos);
}

$XSElementDeclaration* XSElementDecl::getSubstitutionGroupAffiliation() {
	return this->fSubGroup;
}

bool XSElementDecl::isSubstitutionGroupExclusion(int16_t exclusion) {
	return ((int32_t)(this->fFinal & (uint32_t)(int32_t)exclusion)) != 0;
}

int16_t XSElementDecl::getSubstitutionGroupExclusions() {
	return this->fFinal;
}

bool XSElementDecl::isDisallowedSubstitution(int16_t disallowed) {
	return ((int32_t)(this->fBlock & (uint32_t)(int32_t)disallowed)) != 0;
}

int16_t XSElementDecl::getDisallowedSubstitutions() {
	return this->fBlock;
}

bool XSElementDecl::getAbstract() {
	return (((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSElementDecl::ABSTRACT)) != 0);
}

$XSAnnotation* XSElementDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSElementDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSElementDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSElementDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

$Object* XSElementDecl::getActualVC() {
	return $of(getConstraintType() == $XSConstants::VC_NONE ? ($Object*)nullptr : $nc(this->fDefault)->actualValue);
}

int16_t XSElementDecl::getActualVCType() {
	return getConstraintType() == $XSConstants::VC_NONE ? $XSConstants::UNAVAILABLE_DT : $nc(this->fDefault)->actualValueType;
}

$ShortList* XSElementDecl::getItemValueTypes() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($ShortList*)nullptr : $nc(this->fDefault)->itemValueTypes;
}

$XSValue* XSElementDecl::getValueConstraintValue() {
	return this->fDefault;
}

XSElementDecl::XSElementDecl() {
}

$Class* XSElementDecl::load$($String* name, bool initialize) {
	$loadClass(XSElementDecl, name, initialize, &_XSElementDecl_ClassInfo_, allocate$XSElementDecl);
	return class$;
}

$Class* XSElementDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com