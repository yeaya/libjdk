#include <com/sun/xml/internal/stream/dtd/nonvalidating/DTDGrammar.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl.h>
#include <com/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef DEBUG
#undef DEFAULT_TYPE_FIXED
#undef DEFAULT_TYPE_IMPLIED
#undef DEFAULT_TYPE_REQUIRED
#undef INITIAL_CHUNK_COUNT
#undef LIST_FLAG
#undef LIST_MASK
#undef TOP_LEVEL_SCOPE
#undef TYPE_ANY
#undef TYPE_CDATA
#undef TYPE_CHILDREN
#undef TYPE_EMPTY
#undef TYPE_ENTITY
#undef TYPE_ENUMERATION
#undef TYPE_ID
#undef TYPE_IDREF
#undef TYPE_MIXED
#undef TYPE_NMTOKEN
#undef TYPE_NOTATION

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $intArray2 = $Array<int32_t, 2>;
using $QNameArray2 = $Array<::com::sun::org::apache::xerces::internal::xni::QName, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $StringArray3 = $Array<::java::lang::String, 3>;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLAttributeDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl;
using $XMLElementDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLElementDecl;
using $XMLNotationDecl = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLNotationDecl;
using $XMLSimpleType = ::com::sun::xml::internal::stream::dtd::nonvalidating::XMLSimpleType;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {

$FieldInfo _DTDGrammar_FieldInfo_[] = {
	{"TOP_LEVEL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTDGrammar, TOP_LEVEL_SCOPE)},
	{"CHUNK_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_SHIFT)},
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, CHUNK_MASK)},
	{"INITIAL_CHUNK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, INITIAL_CHUNK_COUNT)},
	{"LIST_FLAG", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, LIST_FLAG)},
	{"LIST_MASK", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, LIST_MASK)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTDGrammar, DEBUG)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PROTECTED, $field(DTDGrammar, fDTDSource)},
	{"fDTDContentModelSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PROTECTED, $field(DTDGrammar, fDTDContentModelSource)},
	{"fCurrentElementIndex", "I", nullptr, $PROTECTED, $field(DTDGrammar, fCurrentElementIndex)},
	{"fCurrentAttributeIndex", "I", nullptr, $PROTECTED, $field(DTDGrammar, fCurrentAttributeIndex)},
	{"fReadingExternalDTD", "Z", nullptr, $PROTECTED, $field(DTDGrammar, fReadingExternalDTD)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(DTDGrammar, fSymbolTable)},
	{"notationDecls", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl;>;", $PRIVATE | $FINAL, $field(DTDGrammar, notationDecls)},
	{"fElementDeclCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclCount)},
	{"fElementDeclName", "[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclName)},
	{"fElementDeclType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclType)},
	{"fElementDeclFirstAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclFirstAttributeDeclIndex)},
	{"fElementDeclLastAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fElementDeclLastAttributeDeclIndex)},
	{"fAttributeDeclCount", "I", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclCount)},
	{"fAttributeDeclName", "[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclName)},
	{"fAttributeDeclType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclType)},
	{"fAttributeDeclEnumeration", "[[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclEnumeration)},
	{"fAttributeDeclDefaultType", "[[S", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclDefaultType)},
	{"fAttributeDeclDefaultValue", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclDefaultValue)},
	{"fAttributeDeclNonNormalizedDefaultValue", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclNonNormalizedDefaultValue)},
	{"fAttributeDeclNextAttributeDeclIndex", "[[I", nullptr, $PRIVATE, $field(DTDGrammar, fAttributeDeclNextAttributeDeclIndex)},
	{"fElementIndexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(DTDGrammar, fElementIndexMap)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DTDGrammar, fQName)},
	{"fAttributeDecl", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl;", nullptr, $PROTECTED, $field(DTDGrammar, fAttributeDecl)},
	{"fElementDecl", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl;", nullptr, $PRIVATE, $field(DTDGrammar, fElementDecl)},
	{"fSimpleType", "Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLSimpleType;", nullptr, $PRIVATE, $field(DTDGrammar, fSimpleType)},
	{"fElementDeclTab", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl;>;", 0, $field(DTDGrammar, fElementDeclTab)},
	{}
};

$MethodInfo _DTDGrammar_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(DTDGrammar, init$, void, $SymbolTable*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"createAttributeDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createAttributeDecl, int32_t)},
	{"createElementDecl", "()I", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, createElementDecl, int32_t)},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"ensureAttributeDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureAttributeDeclCapacity, void, int32_t)},
	{"ensureElementDeclCapacity", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, ensureElementDeclCapacity, void, int32_t)},
	{"getAttributeDecl", "(ILcom/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getAttributeDecl, bool, int32_t, $XMLAttributeDecl*)},
	{"getAttributeDeclIndex", "(ILjava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getAttributeDeclIndex, int32_t, int32_t, $String*)},
	{"getContentSpecType", "(I)S", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getContentSpecType, int16_t, int32_t)},
	{"getElementDecl", "(ILcom/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDecl, bool, int32_t, $XMLElementDecl*)},
	{"getElementDeclIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDeclIndex, int32_t, $String*)},
	{"getElementDeclIndex", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getElementDeclIndex, int32_t, $QName*)},
	{"getFirstAttributeDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getFirstAttributeDeclIndex, int32_t, int32_t)},
	{"getFirstElementDeclIndex", "()I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getFirstElementDeclIndex, int32_t)},
	{"getNextAttributeDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNextAttributeDeclIndex, int32_t, int32_t)},
	{"getNextElementDeclIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getNextElementDeclIndex, int32_t, int32_t)},
	{"getNotationDecls", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/xml/internal/stream/dtd/nonvalidating/XMLNotationDecl;>;", $PUBLIC, $virtualMethod(DTDGrammar, getNotationDecls, $List*)},
	{"getSymbolTable", "()Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, getSymbolTable, $SymbolTable*)},
	{"isCDATAAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, isCDATAAttribute, bool, $QName*, $QName*)},
	{"normalizeDefaultAttrValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PRIVATE, $method(DTDGrammar, normalizeDefaultAttrValue, bool, $XMLString*)},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"printAttribute", "(I)V", nullptr, $PRIVATE, $method(DTDGrammar, printAttribute, void, int32_t)},
	{"printAttributes", "(I)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, printAttributes, void, int32_t)},
	{"printElements", "()V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, printElements, void)},
	{"resize", "([[SI)[[S", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $shortArray2*, $shortArray2*, int32_t)},
	{"resize", "([[II)[[I", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $intArray2*, $intArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/xni/QName;I)[[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $QNameArray2*, $QNameArray2*, int32_t)},
	{"resize", "([[Ljava/lang/String;I)[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $StringArray2*, $StringArray2*, int32_t)},
	{"resize", "([[[Ljava/lang/String;I)[[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DTDGrammar, resize, $StringArray3*, $StringArray3*, int32_t)},
	{"setAttributeDecl", "(IILcom/sun/xml/internal/stream/dtd/nonvalidating/XMLAttributeDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setAttributeDecl, void, int32_t, int32_t, $XMLAttributeDecl*)},
	{"setElementDecl", "(ILcom/sun/xml/internal/stream/dtd/nonvalidating/XMLElementDecl;)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setElementDecl, void, int32_t, $XMLElementDecl*)},
	{"setFirstAttributeDeclIndex", "(II)V", nullptr, $PROTECTED, $virtualMethod(DTDGrammar, setFirstAttributeDeclIndex, void, int32_t, int32_t)},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(DTDGrammar, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _DTDGrammar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.dtd.nonvalidating.DTDGrammar",
	"java.lang.Object",
	nullptr,
	_DTDGrammar_FieldInfo_,
	_DTDGrammar_MethodInfo_
};

$Object* allocate$DTDGrammar($Class* clazz) {
	return $of($alloc(DTDGrammar));
}

void DTDGrammar::init$($SymbolTable* symbolTable) {
	$set(this, fDTDSource, nullptr);
	$set(this, fDTDContentModelSource, nullptr);
	this->fReadingExternalDTD = false;
	$set(this, notationDecls, $new($ArrayList));
	this->fElementDeclCount = 0;
	$set(this, fElementDeclName, $new($QNameArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclFirstAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementDeclLastAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	this->fAttributeDeclCount = 0;
	$set(this, fAttributeDeclName, $new($QNameArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclEnumeration, $new($StringArray3, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclDefaultType, $new($shortArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclDefaultValue, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclNonNormalizedDefaultValue, $new($StringArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fAttributeDeclNextAttributeDeclIndex, $new($intArray2, DTDGrammar::INITIAL_CHUNK_COUNT));
	$set(this, fElementIndexMap, $new($HashMap));
	$set(this, fQName, $new($QName));
	$set(this, fAttributeDecl, $new($XMLAttributeDecl));
	$set(this, fElementDecl, $new($XMLElementDecl));
	$set(this, fSimpleType, $new($XMLSimpleType));
	$set(this, fElementDeclTab, $new($HashMap));
	$set(this, fSymbolTable, symbolTable);
}

int32_t DTDGrammar::getAttributeDeclIndex(int32_t elementDeclIndex, $String* attributeDeclName) {
	if (elementDeclIndex == -1) {
		return -1;
	}
	int32_t attDefIndex = getFirstAttributeDeclIndex(elementDeclIndex);
	while (attDefIndex != -1) {
		getAttributeDecl(attDefIndex, this->fAttributeDecl);
		if ($nc($nc(this->fAttributeDecl)->name)->rawname == attributeDeclName || $nc(attributeDeclName)->equals($nc($nc(this->fAttributeDecl)->name)->rawname)) {
			return attDefIndex;
		}
		attDefIndex = getNextAttributeDeclIndex(attDefIndex);
	}
	return -1;
}

void DTDGrammar::startDTD($XMLLocator* locator, $Augmentations* augs) {
}

void DTDGrammar::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLElementDecl, tmpElementDecl, $cast($XMLElementDecl, $nc(this->fElementDeclTab)->get(name)));
	if (tmpElementDecl != nullptr) {
		if (tmpElementDecl->type == -1) {
			this->fCurrentElementIndex = getElementDeclIndex(name);
		} else {
			return;
		}
	} else {
		this->fCurrentElementIndex = createElementDecl();
	}
	$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
	$var($QName, elementName, $new($QName, nullptr, name, name, nullptr));
	$nc(elementDecl->name)->setValues(elementName);
	elementDecl->scope = -1;
	if ($nc(contentModel)->equals("EMPTY"_s)) {
		elementDecl->type = $XMLElementDecl::TYPE_EMPTY;
	} else if (contentModel->equals("ANY"_s)) {
		elementDecl->type = $XMLElementDecl::TYPE_ANY;
	} else if (contentModel->startsWith("("_s)) {
		if (contentModel->indexOf("#PCDATA"_s) > 0) {
			elementDecl->type = $XMLElementDecl::TYPE_MIXED;
		} else {
			elementDecl->type = $XMLElementDecl::TYPE_CHILDREN;
		}
	}
	$nc(this->fElementDeclTab)->put(name, elementDecl);
	$set(this, fElementDecl, elementDecl);
	setElementDecl(this->fCurrentElementIndex, this->fElementDecl);
	int32_t chunk = $sr(this->fCurrentElementIndex, DTDGrammar::CHUNK_SHIFT);
	ensureElementDeclCapacity(chunk);
}

void DTDGrammar::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$init($XMLSymbols);
	if (type != $XMLSymbols::fCDATASymbol && defaultValue != nullptr) {
		normalizeDefaultAttrValue(defaultValue);
	}
	if ($nc(this->fElementDeclTab)->containsKey(elementName)) {
	} else {
		this->fCurrentElementIndex = createElementDecl();
		$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
		$nc(elementDecl->name)->setValues(nullptr, elementName, elementName, nullptr);
		elementDecl->scope = -1;
		$nc(this->fElementDeclTab)->put(elementName, elementDecl);
		setElementDecl(this->fCurrentElementIndex, elementDecl);
	}
	int32_t elementIndex = getElementDeclIndex(elementName);
	if (getAttributeDeclIndex(elementIndex, attributeName) != -1) {
		return;
	}
	this->fCurrentAttributeIndex = createAttributeDecl();
	$nc(this->fSimpleType)->clear();
	if (defaultType != nullptr) {
		if (defaultType->equals("#FIXED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_FIXED;
		} else if (defaultType->equals("#IMPLIED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_IMPLIED;
		} else if (defaultType->equals("#REQUIRED"_s)) {
			$nc(this->fSimpleType)->defaultType = $XMLSimpleType::DEFAULT_TYPE_REQUIRED;
		}
	}
	$set($nc(this->fSimpleType), defaultValue, defaultValue != nullptr ? $nc(defaultValue)->toString() : ($String*)nullptr);
	$set($nc(this->fSimpleType), nonNormalizedDefaultValue, nonNormalizedDefaultValue != nullptr ? $nc(nonNormalizedDefaultValue)->toString() : ($String*)nullptr);
	$set($nc(this->fSimpleType), enumeration, enumeration);
	if ($nc(type)->equals("CDATA"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_CDATA;
	} else if (type->equals("ID"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ID;
	} else if (type->startsWith("IDREF"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_IDREF;
		if (type->indexOf("S"_s) > 0) {
			$nc(this->fSimpleType)->list = true;
		}
	} else if (type->equals("ENTITIES"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENTITY;
		$nc(this->fSimpleType)->list = true;
	} else if (type->equals("ENTITY"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENTITY;
	} else if (type->equals("NMTOKENS"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NMTOKEN;
		$nc(this->fSimpleType)->list = true;
	} else if (type->equals("NMTOKEN"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NMTOKEN;
	} else if (type->startsWith("NOTATION"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_NOTATION;
	} else if (type->startsWith("ENUMERATION"_s)) {
		$nc(this->fSimpleType)->type = $XMLSimpleType::TYPE_ENUMERATION;
	} else {
		$nc($System::err)->println($$str({"!!! unknown attribute type "_s, type}));
	}
	$nc(this->fQName)->setValues(nullptr, attributeName, attributeName, nullptr);
	$nc(this->fAttributeDecl)->setValues(this->fQName, this->fSimpleType, false);
	setAttributeDecl(elementIndex, this->fCurrentAttributeIndex, this->fAttributeDecl);
	int32_t chunk = $sr(this->fCurrentAttributeIndex, DTDGrammar::CHUNK_SHIFT);
	ensureAttributeDeclCapacity(chunk);
}

$SymbolTable* DTDGrammar::getSymbolTable() {
	return this->fSymbolTable;
}

int32_t DTDGrammar::getFirstElementDeclIndex() {
	return this->fElementDeclCount >= 0 ? 0 : -1;
}

int32_t DTDGrammar::getNextElementDeclIndex(int32_t elementDeclIndex) {
	return elementDeclIndex < this->fElementDeclCount - 1 ? elementDeclIndex + 1 : -1;
}

int32_t DTDGrammar::getElementDeclIndex($String* elementDeclName) {
	$var($Integer, mapping, $cast($Integer, $nc(this->fElementIndexMap)->get(elementDeclName)));
	if (mapping == nullptr) {
		$assign(mapping, $Integer::valueOf(-1));
	}
	return $nc(mapping)->intValue();
}

int32_t DTDGrammar::getElementDeclIndex($QName* elementDeclQName) {
	return getElementDeclIndex($nc(elementDeclQName)->rawname);
}

int16_t DTDGrammar::getContentSpecType(int32_t elementIndex) {
	if (elementIndex < 0 || elementIndex >= this->fElementDeclCount) {
		return (int16_t)-1;
	}
	int32_t chunk = $sr(elementIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	if ($nc($nc(this->fElementDeclType)->get(chunk))->get(index) == -1) {
		return (int16_t)-1;
	} else {
		return (int16_t)((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
	}
}

bool DTDGrammar::getElementDecl(int32_t elementDeclIndex, $XMLElementDecl* elementDecl) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return false;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(elementDecl)->name)->setValues($nc($nc(this->fElementDeclName)->get(chunk))->get(index));
	if ($nc($nc(this->fElementDeclType)->get(chunk))->get(index) == -1) {
		elementDecl->type = (int16_t)-1;
		$nc(elementDecl->simpleType)->list = false;
	} else {
		elementDecl->type = (int16_t)((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
		$nc(elementDecl->simpleType)->list = ((int32_t)($nc($nc(this->fElementDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_FLAG)) != 0;
	}
	$nc(elementDecl->simpleType)->defaultType = (int16_t)-1;
	$set($nc(elementDecl->simpleType), defaultValue, nullptr);
	return true;
}

int32_t DTDGrammar::getFirstAttributeDeclIndex(int32_t elementDeclIndex) {
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->get(index);
}

int32_t DTDGrammar::getNextAttributeDeclIndex(int32_t attributeDeclIndex) {
	int32_t chunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	return $nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(chunk))->get(index);
}

bool DTDGrammar::getAttributeDecl(int32_t attributeDeclIndex, $XMLAttributeDecl* attributeDecl) {
	if (attributeDeclIndex < 0 || attributeDeclIndex >= this->fAttributeDeclCount) {
		return false;
	}
	int32_t chunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(attributeDecl)->name)->setValues($nc($nc(this->fAttributeDeclName)->get(chunk))->get(index));
	int16_t attributeType = 0;
	bool isList = false;
	if ($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) == -1) {
		attributeType = (int16_t)-1;
		isList = false;
	} else {
		attributeType = (int16_t)((int32_t)($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_MASK));
		isList = ((int32_t)($nc($nc(this->fAttributeDeclType)->get(chunk))->get(index) & (uint32_t)(int32_t)DTDGrammar::LIST_FLAG)) != 0;
	}
	$nc(attributeDecl->simpleType)->setValues(attributeType, $nc($nc($nc(this->fAttributeDeclName)->get(chunk))->get(index))->localpart, $nc($nc(this->fAttributeDeclEnumeration)->get(chunk))->get(index), isList, $nc($nc(this->fAttributeDeclDefaultType)->get(chunk))->get(index), $nc($nc(this->fAttributeDeclDefaultValue)->get(chunk))->get(index), $nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(chunk))->get(index));
	return true;
}

bool DTDGrammar::isCDATAAttribute($QName* elName, $QName* atName) {
	int32_t elDeclIdx = getElementDeclIndex(elName);
	if (getAttributeDecl(elDeclIdx, this->fAttributeDecl) && $nc($nc(this->fAttributeDecl)->simpleType)->type != $XMLSimpleType::TYPE_CDATA) {
		return false;
	}
	return true;
}

void DTDGrammar::printElements() {
	$useLocalCurrentObjectStackCache();
	int32_t elementDeclIndex = 0;
	$var($XMLElementDecl, elementDecl, $new($XMLElementDecl));
	while (getElementDecl(elementDeclIndex++, elementDecl)) {
		$nc($System::out)->println($$str({"element decl: "_s, elementDecl->name, ", "_s, $nc(elementDecl->name)->rawname}));
	}
}

void DTDGrammar::printAttributes(int32_t elementDeclIndex) {
	int32_t attributeDeclIndex = getFirstAttributeDeclIndex(elementDeclIndex);
	$nc($System::out)->print(elementDeclIndex);
	$nc($System::out)->print(" ["_s);
	while (attributeDeclIndex != -1) {
		$nc($System::out)->print(u' ');
		$nc($System::out)->print(attributeDeclIndex);
		printAttribute(attributeDeclIndex);
		attributeDeclIndex = getNextAttributeDeclIndex(attributeDeclIndex);
		if (attributeDeclIndex != -1) {
			$nc($System::out)->print(","_s);
		}
	}
	$nc($System::out)->println(" ]"_s);
}

int32_t DTDGrammar::createElementDecl() {
	int32_t chunk = $sr(this->fElementDeclCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fElementDeclCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureElementDeclCapacity(chunk);
	$nc($nc(this->fElementDeclName)->get(chunk))->set(index, $$new($QName));
	$nc($nc(this->fElementDeclType)->get(chunk))->set(index, (int16_t)-1);
	$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->set(index, -1);
	$nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(chunk))->set(index, -1);
	return this->fElementDeclCount++;
}

void DTDGrammar::setElementDecl(int32_t elementDeclIndex, $XMLElementDecl* elementDecl) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	int32_t scope = $nc(elementDecl)->scope;
	$nc($nc($nc(this->fElementDeclName)->get(chunk))->get(index))->setValues(elementDecl->name);
	$nc($nc(this->fElementDeclType)->get(chunk))->set(index, elementDecl->type);
	if ($nc(elementDecl->simpleType)->list == true) {
		(*$nc($nc(this->fElementDeclType)->get(chunk)))[index] |= DTDGrammar::LIST_FLAG;
	}
	$nc(this->fElementIndexMap)->put($nc(elementDecl->name)->rawname, $($Integer::valueOf(elementDeclIndex)));
}

void DTDGrammar::setFirstAttributeDeclIndex(int32_t elementDeclIndex, int32_t newFirstAttrIndex) {
	if (elementDeclIndex < 0 || elementDeclIndex >= this->fElementDeclCount) {
		return;
	}
	int32_t chunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(chunk))->set(index, newFirstAttrIndex);
}

int32_t DTDGrammar::createAttributeDecl() {
	int32_t chunk = $sr(this->fAttributeDeclCount, DTDGrammar::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fAttributeDeclCount & (uint32_t)DTDGrammar::CHUNK_MASK);
	ensureAttributeDeclCapacity(chunk);
	$nc($nc(this->fAttributeDeclName)->get(chunk))->set(index, $$new($QName));
	$nc($nc(this->fAttributeDeclType)->get(chunk))->set(index, (int16_t)-1);
	$nc($nc(this->fAttributeDeclEnumeration)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclDefaultType)->get(chunk))->set(index, $XMLSimpleType::DEFAULT_TYPE_IMPLIED);
	$nc($nc(this->fAttributeDeclDefaultValue)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(chunk))->set(index, nullptr);
	$nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(chunk))->set(index, -1);
	return this->fAttributeDeclCount++;
}

void DTDGrammar::setAttributeDecl(int32_t elementDeclIndex, int32_t attributeDeclIndex, $XMLAttributeDecl* attributeDecl) {
	int32_t attrChunk = $sr(attributeDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t attrIndex = (int32_t)(attributeDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	$nc($nc($nc(this->fAttributeDeclName)->get(attrChunk))->get(attrIndex))->setValues($nc(attributeDecl)->name);
	$nc($nc(this->fAttributeDeclType)->get(attrChunk))->set(attrIndex, $nc($nc(attributeDecl)->simpleType)->type);
	if ($nc(attributeDecl->simpleType)->list) {
		(*$nc($nc(this->fAttributeDeclType)->get(attrChunk)))[attrIndex] |= DTDGrammar::LIST_FLAG;
	}
	$nc($nc(this->fAttributeDeclEnumeration)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->enumeration);
	$nc($nc(this->fAttributeDeclDefaultType)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->defaultType);
	$nc($nc(this->fAttributeDeclDefaultValue)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->defaultValue);
	$nc($nc(this->fAttributeDeclNonNormalizedDefaultValue)->get(attrChunk))->set(attrIndex, $nc(attributeDecl->simpleType)->nonNormalizedDefaultValue);
	int32_t elemChunk = $sr(elementDeclIndex, DTDGrammar::CHUNK_SHIFT);
	int32_t elemIndex = (int32_t)(elementDeclIndex & (uint32_t)DTDGrammar::CHUNK_MASK);
	int32_t index = $nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->get(elemIndex);
	while (index != -1) {
		if (index == attributeDeclIndex) {
			break;
		}
		attrChunk = $sr(index, DTDGrammar::CHUNK_SHIFT);
		attrIndex = (int32_t)(index & (uint32_t)DTDGrammar::CHUNK_MASK);
		index = $nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(attrChunk))->get(attrIndex);
	}
	if (index == -1) {
		if ($nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->get(elemIndex) == -1) {
			$nc($nc(this->fElementDeclFirstAttributeDeclIndex)->get(elemChunk))->set(elemIndex, attributeDeclIndex);
		} else {
			index = $nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(elemChunk))->get(elemIndex);
			attrChunk = $sr(index, DTDGrammar::CHUNK_SHIFT);
			attrIndex = (int32_t)(index & (uint32_t)DTDGrammar::CHUNK_MASK);
			$nc($nc(this->fAttributeDeclNextAttributeDeclIndex)->get(attrChunk))->set(attrIndex, attributeDeclIndex);
		}
		$nc($nc(this->fElementDeclLastAttributeDeclIndex)->get(elemChunk))->set(elemIndex, attributeDeclIndex);
	}
}

void DTDGrammar::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLNotationDecl, notationDecl, $new($XMLNotationDecl));
	$var($String, var$0, name);
	$var($String, var$1, $nc(identifier)->getPublicId());
	$var($String, var$2, identifier->getLiteralSystemId());
	notationDecl->setValues(var$0, var$1, var$2, $(identifier->getBaseSystemId()));
	$nc(this->notationDecls)->add(notationDecl);
}

$List* DTDGrammar::getNotationDecls() {
	return this->notationDecls;
}

void DTDGrammar::printAttribute(int32_t attributeDeclIndex) {
	$var($XMLAttributeDecl, attributeDecl, $new($XMLAttributeDecl));
	if (getAttributeDecl(attributeDeclIndex, attributeDecl)) {
		$nc($System::out)->print(" { "_s);
		$nc($System::out)->print($nc(attributeDecl->name)->localpart);
		$nc($System::out)->print(" }"_s);
	}
}

void DTDGrammar::ensureElementDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fElementDeclName)->length) {
		$set(this, fElementDeclName, resize(this->fElementDeclName, $nc(this->fElementDeclName)->length * 2));
		$set(this, fElementDeclType, resize(this->fElementDeclType, $nc(this->fElementDeclType)->length * 2));
		$set(this, fElementDeclFirstAttributeDeclIndex, resize(this->fElementDeclFirstAttributeDeclIndex, $nc(this->fElementDeclFirstAttributeDeclIndex)->length * 2));
		$set(this, fElementDeclLastAttributeDeclIndex, resize(this->fElementDeclLastAttributeDeclIndex, $nc(this->fElementDeclLastAttributeDeclIndex)->length * 2));
	} else if ($nc(this->fElementDeclName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fElementDeclName)->set(chunk, $$new($QNameArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclFirstAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	$nc(this->fElementDeclLastAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	return;
}

void DTDGrammar::ensureAttributeDeclCapacity(int32_t chunk) {
	$useLocalCurrentObjectStackCache();
	if (chunk >= $nc(this->fAttributeDeclName)->length) {
		$set(this, fAttributeDeclName, resize(this->fAttributeDeclName, $nc(this->fAttributeDeclName)->length * 2));
		$set(this, fAttributeDeclType, resize(this->fAttributeDeclType, $nc(this->fAttributeDeclType)->length * 2));
		$set(this, fAttributeDeclEnumeration, resize(this->fAttributeDeclEnumeration, $nc(this->fAttributeDeclEnumeration)->length * 2));
		$set(this, fAttributeDeclDefaultType, resize(this->fAttributeDeclDefaultType, $nc(this->fAttributeDeclDefaultType)->length * 2));
		$set(this, fAttributeDeclDefaultValue, resize(this->fAttributeDeclDefaultValue, $nc(this->fAttributeDeclDefaultValue)->length * 2));
		$set(this, fAttributeDeclNonNormalizedDefaultValue, resize(this->fAttributeDeclNonNormalizedDefaultValue, $nc(this->fAttributeDeclNonNormalizedDefaultValue)->length * 2));
		$set(this, fAttributeDeclNextAttributeDeclIndex, resize(this->fAttributeDeclNextAttributeDeclIndex, $nc(this->fAttributeDeclNextAttributeDeclIndex)->length * 2));
	} else if ($nc(this->fAttributeDeclName)->get(chunk) != nullptr) {
		return;
	}
	$nc(this->fAttributeDeclName)->set(chunk, $$new($QNameArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclEnumeration)->set(chunk, $$new($StringArray2, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclDefaultType)->set(chunk, $$new($shorts, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclDefaultValue)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclNonNormalizedDefaultValue)->set(chunk, $$new($StringArray, DTDGrammar::CHUNK_SIZE));
	$nc(this->fAttributeDeclNextAttributeDeclIndex)->set(chunk, $$new($ints, DTDGrammar::CHUNK_SIZE));
	return;
}

$shortArray2* DTDGrammar::resize($shortArray2* array, int32_t newsize) {
	$var($shortArray2, newarray, $new($shortArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$intArray2* DTDGrammar::resize($intArray2* array, int32_t newsize) {
	$var($intArray2, newarray, $new($intArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$QNameArray2* DTDGrammar::resize($QNameArray2* array, int32_t newsize) {
	$var($QNameArray2, newarray, $new($QNameArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$StringArray2* DTDGrammar::resize($StringArray2* array, int32_t newsize) {
	$var($StringArray2, newarray, $new($StringArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$StringArray3* DTDGrammar::resize($StringArray3* array, int32_t newsize) {
	$var($StringArray3, newarray, $new($StringArray3, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool DTDGrammar::normalizeDefaultAttrValue($XMLString* value) {
	int32_t oldLength = $nc(value)->length;
	bool skipSpace = true;
	int32_t current = value->offset;
	int32_t end = value->offset + value->length;
	for (int32_t i = value->offset; i < end; ++i) {
		if ($nc(value->ch)->get(i) == u' ') {
			if (!skipSpace) {
				$nc(value->ch)->set(current++, u' ');
				skipSpace = true;
			} else {
			}
		} else {
			if (current != i) {
				$nc(value->ch)->set(current, $nc(value->ch)->get(i));
			}
			++current;
			skipSpace = false;
		}
	}
	if (current != end) {
		if (skipSpace) {
			--current;
		}
		value->length = current - value->offset;
		return true;
	}
	return false;
}

void DTDGrammar::endDTD($Augmentations* augs) {
}

DTDGrammar::DTDGrammar() {
}

$Class* DTDGrammar::load$($String* name, bool initialize) {
	$loadClass(DTDGrammar, name, initialize, &_DTDGrammar_ClassInfo_, allocate$DTDGrammar);
	return class$;
}

$Class* DTDGrammar::class$ = nullptr;

						} // nonvalidating
					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com