#include <com/sun/org/apache/xerces/internal/impl/xs/AttributePSVImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/PSVIErrorList.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef VALIDATION_NONE
#undef VALIDITY_NOTKNOWN

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $PSVIErrorList = ::com::sun::org::apache::xerces::internal::impl::xs::PSVIErrorList;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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

$CompoundAttribute _AttributePSVImpl_MethodAnnotations_getActualNormalizedValue3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _AttributePSVImpl_MethodAnnotations_getActualNormalizedValueType4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _AttributePSVImpl_MethodAnnotations_getItemValueTypes9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _AttributePSVImpl_MethodAnnotations_getSchemaNormalizedValue12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AttributePSVImpl_FieldInfo_[] = {
	{"fDeclaration", "Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PROTECTED, $field(AttributePSVImpl, fDeclaration)},
	{"fTypeDecl", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PROTECTED, $field(AttributePSVImpl, fTypeDecl)},
	{"fSpecified", "Z", nullptr, $PROTECTED, $field(AttributePSVImpl, fSpecified)},
	{"fValue", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PROTECTED, $field(AttributePSVImpl, fValue)},
	{"fValidationAttempted", "S", nullptr, $PROTECTED, $field(AttributePSVImpl, fValidationAttempted)},
	{"fValidity", "S", nullptr, $PROTECTED, $field(AttributePSVImpl, fValidity)},
	{"fErrors", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(AttributePSVImpl, fErrors)},
	{"fValidationContext", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AttributePSVImpl, fValidationContext)},
	{"fIsConstant", "Z", nullptr, $PROTECTED, $field(AttributePSVImpl, fIsConstant)},
	{}
};

$MethodInfo _AttributePSVImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AttributePSVImpl, init$, void)},
	{"<init>", "(ZLcom/sun/org/apache/xerces/internal/xs/AttributePSVI;)V", nullptr, $PUBLIC, $method(AttributePSVImpl, init$, void, bool, $AttributePSVI*)},
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, constant, $ItemPSVI*)},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttributePSVImpl, getActualNormalizedValue, $Object*), nullptr, nullptr, _AttributePSVImpl_MethodAnnotations_getActualNormalizedValue3},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttributePSVImpl, getActualNormalizedValueType, int16_t), nullptr, nullptr, _AttributePSVImpl_MethodAnnotations_getActualNormalizedValueType4},
	{"getAttributeDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getAttributeDeclaration, $XSAttributeDeclaration*)},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getErrorCodes, $StringList*)},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getErrorMessages, $StringList*)},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getIsSchemaSpecified, bool)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttributePSVImpl, getItemValueTypes, $ShortList*), nullptr, nullptr, _AttributePSVImpl_MethodAnnotations_getItemValueTypes9},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getSchemaDefault, $String*)},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(AttributePSVImpl, getSchemaNormalizedValue, $String*), nullptr, nullptr, _AttributePSVImpl_MethodAnnotations_getSchemaNormalizedValue12},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getSchemaValue, $XSValue*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getTypeDefinition, $XSTypeDefinition*)},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getValidationAttempted, int16_t)},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getValidationContext, $String*)},
	{"getValidity", "()S", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, getValidity, int16_t)},
	{"isConstant", "()Z", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, isConstant, bool)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(AttributePSVImpl, reset, void)},
	{}
};

$ClassInfo _AttributePSVImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.AttributePSVImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.AttributePSVI",
	_AttributePSVImpl_FieldInfo_,
	_AttributePSVImpl_MethodInfo_
};

$Object* allocate$AttributePSVImpl($Class* clazz) {
	return $of($alloc(AttributePSVImpl));
}

void AttributePSVImpl::init$() {
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fSpecified = false;
	$set(this, fValue, $new($ValidatedInfo));
	this->fValidationAttempted = $AttributePSVI::VALIDATION_NONE;
	this->fValidity = $AttributePSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
}

