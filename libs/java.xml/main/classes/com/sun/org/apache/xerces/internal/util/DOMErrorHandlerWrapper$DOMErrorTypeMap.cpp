#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper$DOMErrorTypeMap.h>

#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/DOMErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/XMLErrorCode.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef XML_DOMAIN

using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $XMLErrorCode = ::com::sun::org::apache::xerces::internal::util::XMLErrorCode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _DOMErrorHandlerWrapper$DOMErrorTypeMap_FieldInfo_[] = {
	{"fgDOMErrorTypeTable", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/util/XMLErrorCode;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DOMErrorHandlerWrapper$DOMErrorTypeMap, fgDOMErrorTypeTable)},
	{}
};

$MethodInfo _DOMErrorHandlerWrapper$DOMErrorTypeMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DOMErrorHandlerWrapper$DOMErrorTypeMap, init$, void)},
	{"getDOMErrorType", "(Lcom/sun/org/apache/xerces/internal/util/XMLErrorCode;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMErrorHandlerWrapper$DOMErrorTypeMap, getDOMErrorType, $String*, $XMLErrorCode*)},
	{}
};

$InnerClassInfo _DOMErrorHandlerWrapper$DOMErrorTypeMap_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap", "com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper", "DOMErrorTypeMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DOMErrorHandlerWrapper$DOMErrorTypeMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper$DOMErrorTypeMap",
	"java.lang.Object",
	nullptr,
	_DOMErrorHandlerWrapper$DOMErrorTypeMap_FieldInfo_,
	_DOMErrorHandlerWrapper$DOMErrorTypeMap_MethodInfo_,
	nullptr,
	nullptr,
	_DOMErrorHandlerWrapper$DOMErrorTypeMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper"
};

$Object* allocate$DOMErrorHandlerWrapper$DOMErrorTypeMap($Class* clazz) {
	return $of($alloc(DOMErrorHandlerWrapper$DOMErrorTypeMap));
}

$Map* DOMErrorHandlerWrapper$DOMErrorTypeMap::fgDOMErrorTypeTable = nullptr;

$String* DOMErrorHandlerWrapper$DOMErrorTypeMap::getDOMErrorType($XMLErrorCode* error) {
	$init(DOMErrorHandlerWrapper$DOMErrorTypeMap);
	return $cast($String, $nc(DOMErrorHandlerWrapper$DOMErrorTypeMap::fgDOMErrorTypeTable)->get(error));
}

void DOMErrorHandlerWrapper$DOMErrorTypeMap::init$() {
}

