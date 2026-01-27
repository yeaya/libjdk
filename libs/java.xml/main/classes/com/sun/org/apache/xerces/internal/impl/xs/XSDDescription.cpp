#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>

#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <jcpp.h>

#undef CONTEXT_ATTRIBUTE
#undef CONTEXT_ELEMENT
#undef CONTEXT_IMPORT
#undef CONTEXT_INCLUDE
#undef CONTEXT_INITIALIZE
#undef CONTEXT_INSTANCE
#undef CONTEXT_PREPARSE
#undef CONTEXT_REDEFINE
#undef CONTEXT_XSITYPE
#undef XML_SCHEMA

using $XMLResourceIdentifierImpl = ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
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
							namespace xs {

$FieldInfo _XSDDescription_FieldInfo_[] = {
	{"CONTEXT_INITIALIZE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_INITIALIZE)},
	{"CONTEXT_INCLUDE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_INCLUDE)},
	{"CONTEXT_REDEFINE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_REDEFINE)},
	{"CONTEXT_IMPORT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_IMPORT)},
	{"CONTEXT_PREPARSE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_PREPARSE)},
	{"CONTEXT_INSTANCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_INSTANCE)},
	{"CONTEXT_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_ELEMENT)},
	{"CONTEXT_ATTRIBUTE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_ATTRIBUTE)},
	{"CONTEXT_XSITYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSDDescription, CONTEXT_XSITYPE)},
	{"fContextType", "S", nullptr, $PROTECTED, $field(XSDDescription, fContextType)},
	{"fLocationHints", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(XSDDescription, fLocationHints)},
	{"fTriggeringComponent", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XSDDescription, fTriggeringComponent)},
	{"fEnclosedElementName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PROTECTED, $field(XSDDescription, fEnclosedElementName)},
	{"fAttributes", "Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PROTECTED, $field(XSDDescription, fAttributes)},
	{}
};

$MethodInfo _XSDDescription_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSDDescription, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSDDescription, equals, bool, Object$*)},
	{"fromInstance", "()Z", nullptr, $PUBLIC, $virtualMethod(XSDDescription, fromInstance, bool)},
	{"getAttributes", "()Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getAttributes, $XMLAttributes*)},
	{"getContextType", "()S", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getContextType, int16_t)},
	{"getEnclosingElementName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getEnclosingElementName, $QName*)},
	{"getGrammarType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getGrammarType, $String*)},
	{"getLocationHints", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getLocationHints, $StringArray*)},
	{"getTargetNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getTargetNamespace, $String*)},
	{"getTriggeringComponent", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, getTriggeringComponent, $QName*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XSDDescription, hashCode, int32_t)},
	{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(XSDDescription, isExternal, bool)},
	{"makeClone", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;", nullptr, $PUBLIC, $virtualMethod(XSDDescription, makeClone, XSDDescription*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, reset, void)},
	{"setAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setAttributes, void, $XMLAttributes*)},
	{"*setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setContextType", "(S)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setContextType, void, int16_t)},
	{"setEnclosingElementName", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setEnclosingElementName, void, $QName*)},
	{"*setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setLocationHints", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setLocationHints, void, $StringArray*)},
	{"*setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTargetNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setTargetNamespace, void, $String*)},
	{"setTriggeringComponent", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $virtualMethod(XSDDescription, setTriggeringComponent, void, $QName*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XSDDescription_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSDDescription",
	"com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLSchemaDescription",
	_XSDDescription_FieldInfo_,
	_XSDDescription_MethodInfo_
};

$Object* allocate$XSDDescription($Class* clazz) {
	return $of($alloc(XSDDescription));
}

void XSDDescription::setPublicId($String* publicId) {
	this->$XMLResourceIdentifierImpl::setPublicId(publicId);
}

void XSDDescription::setLiteralSystemId($String* literalSystemId) {
	this->$XMLResourceIdentifierImpl::setLiteralSystemId(literalSystemId);
}

void XSDDescription::setBaseSystemId($String* baseSystemId) {
	this->$XMLResourceIdentifierImpl::setBaseSystemId(baseSystemId);
}

void XSDDescription::setExpandedSystemId($String* expandedSystemId) {
	this->$XMLResourceIdentifierImpl::setExpandedSystemId(expandedSystemId);
}

void XSDDescription::setNamespace($String* namespace$) {
	this->$XMLResourceIdentifierImpl::setNamespace(namespace$);
}

$String* XSDDescription::getPublicId() {
	 return this->$XMLResourceIdentifierImpl::getPublicId();
}

$String* XSDDescription::getLiteralSystemId() {
	 return this->$XMLResourceIdentifierImpl::getLiteralSystemId();
}

$String* XSDDescription::getBaseSystemId() {
	 return this->$XMLResourceIdentifierImpl::getBaseSystemId();
}

$String* XSDDescription::getExpandedSystemId() {
	 return this->$XMLResourceIdentifierImpl::getExpandedSystemId();
}

$String* XSDDescription::getNamespace() {
	 return this->$XMLResourceIdentifierImpl::getNamespace();
}

$String* XSDDescription::toString() {
	 return this->$XMLResourceIdentifierImpl::toString();
}

$Object* XSDDescription::clone() {
	 return this->$XMLResourceIdentifierImpl::clone();
}

void XSDDescription::finalize() {
	this->$XMLResourceIdentifierImpl::finalize();
}

void XSDDescription::init$() {
	$XMLResourceIdentifierImpl::init$();
}

$String* XSDDescription::getGrammarType() {
	$init($XMLGrammarDescription);
	return $XMLGrammarDescription::XML_SCHEMA;
}

int16_t XSDDescription::getContextType() {
	return this->fContextType;
}

$String* XSDDescription::getTargetNamespace() {
	return this->fNamespace;
}

$StringArray* XSDDescription::getLocationHints() {
	return this->fLocationHints;
}

$QName* XSDDescription::getTriggeringComponent() {
	return this->fTriggeringComponent;
}

$QName* XSDDescription::getEnclosingElementName() {
	return this->fEnclosedElementName;
}

$XMLAttributes* XSDDescription::getAttributes() {
	return this->fAttributes;
}

bool XSDDescription::fromInstance() {
	return this->fContextType == XSDDescription::CONTEXT_ATTRIBUTE || this->fContextType == XSDDescription::CONTEXT_ELEMENT || this->fContextType == XSDDescription::CONTEXT_INSTANCE || this->fContextType == XSDDescription::CONTEXT_XSITYPE;
}

bool XSDDescription::isExternal() {
	return this->fContextType == XSDDescription::CONTEXT_INCLUDE || this->fContextType == XSDDescription::CONTEXT_REDEFINE || this->fContextType == XSDDescription::CONTEXT_IMPORT || this->fContextType == XSDDescription::CONTEXT_ELEMENT || this->fContextType == XSDDescription::CONTEXT_ATTRIBUTE || this->fContextType == XSDDescription::CONTEXT_XSITYPE;
}

bool XSDDescription::equals(Object$* descObj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($XMLSchemaDescription, descObj))) {
		return false;
	}
	$var($XMLSchemaDescription, desc, $cast($XMLSchemaDescription, descObj));
	if (this->fNamespace != nullptr) {
		return $nc(this->fNamespace)->equals($($nc(desc)->getTargetNamespace()));
	} else {
		return $nc(desc)->getTargetNamespace() == nullptr;
	}
}

int32_t XSDDescription::hashCode() {
	return (this->fNamespace == nullptr) ? 0 : $nc(this->fNamespace)->hashCode();
}

void XSDDescription::setContextType(int16_t contextType) {
	this->fContextType = contextType;
}

void XSDDescription::setTargetNamespace($String* targetNamespace) {
	$set(this, fNamespace, targetNamespace);
}

void XSDDescription::setLocationHints($StringArray* locationHints) {
	int32_t length = $nc(locationHints)->length;
	$set(this, fLocationHints, $new($StringArray, length));
	$System::arraycopy(locationHints, 0, this->fLocationHints, 0, length);
}

void XSDDescription::setTriggeringComponent($QName* triggeringComponent) {
	$set(this, fTriggeringComponent, triggeringComponent);
}

void XSDDescription::setEnclosingElementName($QName* enclosedElementName) {
	$set(this, fEnclosedElementName, enclosedElementName);
}

void XSDDescription::setAttributes($XMLAttributes* attributes) {
	$set(this, fAttributes, attributes);
}

void XSDDescription::reset() {
	$XMLResourceIdentifierImpl::clear();
	this->fContextType = XSDDescription::CONTEXT_INITIALIZE;
	$set(this, fLocationHints, nullptr);
	$set(this, fTriggeringComponent, nullptr);
	$set(this, fEnclosedElementName, nullptr);
	$set(this, fAttributes, nullptr);
}

XSDDescription* XSDDescription::makeClone() {
	$var(XSDDescription, desc, $new(XSDDescription));
	$set(desc, fAttributes, this->fAttributes);
	$set(desc, fBaseSystemId, this->fBaseSystemId);
	desc->fContextType = this->fContextType;
	$set(desc, fEnclosedElementName, this->fEnclosedElementName);
	$set(desc, fExpandedSystemId, this->fExpandedSystemId);
	$set(desc, fLiteralSystemId, this->fLiteralSystemId);
	$set(desc, fLocationHints, this->fLocationHints);
	$set(desc, fPublicId, this->fPublicId);
	$set(desc, fNamespace, this->fNamespace);
	$set(desc, fTriggeringComponent, this->fTriggeringComponent);
	return desc;
}

XSDDescription::XSDDescription() {
}

$Class* XSDDescription::load$($String* name, bool initialize) {
	$loadClass(XSDDescription, name, initialize, &_XSDDescription_ClassInfo_, allocate$XSDDescription);
	return class$;
}

$Class* XSDDescription::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com