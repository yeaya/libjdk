#include <com/sun/xml/internal/stream/dtd/DTDGrammarUtil.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType.h>
#include <javax/xml/XMLConstants.h>
#include <jcpp.h>

#undef DEBUG_ATTRIBUTES
#undef DEBUG_ELEMENT_CHILDREN
#undef DEFAULT_TYPE_REQUIRED
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef SAX_FEATURE_PREFIX
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TYPE_CHILDREN
#undef TYPE_ENTITY
#undef TYPE_ENUMERATION
#undef TYPE_ID
#undef TYPE_IDREF
#undef TYPE_NMTOKEN
#undef TYPE_NOTATION
#undef XERCES_PROPERTY_PREFIX
#undef XMLNS_ATTRIBUTE

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $DTDGrammar = ::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar;
using $XMLAttributeDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl;
using $XMLElementDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLElementDecl;
using $XMLSimpleType = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $XMLConstants = ::javax::xml::XMLConstants;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {

$FieldInfo _DTDGrammarUtil_FieldInfo_[] = {
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDGrammarUtil, SYMBOL_TABLE)},
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DTDGrammarUtil, NAMESPACES)},
	{"DEBUG_ATTRIBUTES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammarUtil, DEBUG_ATTRIBUTES)},
	{"DEBUG_ELEMENT_CHILDREN", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammarUtil, DEBUG_ELEMENT_CHILDREN)},
	{"fDTDGrammar", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar;", nullptr, $PROTECTED, $field(DTDGrammarUtil, fDTDGrammar)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(DTDGrammarUtil, fNamespaces)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(DTDGrammarUtil, fSymbolTable)},
	{"fCurrentElementIndex", "I", nullptr, $PRIVATE, $field(DTDGrammarUtil, fCurrentElementIndex)},
	{"fCurrentContentSpecType", "I", nullptr, $PRIVATE, $field(DTDGrammarUtil, fCurrentContentSpecType)},
	{"fElementContentState", "[Z", nullptr, $PRIVATE, $field(DTDGrammarUtil, fElementContentState)},
	{"fElementDepth", "I", nullptr, $PRIVATE, $field(DTDGrammarUtil, fElementDepth)},
	{"fInElementContent", "Z", nullptr, $PRIVATE, $field(DTDGrammarUtil, fInElementContent)},
	{"fTempAttDecl", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl;", nullptr, $PRIVATE, $field(DTDGrammarUtil, fTempAttDecl)},
	{"fTempQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DTDGrammarUtil, fTempQName)},
	{"fBuffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(DTDGrammarUtil, fBuffer)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PRIVATE, $field(DTDGrammarUtil, fNamespaceContext)},
	{}
};

$MethodInfo _DTDGrammarUtil_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DTDGrammarUtil, init$, void, $SymbolTable*)},
	{"<init>", "(Lcom/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DTDGrammarUtil, init$, void, $DTDGrammar*, $SymbolTable*)},
	{"<init>", "(Lcom/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(DTDGrammarUtil, init$, void, $DTDGrammar*, $SymbolTable*, $NamespaceContext*)},
	{"addDTDDefaultAttrs", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, addDTDDefaultAttrs, void, $QName*, $XMLAttributes*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, endElement, void, $QName*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ensureStackCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammarUtil, ensureStackCapacity, void, int32_t)},
	{"getAttributeTypeName", "(Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DTDGrammarUtil, getAttributeTypeName, $String*, $XMLAttributeDecl*)},
	{"handleEndElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammarUtil, handleEndElement, void, $QName*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"handleStartElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammarUtil, handleStartElement, void, $QName*, $XMLAttributes*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isIgnorableWhiteSpace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, isIgnorableWhiteSpace, bool, $XMLString*)},
	{"isInElementContent", "()Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, isInElementContent, bool)},
	{"normalizeAttrValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;I)Z", nullptr, $PRIVATE, $method(DTDGrammarUtil, normalizeAttrValue, bool, $XMLAttributes*, int32_t)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammarUtil, startElement, void, $QName*, $XMLAttributes*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DTDGrammarUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.dtd.DTDGrammarUtil",
	"java.lang.Object",
	nullptr,
	_DTDGrammarUtil_FieldInfo_,
	_DTDGrammarUtil_MethodInfo_
};

$Object* allocate$DTDGrammarUtil($Class* clazz) {
	return $of($alloc(DTDGrammarUtil));
}

$String* DTDGrammarUtil::SYMBOL_TABLE = nullptr;
$String* DTDGrammarUtil::NAMESPACES = nullptr;

void DTDGrammarUtil::init$($SymbolTable* symbolTable) {
	$set(this, fDTDGrammar, nullptr);
	$set(this, fSymbolTable, nullptr);
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	$set(this, fElementContentState, $new($booleans, 8));
	this->fElementDepth = -1;
	this->fInElementContent = false;
	$set(this, fTempAttDecl, $new($XMLAttributeDecl));
	$set(this, fTempQName, $new($QName));
	$set(this, fBuffer, $new($StringBuilder));
	$set(this, fNamespaceContext, nullptr);
	$set(this, fSymbolTable, symbolTable);
}

void DTDGrammarUtil::init$($DTDGrammar* grammar, $SymbolTable* symbolTable) {
	$set(this, fDTDGrammar, nullptr);
	$set(this, fSymbolTable, nullptr);
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	$set(this, fElementContentState, $new($booleans, 8));
	this->fElementDepth = -1;
	this->fInElementContent = false;
	$set(this, fTempAttDecl, $new($XMLAttributeDecl));
	$set(this, fTempQName, $new($QName));
	$set(this, fBuffer, $new($StringBuilder));
	$set(this, fNamespaceContext, nullptr);
	$set(this, fDTDGrammar, grammar);
	$set(this, fSymbolTable, symbolTable);
}

void DTDGrammarUtil::init$($DTDGrammar* grammar, $SymbolTable* symbolTable, $NamespaceContext* namespaceContext) {
	$set(this, fDTDGrammar, nullptr);
	$set(this, fSymbolTable, nullptr);
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	$set(this, fElementContentState, $new($booleans, 8));
	this->fElementDepth = -1;
	this->fInElementContent = false;
	$set(this, fTempAttDecl, $new($XMLAttributeDecl));
	$set(this, fTempQName, $new($QName));
	$set(this, fBuffer, $new($StringBuilder));
	$set(this, fNamespaceContext, nullptr);
	$set(this, fDTDGrammar, grammar);
	$set(this, fSymbolTable, symbolTable);
	$set(this, fNamespaceContext, namespaceContext);
}

void DTDGrammarUtil::reset($XMLComponentManager* componentManager) {
	$set(this, fDTDGrammar, nullptr);
	this->fInElementContent = false;
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	this->fNamespaces = $nc(componentManager)->getFeature(DTDGrammarUtil::NAMESPACES, true);
	$init($Constants);
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}))));
	this->fElementDepth = -1;
}