void clinit$DOMErrorHandlerWrapper$DOMErrorTypeMap($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Map, aDOMErrorTypeTable, $new($HashMap));
		$init($XMLMessageFormatter);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInCDSect"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInContent"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "TwoColonsInQName"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ColonNotLegalWithNS"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInProlog"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "CDEndInContent"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "CDSectUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "DoctypeNotAllowed"_s), "doctype-not-allowed"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ETagRequired"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ElementUnterminated"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EqRequiredInAttribute"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "OpenQuoteExpected"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "CloseQuoteExpected"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ETagUnterminated"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MarkupNotRecognizedInContent"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "DoctypeIllegalInContent"_s), "doctype-not-allowed"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInAttValue"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInPI"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInInternalSubset"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "QuoteRequiredInAttValue"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "LessthanInAttValue"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "AttributeValueUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PITargetRequired"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SpaceRequiredInPI"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PIUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ReservedPITarget"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PI_NOT_IN_ONE_ENTITY"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PINotInOneEntity"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EncodingDeclInvalid"_s), "unsupported-encoding"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EncodingByteOrderUnsupported"_s), "unsupported-encoding"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInEntityValue"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInExternalSubset"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInIgnoreSect"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInPublicID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "InvalidCharInSystemID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SpaceRequiredAfterSYSTEM"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "QuoteRequiredInSystemID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SystemIDUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SpaceRequiredAfterPUBLIC"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "QuoteRequiredInPublicID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PublicIDUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PubidCharIllegal"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SpaceRequiredBetweenPublicAndSystem"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ROOT_ELEMENT_TYPE_IN_DOCTYPEDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_ROOT_ELEMENT_TYPE_REQUIRED"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "DoctypedeclUnterminated"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PEReferenceWithinMarkup"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_MARKUP_NOT_RECOGNIZED_IN_DTD"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ELEMENT_TYPE_IN_ELEMENTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_TYPE_REQUIRED_IN_ELEMENTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_CONTENTSPEC_IN_ELEMENTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENTSPEC_REQUIRED_IN_ELEMENTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ElementDeclUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_OPEN_PAREN_OR_ELEMENT_TYPE_REQUIRED_IN_CHILDREN"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_CLOSE_PAREN_REQUIRED_IN_CHILDREN"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_TYPE_REQUIRED_IN_MIXED_CONTENT"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_CLOSE_PAREN_REQUIRED_IN_MIXED"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MixedContentUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ELEMENT_TYPE_IN_ATTLISTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_TYPE_REQUIRED_IN_ATTLISTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ATTRIBUTE_NAME_IN_ATTDEF"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "AttNameRequiredInAttDef"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ATTTYPE_IN_ATTDEF"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "AttTypeRequiredInAttDef"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_DEFAULTDECL_IN_ATTDEF"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ATTRIBUTE_DEFINITION"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_AFTER_NOTATION_IN_NOTATIONTYPE"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_OPEN_PAREN_REQUIRED_IN_NOTATIONTYPE"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_NAME_REQUIRED_IN_NOTATIONTYPE"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "NotationTypeUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_NMTOKEN_REQUIRED_IN_ENUMERATION"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EnumerationUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_DISTINCT_TOKENS_IN_ENUMERATION"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_DISTINCT_NOTATION_IN_ENUMERATION"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_AFTER_FIXED_IN_DEFAULTDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "IncludeSectUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "IgnoreSectUnterminated"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "NameRequiredInPEReference"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "SemicolonRequiredInPEReference"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ENTITY_NAME_IN_ENTITYDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_PERCENT_IN_PEDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_ENTITY_NAME_IN_PEDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_ENTITY_NAME_REQUIRED_IN_ENTITYDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_AFTER_ENTITY_NAME_IN_ENTITYDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_NOTATION_NAME_IN_UNPARSED_ENTITYDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_NDATA_IN_UNPARSED_ENTITYDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_NOTATION_NAME_REQUIRED_FOR_UNPARSED_ENTITYDECL"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EntityDeclUnterminated"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ENTITY_DEFINITION"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ExternalIDRequired"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_PUBIDLITERAL_IN_EXTERNALID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_AFTER_PUBIDLITERAL_IN_EXTERNALID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_SYSTEMLITERAL_IN_EXTERNALID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_URI_FRAGMENT_IN_SYSTEMID"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_BEFORE_NOTATION_NAME_IN_NOTATIONDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_NOTATION_NAME_REQUIRED_IN_NOTATIONDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "MSG_SPACE_REQUIRED_AFTER_NOTATION_NAME_IN_NOTATIONDECL"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ExternalIDorPublicIDRequired"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "NotationDeclUnterminated"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ReferenceToExternalEntity"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ReferenceToUnparsedEntity"_s), "wf-invalid-character"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EncodingNotSupported"_s), "unsupported-encoding"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EncodingRequired"_s), "unsupported-encoding"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "IllegalQName"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ElementXMLNSPrefix"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "ElementPrefixUnbound"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "AttributePrefixUnbound"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "EmptyPrefixedAttName"_s), "wf-invalid-character-in-node-name"_s);
		aDOMErrorTypeTable->put($$new($XMLErrorCode, $XMLMessageFormatter::XML_DOMAIN, "PrefixDeclared"_s), "wf-invalid-character-in-node-name"_s);
		$assignStatic(DOMErrorHandlerWrapper$DOMErrorTypeMap::fgDOMErrorTypeTable, $Collections::unmodifiableMap(aDOMErrorTypeTable));
	}
}

DOMErrorHandlerWrapper$DOMErrorTypeMap::DOMErrorHandlerWrapper$DOMErrorTypeMap() {
}

$Class* DOMErrorHandlerWrapper$DOMErrorTypeMap::load$($String* name, bool initialize) {
	$loadClass(DOMErrorHandlerWrapper$DOMErrorTypeMap, name, initialize, &_DOMErrorHandlerWrapper$DOMErrorTypeMap_ClassInfo_, clinit$DOMErrorHandlerWrapper$DOMErrorTypeMap, allocate$DOMErrorHandlerWrapper$DOMErrorTypeMap);
	return class$;
}

$Class* DOMErrorHandlerWrapper$DOMErrorTypeMap::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com