void AttributePSVImpl::init$(bool isConstant, $AttributePSVI* attrPSVI) {
	$useLocalCurrentObjectStackCache();
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fSpecified = false;
	$set(this, fValue, $new($ValidatedInfo));
	this->fValidationAttempted = $AttributePSVI::VALIDATION_NONE;
	this->fValidity = $AttributePSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
	$set(this, fDeclaration, $nc(attrPSVI)->getAttributeDeclaration());
	$set(this, fTypeDecl, attrPSVI->getTypeDefinition());
	this->fSpecified = attrPSVI->getIsSchemaSpecified();
	$nc(this->fValue)->copyFrom($(attrPSVI->getSchemaValue()));
	this->fValidationAttempted = attrPSVI->getValidationAttempted();
	this->fValidity = attrPSVI->getValidity();
	if ($instanceOf(AttributePSVImpl, attrPSVI)) {
		$var(AttributePSVImpl, attrPSVIImpl, $cast(AttributePSVImpl, attrPSVI));
		$set(this, fErrors, (attrPSVIImpl->fErrors != nullptr) ? $cast($StringArray, $nc(attrPSVIImpl->fErrors)->clone()) : ($StringArray*)nullptr);
	} else {
		$var($StringList, errorCodes, attrPSVI->getErrorCodes());
		int32_t length = $nc(errorCodes)->getLength();
		if (length > 0) {
			$var($StringList, errorMessages, attrPSVI->getErrorMessages());
			$var($StringArray, errors, $new($StringArray, length << 1));
			{
				int32_t i = 0;
				int32_t j = 0;
				for (; i < length; ++i) {
					errors->set(j++, $(errorCodes->item(i)));
					errors->set(j++, $($nc(errorMessages)->item(i)));
				}
			}
			$set(this, fErrors, errors);
		}
	}
	$set(this, fValidationContext, attrPSVI->getValidationContext());
	this->fIsConstant = isConstant;
}

$ItemPSVI* AttributePSVImpl::constant() {
	if (isConstant()) {
		return this;
	}
	return $new(AttributePSVImpl, true, this);
}

bool AttributePSVImpl::isConstant() {
	return this->fIsConstant;
}

$String* AttributePSVImpl::getSchemaDefault() {
	return this->fDeclaration == nullptr ? ($String*)nullptr : $nc(this->fDeclaration)->getConstraintValue();
}

$String* AttributePSVImpl::getSchemaNormalizedValue() {
	return $nc(this->fValue)->getNormalizedValue();
}

bool AttributePSVImpl::getIsSchemaSpecified() {
	return this->fSpecified;
}

int16_t AttributePSVImpl::getValidationAttempted() {
	return this->fValidationAttempted;
}

int16_t AttributePSVImpl::getValidity() {
	return this->fValidity;
}

$StringList* AttributePSVImpl::getErrorCodes() {
	if (this->fErrors == nullptr || $nc(this->fErrors)->length == 0) {
		$init($StringListImpl);
		return $StringListImpl::EMPTY_LIST;
	}
	return $new($PSVIErrorList, this->fErrors, true);
}

$StringList* AttributePSVImpl::getErrorMessages() {
	if (this->fErrors == nullptr || $nc(this->fErrors)->length == 0) {
		$init($StringListImpl);
		return $StringListImpl::EMPTY_LIST;
	}
	return $new($PSVIErrorList, this->fErrors, false);
}

$String* AttributePSVImpl::getValidationContext() {
	return this->fValidationContext;
}

$XSTypeDefinition* AttributePSVImpl::getTypeDefinition() {
	return this->fTypeDecl;
}

$XSSimpleTypeDefinition* AttributePSVImpl::getMemberTypeDefinition() {
	return $nc(this->fValue)->getMemberTypeDefinition();
}

$XSAttributeDeclaration* AttributePSVImpl::getAttributeDeclaration() {
	return this->fDeclaration;
}

$Object* AttributePSVImpl::getActualNormalizedValue() {
	return $of($nc(this->fValue)->getActualValue());
}

int16_t AttributePSVImpl::getActualNormalizedValueType() {
	return $nc(this->fValue)->getActualValueType();
}

$ShortList* AttributePSVImpl::getItemValueTypes() {
	return $nc(this->fValue)->getListValueTypes();
}

$XSValue* AttributePSVImpl::getSchemaValue() {
	return this->fValue;
}

void AttributePSVImpl::reset() {
	$nc(this->fValue)->reset();
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fSpecified = false;
	this->fValidationAttempted = $AttributePSVI::VALIDATION_NONE;
	this->fValidity = $AttributePSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
}

AttributePSVImpl::AttributePSVImpl() {
}

$Class* AttributePSVImpl::load$($String* name, bool initialize) {
	$loadClass(AttributePSVImpl, name, initialize, &_AttributePSVImpl_ClassInfo_, allocate$AttributePSVImpl);
	return class$;
}

$Class* AttributePSVImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com