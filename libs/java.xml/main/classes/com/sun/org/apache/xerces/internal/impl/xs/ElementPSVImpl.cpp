#include <com/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/PSVIErrorList.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef VALIDATION_NONE
#undef VALIDITY_NOTKNOWN

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $PSVIErrorList = ::com::sun::org::apache::xerces::internal::impl::xs::PSVIErrorList;
using $XSModelImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
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

$CompoundAttribute _ElementPSVImpl_MethodAnnotations_getActualNormalizedValue4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ElementPSVImpl_MethodAnnotations_getActualNormalizedValueType5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ElementPSVImpl_MethodAnnotations_getItemValueTypes10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ElementPSVImpl_MethodAnnotations_getSchemaNormalizedValue16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ElementPSVImpl_FieldInfo_[] = {
	{"fDeclaration", "Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PROTECTED, $field(ElementPSVImpl, fDeclaration)},
	{"fTypeDecl", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PROTECTED, $field(ElementPSVImpl, fTypeDecl)},
	{"fNil", "Z", nullptr, $PROTECTED, $field(ElementPSVImpl, fNil)},
	{"fSpecified", "Z", nullptr, $PROTECTED, $field(ElementPSVImpl, fSpecified)},
	{"fValue", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PROTECTED, $field(ElementPSVImpl, fValue)},
	{"fNotation", "Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PROTECTED, $field(ElementPSVImpl, fNotation)},
	{"fValidationAttempted", "S", nullptr, $PROTECTED, $field(ElementPSVImpl, fValidationAttempted)},
	{"fValidity", "S", nullptr, $PROTECTED, $field(ElementPSVImpl, fValidity)},
	{"fErrors", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementPSVImpl, fErrors)},
	{"fValidationContext", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementPSVImpl, fValidationContext)},
	{"fGrammars", "[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PROTECTED, $field(ElementPSVImpl, fGrammars)},
	{"fSchemaInformation", "Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PROTECTED, $field(ElementPSVImpl, fSchemaInformation)},
	{"fIsConstant", "Z", nullptr, $PROTECTED, $field(ElementPSVImpl, fIsConstant)},
	{}
};

$MethodInfo _ElementPSVImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ElementPSVImpl, init$, void)},
	{"<init>", "(ZLcom/sun/org/apache/xerces/internal/xs/ElementPSVI;)V", nullptr, $PUBLIC, $method(ElementPSVImpl, init$, void, bool, $ElementPSVI*)},
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, constant, $ItemPSVI*)},
	{"copySchemaInformationTo", "(Lcom/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl;)V", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, copySchemaInformationTo, void, ElementPSVImpl*)},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ElementPSVImpl, getActualNormalizedValue, $Object*), nullptr, nullptr, _ElementPSVImpl_MethodAnnotations_getActualNormalizedValue4},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ElementPSVImpl, getActualNormalizedValueType, int16_t), nullptr, nullptr, _ElementPSVImpl_MethodAnnotations_getActualNormalizedValueType5},
	{"getElementDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getElementDeclaration, $XSElementDeclaration*)},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getErrorCodes, $StringList*)},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getErrorMessages, $StringList*)},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getIsSchemaSpecified, bool)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ElementPSVImpl, getItemValueTypes, $ShortList*), nullptr, nullptr, _ElementPSVImpl_MethodAnnotations_getItemValueTypes10},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getNil", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getNil, bool)},
	{"getNotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getNotation, $XSNotationDeclaration*)},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getSchemaDefault, $String*)},
	{"getSchemaInformation", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ElementPSVImpl, getSchemaInformation, $XSModel*)},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ElementPSVImpl, getSchemaNormalizedValue, $String*), nullptr, nullptr, _ElementPSVImpl_MethodAnnotations_getSchemaNormalizedValue16},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getSchemaValue, $XSValue*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getTypeDefinition, $XSTypeDefinition*)},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getValidationAttempted, int16_t)},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getValidationContext, $String*)},
	{"getValidity", "()S", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, getValidity, int16_t)},
	{"isConstant", "()Z", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, isConstant, bool)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ElementPSVImpl, reset, void)},
	{}
};

$ClassInfo _ElementPSVImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.ElementPSVImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.ElementPSVI",
	_ElementPSVImpl_FieldInfo_,
	_ElementPSVImpl_MethodInfo_
};

$Object* allocate$ElementPSVImpl($Class* clazz) {
	return $of($alloc(ElementPSVImpl));
}

void ElementPSVImpl::init$() {
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fNil = false;
	this->fSpecified = false;
	$set(this, fValue, $new($ValidatedInfo));
	$set(this, fNotation, nullptr);
	this->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
	this->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
	$set(this, fGrammars, nullptr);
	$set(this, fSchemaInformation, nullptr);
}

