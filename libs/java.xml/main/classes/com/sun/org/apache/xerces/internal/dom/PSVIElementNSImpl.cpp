#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <jcpp.h>

#undef CONTENTTYPE_SIMPLE
#undef EMPTY_LIST
#undef VALIDATION_NONE
#undef VALIDITY_NOTKNOWN

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ElementPSVImpl = ::com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
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
						namespace dom {

$CompoundAttribute _PSVIElementNSImpl_MethodAnnotations_getActualNormalizedValue3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIElementNSImpl_MethodAnnotations_getActualNormalizedValueType4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIElementNSImpl_MethodAnnotations_getItemValueTypes9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIElementNSImpl_MethodAnnotations_getSchemaNormalizedValue15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PSVIElementNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PSVIElementNSImpl, serialVersionUID)},
	{"fDeclaration", "Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fDeclaration)},
	{"fTypeDecl", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fTypeDecl)},
	{"fNil", "Z", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fNil)},
	{"fSpecified", "Z", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fSpecified)},
	{"fValue", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fValue)},
	{"fNotation", "Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fNotation)},
	{"fValidationAttempted", "S", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fValidationAttempted)},
	{"fValidity", "S", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fValidity)},
	{"fErrorCodes", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fErrorCodes)},
	{"fErrorMessages", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fErrorMessages)},
	{"fValidationContext", "Ljava/lang/String;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fValidationContext)},
	{"fSchemaInformation", "Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PROTECTED, $field(PSVIElementNSImpl, fSchemaInformation)},
	{}
};

$MethodInfo _PSVIElementNSImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PSVIElementNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PSVIElementNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*)},
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, constant, $ItemPSVI*)},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIElementNSImpl, getActualNormalizedValue, $Object*), nullptr, nullptr, _PSVIElementNSImpl_MethodAnnotations_getActualNormalizedValue3},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIElementNSImpl, getActualNormalizedValueType, int16_t), nullptr, nullptr, _PSVIElementNSImpl_MethodAnnotations_getActualNormalizedValueType4},
	{"getElementDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getElementDeclaration, $XSElementDeclaration*)},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getErrorCodes, $StringList*)},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getErrorMessages, $StringList*)},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getIsSchemaSpecified, bool)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIElementNSImpl, getItemValueTypes, $ShortList*), nullptr, nullptr, _PSVIElementNSImpl_MethodAnnotations_getItemValueTypes9},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getNil", "()Z", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getNil, bool)},
	{"getNotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getNotation, $XSNotationDeclaration*)},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getSchemaDefault, $String*)},
	{"getSchemaInformation", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getSchemaInformation, $XSModel*)},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIElementNSImpl, getSchemaNormalizedValue, $String*), nullptr, nullptr, _PSVIElementNSImpl_MethodAnnotations_getSchemaNormalizedValue15},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getSchemaValue, $XSValue*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getTypeDefinition, $XSTypeDefinition*)},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getValidationAttempted, int16_t)},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getValidationContext, $String*)},
	{"getValidity", "()S", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, getValidity, int16_t)},
	{"isConstant", "()Z", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, isConstant, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PSVIElementNSImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setPSVI", "(Lcom/sun/org/apache/xerces/internal/xs/ElementPSVI;)V", nullptr, $PUBLIC, $virtualMethod(PSVIElementNSImpl, setPSVI, void, $ElementPSVI*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PSVIElementNSImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _PSVIElementNSImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.PSVIElementNSImpl",
	"com.sun.org.apache.xerces.internal.dom.ElementNSImpl",
	"com.sun.org.apache.xerces.internal.xs.ElementPSVI",
	_PSVIElementNSImpl_FieldInfo_,
	_PSVIElementNSImpl_MethodInfo_
};

$Object* allocate$PSVIElementNSImpl($Class* clazz) {
	return $of($alloc(PSVIElementNSImpl));
}

$String* PSVIElementNSImpl::toString() {
	 return this->$ElementNSImpl::toString();
}

int32_t PSVIElementNSImpl::hashCode() {
	 return this->$ElementNSImpl::hashCode();
}

bool PSVIElementNSImpl::equals(Object$* arg0) {
	 return this->$ElementNSImpl::equals(arg0);
}

$Object* PSVIElementNSImpl::clone() {
	 return this->$ElementNSImpl::clone();
}

void PSVIElementNSImpl::finalize() {
	this->$ElementNSImpl::finalize();
}

void PSVIElementNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName) {
	$ElementNSImpl::init$(ownerDocument, namespaceURI, qualifiedName, localName);
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fNil = false;
	this->fSpecified = true;
	$set(this, fValue, $new($ValidatedInfo));
	$set(this, fNotation, nullptr);
	this->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
	this->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrorCodes, nullptr);
	$set(this, fErrorMessages, nullptr);
	$set(this, fValidationContext, nullptr);
	$set(this, fSchemaInformation, nullptr);
}

void PSVIElementNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName) {
	$ElementNSImpl::init$(ownerDocument, namespaceURI, qualifiedName);
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fNil = false;
	this->fSpecified = true;
	$set(this, fValue, $new($ValidatedInfo));
	$set(this, fNotation, nullptr);
	this->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
	this->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrorCodes, nullptr);
	$set(this, fErrorMessages, nullptr);
	$set(this, fValidationContext, nullptr);
	$set(this, fSchemaInformation, nullptr);
}

$ItemPSVI* PSVIElementNSImpl::constant() {
	return $new($ElementPSVImpl, true, this);
}

bool PSVIElementNSImpl::isConstant() {
	return false;
}

$String* PSVIElementNSImpl::getSchemaDefault() {
	return this->fDeclaration == nullptr ? ($String*)nullptr : $nc(this->fDeclaration)->getConstraintValue();
}

$String* PSVIElementNSImpl::getSchemaNormalizedValue() {
	return $nc(this->fValue)->getNormalizedValue();
}

bool PSVIElementNSImpl::getIsSchemaSpecified() {
	return this->fSpecified;
}

int16_t PSVIElementNSImpl::getValidationAttempted() {
	return this->fValidationAttempted;
}

int16_t PSVIElementNSImpl::getValidity() {
	return this->fValidity;
}

$StringList* PSVIElementNSImpl::getErrorCodes() {
	if (this->fErrorCodes != nullptr) {
		return this->fErrorCodes;
	}
	$init($StringListImpl);
	return $StringListImpl::EMPTY_LIST;
}

$StringList* PSVIElementNSImpl::getErrorMessages() {
	if (this->fErrorMessages != nullptr) {
		return this->fErrorMessages;
	}
	$init($StringListImpl);
	return $StringListImpl::EMPTY_LIST;
}

$String* PSVIElementNSImpl::getValidationContext() {
	return this->fValidationContext;
}

bool PSVIElementNSImpl::getNil() {
	return this->fNil;
}

$XSNotationDeclaration* PSVIElementNSImpl::getNotation() {
	return this->fNotation;
}

$XSTypeDefinition* PSVIElementNSImpl::getTypeDefinition() {
	return this->fTypeDecl;
}

$XSSimpleTypeDefinition* PSVIElementNSImpl::getMemberTypeDefinition() {
	return $nc(this->fValue)->getMemberTypeDefinition();
}

$XSElementDeclaration* PSVIElementNSImpl::getElementDeclaration() {
	return this->fDeclaration;
}

$XSModel* PSVIElementNSImpl::getSchemaInformation() {
	return this->fSchemaInformation;
}

void PSVIElementNSImpl::setPSVI($ElementPSVI* elem) {
	$set(this, fDeclaration, $nc(elem)->getElementDeclaration());
	$set(this, fNotation, elem->getNotation());
	$set(this, fValidationContext, elem->getValidationContext());
	$set(this, fTypeDecl, elem->getTypeDefinition());
	$set(this, fSchemaInformation, elem->getSchemaInformation());
	this->fValidity = elem->getValidity();
	this->fValidationAttempted = elem->getValidationAttempted();
	$set(this, fErrorCodes, elem->getErrorCodes());
	$set(this, fErrorMessages, elem->getErrorMessages());
	if ($instanceOf($XSSimpleTypeDefinition, this->fTypeDecl) || $instanceOf($XSComplexTypeDefinition, this->fTypeDecl) && $nc(($cast($XSComplexTypeDefinition, this->fTypeDecl)))->getContentType() == $XSComplexTypeDefinition::CONTENTTYPE_SIMPLE) {
		$nc(this->fValue)->copyFrom($(elem->getSchemaValue()));
	} else {
		$nc(this->fValue)->reset();
	}
	this->fSpecified = elem->getIsSchemaSpecified();
	this->fNil = elem->getNil();
}

$Object* PSVIElementNSImpl::getActualNormalizedValue() {
	return $of($nc(this->fValue)->getActualValue());
}

int16_t PSVIElementNSImpl::getActualNormalizedValueType() {
	return $nc(this->fValue)->getActualValueType();
}

$ShortList* PSVIElementNSImpl::getItemValueTypes() {
	return $nc(this->fValue)->getListValueTypes();
}

$XSValue* PSVIElementNSImpl::getSchemaValue() {
	return this->fValue;
}

void PSVIElementNSImpl::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

void PSVIElementNSImpl::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

PSVIElementNSImpl::PSVIElementNSImpl() {
}

$Class* PSVIElementNSImpl::load$($String* name, bool initialize) {
	$loadClass(PSVIElementNSImpl, name, initialize, &_PSVIElementNSImpl_ClassInfo_, allocate$PSVIElementNSImpl);
	return class$;
}

$Class* PSVIElementNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com