void DTDGrammarUtil::startElement($QName* element, $XMLAttributes* attributes) {
	handleStartElement(element, attributes);
}

void DTDGrammarUtil::endElement($QName* element) {
	handleEndElement(element);
}

void DTDGrammarUtil::startCDATA($Augmentations* augs) {
}

void DTDGrammarUtil::endCDATA($Augmentations* augs) {
}

void DTDGrammarUtil::addDTDDefaultAttrs($QName* elementName, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	int32_t elementIndex = 0;
	elementIndex = $nc(this->fDTDGrammar)->getElementDeclIndex(elementName);
	if (elementIndex == -1 || this->fDTDGrammar == nullptr) {
		return;
	}
	int32_t attlistIndex = $nc(this->fDTDGrammar)->getFirstAttributeDeclIndex(elementIndex);
	while (attlistIndex != -1) {
		$nc(this->fDTDGrammar)->getAttributeDecl(attlistIndex, this->fTempAttDecl);
		$var($String, attPrefix, $nc($nc(this->fTempAttDecl)->name)->prefix);
		$var($String, attLocalpart, $nc($nc(this->fTempAttDecl)->name)->localpart);
		$var($String, attRawName, $nc($nc(this->fTempAttDecl)->name)->rawname);
		$var($String, attType, getAttributeTypeName(this->fTempAttDecl));
		int32_t attDefaultType = $nc($nc(this->fTempAttDecl)->simpleType)->defaultType;
		$var($String, attValue, nullptr);
		if ($nc($nc(this->fTempAttDecl)->simpleType)->defaultValue != nullptr) {
			$assign(attValue, $nc($nc(this->fTempAttDecl)->simpleType)->defaultValue);
		}
		bool specified = false;
		bool required = attDefaultType == $XMLSimpleType::DEFAULT_TYPE_REQUIRED;
		$init($XMLSymbols);
		bool cdata = attType == $XMLSymbols::fCDATASymbol;
		if (!cdata || required || attValue != nullptr) {
			$init($XMLConstants);
			if (this->fNamespaceContext != nullptr && $nc(attRawName)->startsWith($XMLConstants::XMLNS_ATTRIBUTE)) {
				$var($String, prefix, ""_s);
				int32_t pos = attRawName->indexOf((int32_t)u':');
				if (pos != -1) {
					$assign(prefix, attRawName->substring(0, pos));
				} else {
					$assign(prefix, attRawName);
				}
				$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
				if (!$nc(($cast($NamespaceSupport, this->fNamespaceContext)))->containsPrefixInCurrentContext(prefix)) {
					$nc(this->fNamespaceContext)->declarePrefix(prefix, attValue);
				}
				specified = true;
			} else {
				int32_t attrCount = $nc(attributes)->getLength();
				for (int32_t i = 0; i < attrCount; ++i) {
					if (attributes->getQName(i) == attRawName) {
						specified = true;
						break;
					}
				}
			}
		}
		if (!specified) {
			if (attValue != nullptr) {
				if (this->fNamespaces) {
					int32_t index = $nc(attRawName)->indexOf((int32_t)u':');
					if (index != -1) {
						$assign(attPrefix, attRawName->substring(0, index));
						$assign(attPrefix, $nc(this->fSymbolTable)->addSymbol(attPrefix));
						$assign(attLocalpart, attRawName->substring(index + 1));
						$assign(attLocalpart, $nc(this->fSymbolTable)->addSymbol(attLocalpart));
					}
				}
				$nc(this->fTempQName)->setValues(attPrefix, attLocalpart, attRawName, $nc($nc(this->fTempAttDecl)->name)->uri);
				int32_t newAttr = $nc(attributes)->addAttribute(this->fTempQName, attType, attValue);
			}
		}
		attlistIndex = $nc(this->fDTDGrammar)->getNextAttributeDeclIndex(attlistIndex);
	}
	int32_t attrCount = $nc(attributes)->getLength();
	for (int32_t i = 0; i < attrCount; ++i) {
		$var($String, attrRawName, attributes->getQName(i));
		bool declared = false;
		int32_t position = $nc(this->fDTDGrammar)->getFirstAttributeDeclIndex(elementIndex);
		while (position != -1) {
			$nc(this->fDTDGrammar)->getAttributeDecl(position, this->fTempAttDecl);
			if ($nc($nc(this->fTempAttDecl)->name)->rawname == attrRawName) {
				declared = true;
				break;
			}
			position = $nc(this->fDTDGrammar)->getNextAttributeDeclIndex(position);
		}
		if (!declared) {
			continue;
		}
		$var($String, type, getAttributeTypeName(this->fTempAttDecl));
		attributes->setType(i, type);
		bool changedByNormalization = false;
		$init($XMLSymbols);
		if (attributes->isSpecified(i) && type != $XMLSymbols::fCDATASymbol) {
			changedByNormalization = normalizeAttrValue(attributes, i);
		}
	}
}

