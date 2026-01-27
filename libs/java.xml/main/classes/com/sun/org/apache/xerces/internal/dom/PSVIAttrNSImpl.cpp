#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/AttributePSVImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef VALIDATION_NONE
#undef VALIDITY_NOTKNOWN

using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $AttributePSVImpl = ::com::sun::org::apache::xerces::internal::impl::xs::AttributePSVImpl;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
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

$CompoundAttribute _PSVIAttrNSImpl_MethodAnnotations_getActualNormalizedValue3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIAttrNSImpl_MethodAnnotations_getActualNormalizedValueType4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIAttrNSImpl_MethodAnnotations_getItemValueTypes9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _PSVIAttrNSImpl_MethodAnnotations_getSchemaNormalizedValue12[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PSVIAttrNSImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PSVIAttrNSImpl, serialVersionUID)},
	{"fDeclaration", "Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fDeclaration)},
	{"fTypeDecl", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fTypeDecl)},
	{"fSpecified", "Z", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fSpecified)},
	{"fValue", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fValue)},
	{"fValidationAttempted", "S", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fValidationAttempted)},
	{"fValidity", "S", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fValidity)},
	{"fErrorCodes", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fErrorCodes)},
	{"fErrorMessages", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fErrorMessages)},
	{"fValidationContext", "Ljava/lang/String;", nullptr, $PROTECTED, $field(PSVIAttrNSImpl, fValidationContext)},
	{}
};

$MethodInfo _PSVIAttrNSImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PSVIAttrNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*, $String*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PSVIAttrNSImpl, init$, void, $CoreDocumentImpl*, $String*, $String*)},
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, constant, $ItemPSVI*)},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIAttrNSImpl, getActualNormalizedValue, $Object*), nullptr, nullptr, _PSVIAttrNSImpl_MethodAnnotations_getActualNormalizedValue3},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIAttrNSImpl, getActualNormalizedValueType, int16_t), nullptr, nullptr, _PSVIAttrNSImpl_MethodAnnotations_getActualNormalizedValueType4},
	{"getAttributeDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getAttributeDeclaration, $XSAttributeDeclaration*)},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getErrorCodes, $StringList*)},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getErrorMessages, $StringList*)},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getIsSchemaSpecified, bool)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIAttrNSImpl, getItemValueTypes, $ShortList*), nullptr, nullptr, _PSVIAttrNSImpl_MethodAnnotations_getItemValueTypes9},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getSchemaDefault, $String*)},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(PSVIAttrNSImpl, getSchemaNormalizedValue, $String*), nullptr, nullptr, _PSVIAttrNSImpl_MethodAnnotations_getSchemaNormalizedValue12},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getSchemaValue, $XSValue*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getTypeDefinition, $XSTypeDefinition*)},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getValidationAttempted, int16_t)},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getValidationContext, $String*)},
	{"getValidity", "()S", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, getValidity, int16_t)},
	{"isConstant", "()Z", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, isConstant, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PSVIAttrNSImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setPSVI", "(Lcom/sun/org/apache/xerces/internal/xs/AttributePSVI;)V", nullptr, $PUBLIC, $virtualMethod(PSVIAttrNSImpl, setPSVI, void, $AttributePSVI*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PSVIAttrNSImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _PSVIAttrNSImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.PSVIAttrNSImpl",
	"com.sun.org.apache.xerces.internal.dom.AttrNSImpl",
	"com.sun.org.apache.xerces.internal.xs.AttributePSVI",
	_PSVIAttrNSImpl_FieldInfo_,
	_PSVIAttrNSImpl_MethodInfo_
};

$Object* allocate$PSVIAttrNSImpl($Class* clazz) {
	return $of($alloc(PSVIAttrNSImpl));
}

$String* PSVIAttrNSImpl::toString() {
	 return this->$AttrNSImpl::toString();
}

int32_t PSVIAttrNSImpl::hashCode() {
	 return this->$AttrNSImpl::hashCode();
}

bool PSVIAttrNSImpl::equals(Object$* arg0) {
	 return this->$AttrNSImpl::equals(arg0);
}

$Object* PSVIAttrNSImpl::clone() {
	 return this->$AttrNSImpl::clone();
}

void PSVIAttrNSImpl::finalize() {
	this->$AttrNSImpl::finalize();
}

void PSVIAttrNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName) {
	$AttrNSImpl::init$(ownerDocument, namespaceURI, qualifiedName, localName);
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fSpecified = true;
	$set(this, fValue, $new($ValidatedInfo));
	this->fValidationAttempted = $AttributePSVI::VALIDATION_NONE;
	this->fValidity = $AttributePSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrorCodes, nullptr);
	$set(this, fErrorMessages, nullptr);
	$set(this, fValidationContext, nullptr);
}

void PSVIAttrNSImpl::init$($CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName) {
	$AttrNSImpl::init$(ownerDocument, namespaceURI, qualifiedName);
	$set(this, fDeclaration, nullptr);
	$set(this, fTypeDecl, nullptr);
	this->fSpecified = true;
	$set(this, fValue, $new($ValidatedInfo));
	this->fValidationAttempted = $AttributePSVI::VALIDATION_NONE;
	this->fValidity = $AttributePSVI::VALIDITY_NOTKNOWN;
	$set(this, fErrorCodes, nullptr);
	$set(this, fErrorMessages, nullptr);
	$set(this, fValidationContext, nullptr);
}

$ItemPSVI* PSVIAttrNSImpl::constant() {
	return $new($AttributePSVImpl, true, this);
}

bool PSVIAttrNSImpl::isConstant() {
	return false;
}

$String* PSVIAttrNSImpl::getSchemaDefault() {
	return this->fDeclaration == nullptr ? ($String*)nullptr : $nc(this->fDeclaration)->getConstraintValue();
}

$String* PSVIAttrNSImpl::getSchemaNormalizedValue() {
	return $nc(this->fValue)->getNormalizedValue();
}

bool PSVIAttrNSImpl::getIsSchemaSpecified() {
	return this->fSpecified;
}

int16_t PSVIAttrNSImpl::getValidationAttempted() {
	return this->fValidationAttempted;
}

int16_t PSVIAttrNSImpl::getValidity() {
	return this->fValidity;
}

$StringList* PSVIAttrNSImpl::getErrorCodes() {
	if (this->fErrorCodes != nullptr) {
		return this->fErrorCodes;
	}
	$init($StringListImpl);
	return $StringListImpl::EMPTY_LIST;
}

$StringList* PSVIAttrNSImpl::getErrorMessages() {
	if (this->fErrorMessages != nullptr) {
		return this->fErrorMessages;
	}
	$init($StringListImpl);
	return $StringListImpl::EMPTY_LIST;
}

$String* PSVIAttrNSImpl::getValidationContext() {
	return this->fValidationContext;
}

$XSTypeDefinition* PSVIAttrNSImpl::getTypeDefinition() {
	return this->fTypeDecl;
}

$XSSimpleTypeDefinition* PSVIAttrNSImpl::getMemberTypeDefinition() {
	return $nc(this->fValue)->getMemberTypeDefinition();
}

$XSAttributeDeclaration* PSVIAttrNSImpl::getAttributeDeclaration() {
	return this->fDeclaration;
}

void PSVIAttrNSImpl::setPSVI($AttributePSVI* attr) {
	$set(this, fDeclaration, $nc(attr)->getAttributeDeclaration());
	$set(this, fValidationContext, attr->getValidationContext());
	this->fValidity = attr->getValidity();
	this->fValidationAttempted = attr->getValidationAttempted();
	$set(this, fErrorCodes, attr->getErrorCodes());
	$set(this, fErrorMessages, attr->getErrorMessages());
	$nc(this->fValue)->copyFrom($(attr->getSchemaValue()));
	$set(this, fTypeDecl, attr->getTypeDefinition());
	this->fSpecified = attr->getIsSchemaSpecified();
}

$Object* PSVIAttrNSImpl::getActualNormalizedValue() {
	return $of($nc(this->fValue)->getActualValue());
}

int16_t PSVIAttrNSImpl::getActualNormalizedValueType() {
	return $nc(this->fValue)->getActualValueType();
}

$ShortList* PSVIAttrNSImpl::getItemValueTypes() {
	return $nc(this->fValue)->getListValueTypes();
}

$XSValue* PSVIAttrNSImpl::getSchemaValue() {
	return this->fValue;
}

void PSVIAttrNSImpl::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

void PSVIAttrNSImpl::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

PSVIAttrNSImpl::PSVIAttrNSImpl() {
}

$Class* PSVIAttrNSImpl::load$($String* name, bool initialize) {
	$loadClass(PSVIAttrNSImpl, name, initialize, &_PSVIAttrNSImpl_ClassInfo_, allocate$PSVIAttrNSImpl);
	return class$;
}

$Class* PSVIAttrNSImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com