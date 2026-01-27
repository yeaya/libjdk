#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef ATTRIBUTE_USE
#undef EMPTY_LIST
#undef UNAVAILABLE_DT
#undef USE_OPTIONAL
#undef USE_REQUIRED
#undef VC_NONE

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
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

$CompoundAttribute _XSAttributeUseImpl_MethodAnnotations_getActualVC1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUseImpl_MethodAnnotations_getActualVCType2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUseImpl_MethodAnnotations_getConstraintValue6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XSAttributeUseImpl_MethodAnnotations_getItemValueTypes7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XSAttributeUseImpl_FieldInfo_[] = {
	{"fAttrDecl", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PUBLIC, $field(XSAttributeUseImpl, fAttrDecl)},
	{"fUse", "S", nullptr, $PUBLIC, $field(XSAttributeUseImpl, fUse)},
	{"fConstraintType", "S", nullptr, $PUBLIC, $field(XSAttributeUseImpl, fConstraintType)},
	{"fDefault", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PUBLIC, $field(XSAttributeUseImpl, fDefault)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSAttributeUseImpl, fAnnotations)},
	{}
};

$MethodInfo _XSAttributeUseImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSAttributeUseImpl, init$, void)},
	{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeUseImpl, getActualVC, $Object*), nullptr, nullptr, _XSAttributeUseImpl_MethodAnnotations_getActualVC1},
	{"getActualVCType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeUseImpl, getActualVCType, int16_t), nullptr, nullptr, _XSAttributeUseImpl_MethodAnnotations_getActualVCType2},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getAnnotations, $XSObjectList*)},
	{"getAttrDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getAttrDeclaration, $XSAttributeDeclaration*)},
	{"getConstraintType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getConstraintType, int16_t)},
	{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeUseImpl, getConstraintValue, $String*), nullptr, nullptr, _XSAttributeUseImpl_MethodAnnotations_getConstraintValue6},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(XSAttributeUseImpl, getItemValueTypes, $ShortList*), nullptr, nullptr, _XSAttributeUseImpl_MethodAnnotations_getItemValueTypes7},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getNamespaceItem, $XSNamespaceItem*)},
	{"getRequired", "()Z", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getRequired, bool)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getType, int16_t)},
	{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, getValueConstraintValue, $XSValue*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSAttributeUseImpl, reset, void)},
	{}
};

$ClassInfo _XSAttributeUseImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSAttributeUseImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSAttributeUse",
	_XSAttributeUseImpl_FieldInfo_,
	_XSAttributeUseImpl_MethodInfo_
};

$Object* allocate$XSAttributeUseImpl($Class* clazz) {
	return $of($alloc(XSAttributeUseImpl));
}

void XSAttributeUseImpl::init$() {
	$set(this, fAttrDecl, nullptr);
	this->fUse = $SchemaSymbols::USE_OPTIONAL;
	this->fConstraintType = $XSConstants::VC_NONE;
	$set(this, fDefault, nullptr);
	$set(this, fAnnotations, nullptr);
}

void XSAttributeUseImpl::reset() {
	$set(this, fDefault, nullptr);
	$set(this, fAttrDecl, nullptr);
	this->fUse = $SchemaSymbols::USE_OPTIONAL;
	this->fConstraintType = $XSConstants::VC_NONE;
	$set(this, fAnnotations, nullptr);
}

int16_t XSAttributeUseImpl::getType() {
	return $XSConstants::ATTRIBUTE_USE;
}

$String* XSAttributeUseImpl::getName() {
	return nullptr;
}

$String* XSAttributeUseImpl::getNamespace() {
	return nullptr;
}

bool XSAttributeUseImpl::getRequired() {
	return this->fUse == $SchemaSymbols::USE_REQUIRED;
}

$XSAttributeDeclaration* XSAttributeUseImpl::getAttrDeclaration() {
	return this->fAttrDecl;
}

int16_t XSAttributeUseImpl::getConstraintType() {
	return this->fConstraintType;
}

$String* XSAttributeUseImpl::getConstraintValue() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($String*)nullptr : $nc(this->fDefault)->stringValue();
}

$XSNamespaceItem* XSAttributeUseImpl::getNamespaceItem() {
	return nullptr;
}

$Object* XSAttributeUseImpl::getActualVC() {
	return $of(getConstraintType() == $XSConstants::VC_NONE ? ($Object*)nullptr : $nc(this->fDefault)->actualValue);
}

int16_t XSAttributeUseImpl::getActualVCType() {
	return getConstraintType() == $XSConstants::VC_NONE ? $XSConstants::UNAVAILABLE_DT : $nc(this->fDefault)->actualValueType;
}

$ShortList* XSAttributeUseImpl::getItemValueTypes() {
	return getConstraintType() == $XSConstants::VC_NONE ? ($ShortList*)nullptr : $nc(this->fDefault)->itemValueTypes;
}

$XSValue* XSAttributeUseImpl::getValueConstraintValue() {
	return this->fDefault;
}

$XSObjectList* XSAttributeUseImpl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

XSAttributeUseImpl::XSAttributeUseImpl() {
}

$Class* XSAttributeUseImpl::load$($String* name, bool initialize) {
	$loadClass(XSAttributeUseImpl, name, initialize, &_XSAttributeUseImpl_ClassInfo_, allocate$XSAttributeUseImpl);
	return class$;
}

$Class* XSAttributeUseImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com