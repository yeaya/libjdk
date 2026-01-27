#include <com/sun/org/apache/xerces/internal/jaxp/UnparsedEntityHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDFilter.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLDTDFilter = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDFilter;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _UnparsedEntityHandler_FieldInfo_[] = {
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PRIVATE, $field(UnparsedEntityHandler, fDTDSource)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PRIVATE, $field(UnparsedEntityHandler, fDTDHandler)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PRIVATE | $FINAL, $field(UnparsedEntityHandler, fValidationManager)},
	{"fUnparsedEntities", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(UnparsedEntityHandler, fUnparsedEntities)},
	{}
};

$MethodInfo _UnparsedEntityHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;)V", nullptr, 0, $method(UnparsedEntityHandler, init$, void, $ValidationManager*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, getDTDHandler, $XMLDTDHandler*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, getDTDSource, $XMLDTDSource*)},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, isEntityDeclared, bool, $String*)},
	{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, isEntityUnparsed, bool, $String*)},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "()V", nullptr, $PUBLIC, $method(UnparsedEntityHandler, reset, void)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, setDTDSource, void, $XMLDTDSource*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(UnparsedEntityHandler, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _UnparsedEntityHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.UnparsedEntityHandler",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter,com.sun.org.apache.xerces.internal.impl.validation.EntityState",
	_UnparsedEntityHandler_FieldInfo_,
	_UnparsedEntityHandler_MethodInfo_
};

$Object* allocate$UnparsedEntityHandler($Class* clazz) {
	return $of($alloc(UnparsedEntityHandler));
}

int32_t UnparsedEntityHandler::hashCode() {
	 return this->$XMLDTDFilter::hashCode();
}

bool UnparsedEntityHandler::equals(Object$* arg0) {
	 return this->$XMLDTDFilter::equals(arg0);
}

$Object* UnparsedEntityHandler::clone() {
	 return this->$XMLDTDFilter::clone();
}

$String* UnparsedEntityHandler::toString() {
	 return this->$XMLDTDFilter::toString();
}

void UnparsedEntityHandler::finalize() {
	this->$XMLDTDFilter::finalize();
}

void UnparsedEntityHandler::init$($ValidationManager* manager) {
	$set(this, fUnparsedEntities, nullptr);
	$set(this, fValidationManager, manager);
}

void UnparsedEntityHandler::startDTD($XMLLocator* locator, $Augmentations* augmentations) {
	$nc(this->fValidationManager)->setEntityState(this);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startDTD(locator, augmentations);
	}
}

void UnparsedEntityHandler::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startParameterEntity(name, identifier, encoding, augmentations);
	}
}

void UnparsedEntityHandler::textDecl($String* version, $String* encoding, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->textDecl(version, encoding, augmentations);
	}
}

void UnparsedEntityHandler::endParameterEntity($String* name, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endParameterEntity(name, augmentations);
	}
}

void UnparsedEntityHandler::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startExternalSubset(identifier, augmentations);
	}
}

void UnparsedEntityHandler::endExternalSubset($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endExternalSubset(augmentations);
	}
}

void UnparsedEntityHandler::comment($XMLString* text, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->comment(text, augmentations);
	}
}

void UnparsedEntityHandler::processingInstruction($String* target, $XMLString* data, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->processingInstruction(target, data, augmentations);
	}
}

void UnparsedEntityHandler::elementDecl($String* name, $String* contentModel, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->elementDecl(name, contentModel, augmentations);
	}
}

void UnparsedEntityHandler::startAttlist($String* elementName, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startAttlist(elementName, augmentations);
	}
}

void UnparsedEntityHandler::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->attributeDecl(elementName, attributeName, type, enumeration, defaultType, defaultValue, nonNormalizedDefaultValue, augmentations);
	}
}

void UnparsedEntityHandler::endAttlist($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endAttlist(augmentations);
	}
}

void UnparsedEntityHandler::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->internalEntityDecl(name, text, nonNormalizedText, augmentations);
	}
}

void UnparsedEntityHandler::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->externalEntityDecl(name, identifier, augmentations);
	}
}

void UnparsedEntityHandler::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augmentations) {
	if (this->fUnparsedEntities == nullptr) {
		$set(this, fUnparsedEntities, $new($HashMap));
	}
	$nc(this->fUnparsedEntities)->put(name, name);
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->unparsedEntityDecl(name, identifier, notation, augmentations);
	}
}

void UnparsedEntityHandler::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->notationDecl(name, identifier, augmentations);
	}
}

void UnparsedEntityHandler::startConditional(int16_t type, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startConditional(type, augmentations);
	}
}

void UnparsedEntityHandler::ignoredCharacters($XMLString* text, $Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->ignoredCharacters(text, augmentations);
	}
}

void UnparsedEntityHandler::endConditional($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endConditional(augmentations);
	}
}

void UnparsedEntityHandler::endDTD($Augmentations* augmentations) {
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endDTD(augmentations);
	}
}

void UnparsedEntityHandler::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

$XMLDTDSource* UnparsedEntityHandler::getDTDSource() {
	return this->fDTDSource;
}

void UnparsedEntityHandler::setDTDHandler($XMLDTDHandler* handler) {
	$set(this, fDTDHandler, handler);
}

$XMLDTDHandler* UnparsedEntityHandler::getDTDHandler() {
	return this->fDTDHandler;
}

bool UnparsedEntityHandler::isEntityDeclared($String* name) {
	return false;
}

bool UnparsedEntityHandler::isEntityUnparsed($String* name) {
	if (this->fUnparsedEntities != nullptr) {
		return $nc(this->fUnparsedEntities)->containsKey(name);
	}
	return false;
}

void UnparsedEntityHandler::reset() {
	if (this->fUnparsedEntities != nullptr && !$nc(this->fUnparsedEntities)->isEmpty()) {
		$nc(this->fUnparsedEntities)->clear();
	}
}

UnparsedEntityHandler::UnparsedEntityHandler() {
}

$Class* UnparsedEntityHandler::load$($String* name, bool initialize) {
	$loadClass(UnparsedEntityHandler, name, initialize, &_UnparsedEntityHandler_ClassInfo_, allocate$UnparsedEntityHandler);
	return class$;
}

$Class* UnparsedEntityHandler::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com