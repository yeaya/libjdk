#include <com/sun/org/apache/xerces/internal/jaxp/validation/AbstractXMLSchema.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHandlerImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorImpl.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/validation/Schema.h>
#include <javax/xml/validation/Validator.h>
#include <javax/xml/validation/ValidatorHandler.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $ValidatorHandlerImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHandlerImpl;
using $ValidatorImpl = ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorImpl;
using $XSGrammarPoolContainer = ::com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Schema = ::javax::xml::validation::Schema;
using $Validator = ::javax::xml::validation::Validator;
using $ValidatorHandler = ::javax::xml::validation::ValidatorHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _AbstractXMLSchema_FieldInfo_[] = {
	{"fFeatures", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(AbstractXMLSchema, fFeatures)},
	{"fProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(AbstractXMLSchema, fProperties)},
	{}
};

$MethodInfo _AbstractXMLSchema_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractXMLSchema, init$, void)},
	{"getFeature", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, getFeature, $Boolean*, $String*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, getProperty, $Object*, $String*)},
	{"newValidator", "()Ljavax/xml/validation/Validator;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, newValidator, $Validator*)},
	{"newValidatorHandler", "()Ljavax/xml/validation/ValidatorHandler;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, newValidatorHandler, $ValidatorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, setFeature, void, $String*, bool)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractXMLSchema, setProperty, void, $String*, Object$*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractXMLSchema_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.jaxp.validation.AbstractXMLSchema",
	"javax.xml.validation.Schema",
	"com.sun.org.apache.xerces.internal.jaxp.validation.XSGrammarPoolContainer",
	_AbstractXMLSchema_FieldInfo_,
	_AbstractXMLSchema_MethodInfo_
};

$Object* allocate$AbstractXMLSchema($Class* clazz) {
	return $of($alloc(AbstractXMLSchema));
}

int32_t AbstractXMLSchema::hashCode() {
	 return this->$Schema::hashCode();
}

bool AbstractXMLSchema::equals(Object$* arg0) {
	 return this->$Schema::equals(arg0);
}

$Object* AbstractXMLSchema::clone() {
	 return this->$Schema::clone();
}

$String* AbstractXMLSchema::toString() {
	 return this->$Schema::toString();
}

void AbstractXMLSchema::finalize() {
	this->$Schema::finalize();
}

void AbstractXMLSchema::init$() {
	$Schema::init$();
	$set(this, fFeatures, $new($HashMap));
	$set(this, fProperties, $new($HashMap));
}

$Validator* AbstractXMLSchema::newValidator() {
	return $new($ValidatorImpl, this);
}

$ValidatorHandler* AbstractXMLSchema::newValidatorHandler() {
	return $new($ValidatorHandlerImpl, static_cast<$XSGrammarPoolContainer*>(this));
}

$Boolean* AbstractXMLSchema::getFeature($String* featureId) {
	return $cast($Boolean, $nc(this->fFeatures)->get(featureId));
}

void AbstractXMLSchema::setFeature($String* featureId, bool state) {
	$init($Boolean);
	$nc(this->fFeatures)->put(featureId, state ? $Boolean::TRUE : $Boolean::FALSE);
}

$Object* AbstractXMLSchema::getProperty($String* propertyId) {
	return $of($nc(this->fProperties)->get(propertyId));
}

void AbstractXMLSchema::setProperty($String* propertyId, Object$* state) {
	$nc(this->fProperties)->put(propertyId, state);
}

AbstractXMLSchema::AbstractXMLSchema() {
}

$Class* AbstractXMLSchema::load$($String* name, bool initialize) {
	$loadClass(AbstractXMLSchema, name, initialize, &_AbstractXMLSchema_ClassInfo_, allocate$AbstractXMLSchema);
	return class$;
}

$Class* AbstractXMLSchema::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com