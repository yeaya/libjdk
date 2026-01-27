#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl$XMLSchemaTypeInfoProvider.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaValidatorComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/Locale.h>
#include <javax/xml/validation/TypeInfoProvider.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

#undef ATTRIBUTE_PSVI
#undef ELEMENT_PSVI
#undef VALIDITY_VALID

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $JAXPValidationMessageFormatter = ::com::sun::org::apache::xerces::internal::jaxp::validation::JAXPValidationMessageFormatter;
using $ValidatorHandlerImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl;
using $XMLSchemaValidatorComponentManager = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeInfoProvider = ::javax::xml::validation::TypeInfoProvider;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, this$0)},
	{"fElementAugs", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, fElementAugs)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PRIVATE, $field(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, fAttributes)},
	{"fInStartElement", "Z", nullptr, $PRIVATE, $field(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, fInStartElement)},
	{"fInEndElement", "Z", nullptr, $PRIVATE, $field(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, fInEndElement)},
	{}
};

$MethodInfo _ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl;)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, init$, void, $ValidatorHandlerImpl*)},
	{"beginEndElement", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, beginEndElement, void, $Augmentations*)},
	{"beginStartElement", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, beginStartElement, void, $Augmentations*, $XMLAttributes*)},
	{"checkState", "(Z)V", nullptr, $PRIVATE, $method(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, checkState, void, bool)},
	{"finishEndElement", "()V", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, finishEndElement, void)},
	{"finishStartElement", "()V", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, finishStartElement, void)},
	{"getAttributePSVI", "(I)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributePSVI, $AttributePSVI*, int32_t)},
	{"getAttributePSVIByName", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributePSVIByName, $AttributePSVI*, $String*, $String*)},
	{"getAttributeType", "(I)Lorg/w3c/dom/TypeInfo;", nullptr, $PRIVATE, $method(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributeType, $TypeInfo*, int32_t)},
	{"getAttributeTypeInfo", "(I)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributeTypeInfo, $TypeInfo*, int32_t)},
	{"getAttributeTypeInfo", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributeTypeInfo, $TypeInfo*, $String*, $String*)},
	{"getAttributeTypeInfo", "(Ljava/lang/String;)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getAttributeTypeInfo, $TypeInfo*, $String*)},
	{"getElementPSVI", "()Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;", nullptr, 0, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getElementPSVI, $ElementPSVI*)},
	{"getElementTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getElementTypeInfo, $TypeInfo*)},
	{"getTypeInfoFromPSVI", "(Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;)Lorg/w3c/dom/TypeInfo;", nullptr, $PRIVATE, $method(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, getTypeInfoFromPSVI, $TypeInfo*, $ItemPSVI*)},
	{"isIdAttribute", "(I)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, isIdAttribute, bool, int32_t)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, isSpecified, bool, int32_t)},
	{}
};

$InnerClassInfo _ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$XMLSchemaTypeInfoProvider", "com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl", "XMLSchemaTypeInfoProvider", $PRIVATE},
	{}
};

$ClassInfo _ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl$XMLSchemaTypeInfoProvider",
	"javax.xml.validation.TypeInfoProvider",
	nullptr,
	_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_FieldInfo_,
	_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_MethodInfo_,
	nullptr,
	nullptr,
	_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHandlerImpl"
};