void ElementPSVImpl::init$(bool isConstant, $ElementPSVI* elementPSVI) {
	$useLocalCurrentObjectStackCache();
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fNil = false;
	this->fSpecified = false;
	$set(this, fValue, $new($ValidatedInfo));
	$set(this, fNotation, nullptr);
	this->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
	this->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
	$set(this, fGrammars, nullptr);
	$set(this, fSchemaInformation, nullptr);
	$set(this, fDeclaration, $nc(elementPSVI)->getElementDeclaration());
	$set(this, fTypeDecl, elementPSVI->getTypeDefinition());
	this->fNil = elementPSVI->getNil();
	this->fSpecified = elementPSVI->getIsSchemaSpecified();
	$nc(this->fValue)->copyFrom($(elementPSVI->getSchemaValue()));
	$set(this, fNotation, elementPSVI->getNotation());
	this->fValidationAttempted = elementPSVI->getValidationAttempted();
	this->fValidity = elementPSVI->getValidity();
	$set(this, fValidationContext, elementPSVI->getValidationContext());
	if ($instanceOf(ElementPSVImpl, elementPSVI)) {
		$var(ElementPSVImpl, elementPSVIImpl, $cast(ElementPSVImpl, elementPSVI));
		$set(this, fErrors, (elementPSVIImpl->fErrors != nullptr) ? $cast($StringArray, $nc(elementPSVIImpl->fErrors)->clone()) : ($StringArray*)nullptr);
		elementPSVIImpl->copySchemaInformationTo(this);
	} else {
		$var($StringList, errorCodes, elementPSVI->getErrorCodes());
		int32_t length = $nc(errorCodes)->getLength();
		if (length > 0) {
			$var($StringList, errorMessages, elementPSVI->getErrorMessages());
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
		$set(this, fSchemaInformation, elementPSVI->getSchemaInformation());
	}
	this->fIsConstant = isConstant;
}

$ItemPSVI* ElementPSVImpl::constant() {
	if (isConstant()) {
		return this;
	}
	return $new(ElementPSVImpl, true, this);
}

bool ElementPSVImpl::isConstant() {
	return this->fIsConstant;
}

$String* ElementPSVImpl::getSchemaDefault() {
	return this->fDeclaration == nullptr ? ($String*)nullptr : $nc(this->fDeclaration)->getConstraintValue();
}

$String* ElementPSVImpl::getSchemaNormalizedValue() {
	return $nc(this->fValue)->getNormalizedValue();
}

bool ElementPSVImpl::getIsSchemaSpecified() {
	return this->fSpecified;
}

int16_t ElementPSVImpl::getValidationAttempted() {
	return this->fValidationAttempted;
}

int16_t ElementPSVImpl::getValidity() {
	return this->fValidity;
}

$StringList* ElementPSVImpl::getErrorCodes() {
	if (this->fErrors == nullptr || $nc(this->fErrors)->length == 0) {
		$init($StringListImpl);
		return $StringListImpl::EMPTY_LIST;
	}
	return $new($PSVIErrorList, this->fErrors, true);
}

$StringList* ElementPSVImpl::getErrorMessages() {
	if (this->fErrors == nullptr || $nc(this->fErrors)->length == 0) {
		$init($StringListImpl);
		return $StringListImpl::EMPTY_LIST;
	}
	return $new($PSVIErrorList, this->fErrors, false);
}

$String* ElementPSVImpl::getValidationContext() {
	return this->fValidationContext;
}

bool ElementPSVImpl::getNil() {
	return this->fNil;
}

$XSNotationDeclaration* ElementPSVImpl::getNotation() {
	return this->fNotation;
}

$XSTypeDefinition* ElementPSVImpl::getTypeDefinition() {
	return this->fTypeDecl;
}

$XSSimpleTypeDefinition* ElementPSVImpl::getMemberTypeDefinition() {
	return $nc(this->fValue)->getMemberTypeDefinition();
}

$XSElementDeclaration* ElementPSVImpl::getElementDeclaration() {
	return this->fDeclaration;
}

$XSModel* ElementPSVImpl::getSchemaInformation() {
	$synchronized(this) {
		if (this->fSchemaInformation == nullptr && this->fGrammars != nullptr) {
			$set(this, fSchemaInformation, $new($XSModelImpl, this->fGrammars));
		}
		return this->fSchemaInformation;
	}
}

$Object* ElementPSVImpl::getActualNormalizedValue() {
	return $of($nc(this->fValue)->getActualValue());
}

int16_t ElementPSVImpl::getActualNormalizedValueType() {
	return $nc(this->fValue)->getActualValueType();
}

$ShortList* ElementPSVImpl::getItemValueTypes() {
	return $nc(this->fValue)->getListValueTypes();
}

$XSValue* ElementPSVImpl::getSchemaValue() {
	return this->fValue;
}

void ElementPSVImpl::reset() {
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fNil = false;
	this->fSpecified = false;
	$set(this, fNotation, nullptr);
	this->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
	this->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrors, nullptr);
	$set(this, fValidationContext, nullptr);
	$nc(this->fValue)->reset();
}

void ElementPSVImpl::copySchemaInformationTo(ElementPSVImpl* target) {
	$set($nc(target), fGrammars, this->fGrammars);
	$set(target, fSchemaInformation, this->fSchemaInformation);
}

ElementPSVImpl::ElementPSVImpl() {
}

$Class* ElementPSVImpl::load$($String* name, bool initialize) {
	$loadClass(ElementPSVImpl, name, initialize, &_ElementPSVImpl_ClassInfo_, allocate$ElementPSVImpl);
	return class$;
}

$Class* ElementPSVImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com