bool DTDGrammarUtil::normalizeAttrValue($XMLAttributes* attributes, int32_t index) {
	$useLocalCurrentObjectStackCache();
	bool leadingSpace = true;
	bool spaceStart = false;
	bool readingNonSpace = false;
	int32_t count = 0;
	int32_t eaten = 0;
	$var($String, attrValue, $nc(attributes)->getValue(index));
	$var($chars, attValue, $new($chars, $nc(attrValue)->length()));
	$nc(this->fBuffer)->setLength(0);
	attrValue->getChars(0, attrValue->length(), attValue, 0);
	for (int32_t i = 0; i < attValue->length; ++i) {
		if (attValue->get(i) == u' ') {
			if (readingNonSpace) {
				spaceStart = true;
				readingNonSpace = false;
			}
			if (spaceStart && !leadingSpace) {
				spaceStart = false;
				$nc(this->fBuffer)->append(attValue->get(i));
				++count;
			} else if (leadingSpace || !spaceStart) {
				++eaten;
			}
		} else {
			readingNonSpace = true;
			spaceStart = false;
			leadingSpace = false;
			$nc(this->fBuffer)->append(attValue->get(i));
			++count;
		}
	}
	if (count > 0 && $nc(this->fBuffer)->charAt(count - 1) == u' ') {
		$nc(this->fBuffer)->setLength(count - 1);
	}
	$var($String, newValue, $nc(this->fBuffer)->toString());
	attributes->setValue(index, newValue);
	return !attrValue->equals(newValue);
}