$Object* allocate$ValidatorHandlerImpl$XMLSchemaTypeInfoProvider($Class* clazz) {
	return $of($alloc(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider));
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::init$($ValidatorHandlerImpl* this$0) {
	$set(this, this$0, this$0);
	$TypeInfoProvider::init$();
	this->fInStartElement = false;
	this->fInEndElement = false;
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::beginStartElement($Augmentations* elementAugs, $XMLAttributes* attributes) {
	this->fInStartElement = true;
	$set(this, fElementAugs, elementAugs);
	$set(this, fAttributes, attributes);
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::finishStartElement() {
	this->fInStartElement = false;
	$set(this, fElementAugs, nullptr);
	$set(this, fAttributes, nullptr);
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::beginEndElement($Augmentations* elementAugs) {
	this->fInEndElement = true;
	$set(this, fElementAugs, elementAugs);
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::finishEndElement() {
	this->fInEndElement = false;
	$set(this, fElementAugs, nullptr);
}

void ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::checkState(bool forElementInfo) {
	$useLocalCurrentObjectStackCache();
	if (!(this->fInStartElement || (this->fInEndElement && forElementInfo))) {
		$throwNew($IllegalStateException, $($JAXPValidationMessageFormatter::formatMessage($($nc(this->this$0->fComponentManager)->getLocale()), "TypeInfoProviderIllegalState"_s, nullptr)));
	}
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributeTypeInfo(int32_t index) {
	checkState(false);
	return getAttributeType(index);
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributeType(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkState(false);
	if (index < 0 || $nc(this->fAttributes)->getLength() <= index) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(index)));
	}
	$var($Augmentations, augs, $nc(this->fAttributes)->getAugmentations(index));
	if (augs == nullptr) {
		return nullptr;
	}
	$init($Constants);
	$var($AttributePSVI, psvi, $cast($AttributePSVI, $nc(augs)->getItem($Constants::ATTRIBUTE_PSVI)));
	return getTypeInfoFromPSVI(psvi);
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributeTypeInfo($String* attributeUri, $String* attributeLocalName) {
	checkState(false);
	return getAttributeTypeInfo($nc(this->fAttributes)->getIndex(attributeUri, attributeLocalName));
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributeTypeInfo($String* attributeQName) {
	checkState(false);
	return getAttributeTypeInfo($nc(this->fAttributes)->getIndex(attributeQName));
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getElementTypeInfo() {
	checkState(true);
	if (this->fElementAugs == nullptr) {
		return nullptr;
	}
	$init($Constants);
	$var($ElementPSVI, psvi, $cast($ElementPSVI, $nc(this->fElementAugs)->getItem($Constants::ELEMENT_PSVI)));
	return getTypeInfoFromPSVI(psvi);
}

$TypeInfo* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getTypeInfoFromPSVI($ItemPSVI* psvi) {
	$useLocalCurrentObjectStackCache();
	if (psvi == nullptr) {
		return nullptr;
	}
	if ($nc(psvi)->getValidity() == $ElementPSVI::VALIDITY_VALID) {
		$var($XSTypeDefinition, t, psvi->getMemberTypeDefinition());
		if (t != nullptr) {
			return ($instanceOf($TypeInfo, t)) ? $cast($TypeInfo, t) : ($TypeInfo*)nullptr;
		}
	}
	$var($XSTypeDefinition, t, $nc(psvi)->getTypeDefinition());
	if (t != nullptr) {
		return ($instanceOf($TypeInfo, t)) ? $cast($TypeInfo, t) : ($TypeInfo*)nullptr;
	}
	return nullptr;
}

bool ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::isIdAttribute(int32_t index) {
	checkState(false);
	$var($XSSimpleType, type, $cast($XSSimpleType, getAttributeType(index)));
	if (type == nullptr) {
		return false;
	}
	return $nc(type)->isIDType();
}

bool ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::isSpecified(int32_t index) {
	checkState(false);
	return $nc(this->fAttributes)->isSpecified(index);
}

$ElementPSVI* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getElementPSVI() {
	$init($Constants);
	return (this->fElementAugs != nullptr) ? $cast($ElementPSVI, $nc(this->fElementAugs)->getItem($Constants::ELEMENT_PSVI)) : ($ElementPSVI*)nullptr;
}

$AttributePSVI* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributePSVI(int32_t index) {
	if (this->fAttributes != nullptr) {
		$var($Augmentations, augs, $nc(this->fAttributes)->getAugmentations(index));
		if (augs != nullptr) {
			$init($Constants);
			return $cast($AttributePSVI, augs->getItem($Constants::ATTRIBUTE_PSVI));
		}
	}
	return nullptr;
}

$AttributePSVI* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::getAttributePSVIByName($String* uri, $String* localname) {
	if (this->fAttributes != nullptr) {
		$var($Augmentations, augs, $nc(this->fAttributes)->getAugmentations(uri, localname));
		if (augs != nullptr) {
			$init($Constants);
			return $cast($AttributePSVI, augs->getItem($Constants::ATTRIBUTE_PSVI));
		}
	}
	return nullptr;
}

ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::ValidatorHandlerImpl$XMLSchemaTypeInfoProvider() {
}

$Class* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::load$($String* name, bool initialize) {
	$loadClass(ValidatorHandlerImpl$XMLSchemaTypeInfoProvider, name, initialize, &_ValidatorHandlerImpl$XMLSchemaTypeInfoProvider_ClassInfo_, allocate$ValidatorHandlerImpl$XMLSchemaTypeInfoProvider);
	return class$;
}

$Class* ValidatorHandlerImpl$XMLSchemaTypeInfoProvider::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com