$String* DTDGrammarUtil::getAttributeTypeName($XMLAttributeDecl* attrDecl) {
	$useLocalCurrentObjectStackCache();
	switch ($nc($nc(attrDecl)->simpleType)->type) {
	case $XMLSimpleType::TYPE_ENTITY:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fENTITIESSymbol : $XMLSymbols::fENTITYSymbol;
			}
		}
	case $XMLSimpleType::TYPE_ENUMERATION:
		{
			{
				$var($StringBuilder, buffer, $new($StringBuilder));
				buffer->append(u'(');
				for (int32_t i = 0; i < $nc($nc(attrDecl->simpleType)->enumeration)->length; ++i) {
					if (i > 0) {
						buffer->append("|"_s);
					}
					buffer->append($nc($nc(attrDecl->simpleType)->enumeration)->get(i));
				}
				buffer->append(u')');
				return $nc(this->fSymbolTable)->addSymbol($(buffer->toString()));
			}
		}
	case $XMLSimpleType::TYPE_ID:
		{
			{
				$init($XMLSymbols);
				return $XMLSymbols::fIDSymbol;
			}
		}
	case $XMLSimpleType::TYPE_IDREF:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fIDREFSSymbol : $XMLSymbols::fIDREFSymbol;
			}
		}
	case $XMLSimpleType::TYPE_NMTOKEN:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fNMTOKENSSymbol : $XMLSymbols::fNMTOKENSymbol;
			}
		}
	case $XMLSimpleType::TYPE_NOTATION:
		{
			{
				$init($XMLSymbols);
				return $XMLSymbols::fNOTATIONSymbol;
			}
		}
	}
	$init($XMLSymbols);
	return $XMLSymbols::fCDATASymbol;
}

void DTDGrammarUtil::ensureStackCapacity(int32_t newElementDepth) {
	if (newElementDepth == $nc(this->fElementContentState)->length) {
		$var($booleans, newStack, $new($booleans, newElementDepth * 2));
		$System::arraycopy(this->fElementContentState, 0, newStack, 0, newElementDepth);
		$set(this, fElementContentState, newStack);
	}
}

void DTDGrammarUtil::handleStartElement($QName* element, $XMLAttributes* attributes) {
	if (this->fDTDGrammar == nullptr) {
		this->fCurrentElementIndex = -1;
		this->fCurrentContentSpecType = -1;
		this->fInElementContent = false;
		return;
	} else {
		this->fCurrentElementIndex = $nc(this->fDTDGrammar)->getElementDeclIndex(element);
		this->fCurrentContentSpecType = $nc(this->fDTDGrammar)->getContentSpecType(this->fCurrentElementIndex);
		addDTDDefaultAttrs(element, attributes);
	}
	this->fInElementContent = this->fCurrentContentSpecType == $XMLElementDecl::TYPE_CHILDREN;
	++this->fElementDepth;
	ensureStackCapacity(this->fElementDepth);
	$nc(this->fElementContentState)->set(this->fElementDepth, this->fInElementContent);
}

void DTDGrammarUtil::handleEndElement($QName* element) {
	if (this->fDTDGrammar == nullptr) {
		return;
	}
	--this->fElementDepth;
	if (this->fElementDepth < -1) {
		$throwNew($RuntimeException, "FWK008 Element stack underflow"_s);
	}
	if (this->fElementDepth < 0) {
		this->fCurrentElementIndex = -1;
		this->fCurrentContentSpecType = -1;
		this->fInElementContent = false;
		return;
	}
	this->fInElementContent = $nc(this->fElementContentState)->get(this->fElementDepth);
}

bool DTDGrammarUtil::isInElementContent() {
	return this->fInElementContent;
}

bool DTDGrammarUtil::isIgnorableWhiteSpace($XMLString* text) {
	if (isInElementContent()) {
		for (int32_t i = $nc(text)->offset; i < text->offset + text->length; ++i) {
			if (!$XMLChar::isSpace($nc(text->ch)->get(i))) {
				return false;
			}
		}
		return true;
	}
	return false;
}

DTDGrammarUtil::DTDGrammarUtil() {
}

void clinit$DTDGrammarUtil($Class* class$) {
	$init($Constants);
	$assignStatic(DTDGrammarUtil::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(DTDGrammarUtil::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
}

$Class* DTDGrammarUtil::load$($String* name, bool initialize) {
	$loadClass(DTDGrammarUtil, name, initialize, &_DTDGrammarUtil_ClassInfo_, clinit$DTDGrammarUtil, allocate$DTDGrammarUtil);
	return class$;
}

$Class* DTDGrammarUtil::class$ = nullptr;

					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com