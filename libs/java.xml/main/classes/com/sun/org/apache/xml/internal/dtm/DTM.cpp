#include <com/sun/org/apache/xml/internal/dtm/DTM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DTM
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef NAMESPACE_NODE
#undef NOTATION_NODE
#undef NTYPES
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOT_NODE
#undef TEXT_NODE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $DeclHandler = ::org::xml::sax::ext::DeclHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTM_FieldInfo_[] = {
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NULL)},
	{"ROOT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ROOT_NODE)},
	{"ELEMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ELEMENT_NODE)},
	{"ATTRIBUTE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ATTRIBUTE_NODE)},
	{"TEXT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, TEXT_NODE)},
	{"CDATA_SECTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, CDATA_SECTION_NODE)},
	{"ENTITY_REFERENCE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ENTITY_REFERENCE_NODE)},
	{"ENTITY_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, ENTITY_NODE)},
	{"PROCESSING_INSTRUCTION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, PROCESSING_INSTRUCTION_NODE)},
	{"COMMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, COMMENT_NODE)},
	{"DOCUMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_NODE)},
	{"DOCUMENT_TYPE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_TYPE_NODE)},
	{"DOCUMENT_FRAGMENT_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, DOCUMENT_FRAGMENT_NODE)},
	{"NOTATION_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NOTATION_NODE)},
	{"NAMESPACE_NODE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NAMESPACE_NODE)},
	{"NTYPES", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTM, NTYPES)},
	{}
};

$MethodInfo _DTM_MethodInfo_[] = {
	{"appendChild", "(IZZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, appendChild, void, int32_t, bool, bool)},
	{"appendTextChild", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, appendTextChild, void, $String*)},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, dispatchCharactersEvents, void, int32_t, $ContentHandler*, bool), "org.xml.sax.SAXException"},
	{"dispatchToEvents", "(ILorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, dispatchToEvents, void, int32_t, $ContentHandler*), "org.xml.sax.SAXException"},
	{"documentRegistration", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, documentRegistration, void)},
	{"documentRelease", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, documentRelease, void)},
	{"getAttributeNode", "(ILjava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getAttributeNode, int32_t, int32_t, $String*, $String*)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getAxisTraverser, $DTMAxisTraverser*, int32_t)},
	{"getContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getContentHandler, $ContentHandler*)},
	{"getDTDHandler", "()Lorg/xml/sax/DTDHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDTDHandler, $DTDHandler*)},
	{"getDeclHandler", "()Lorg/xml/sax/ext/DeclHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDeclHandler, $DeclHandler*)},
	{"getDocument", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocument, int32_t)},
	{"getDocumentAllDeclarationsProcessed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentAllDeclarationsProcessed, bool)},
	{"getDocumentBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentBaseURI, $String*)},
	{"getDocumentEncoding", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentEncoding, $String*, int32_t)},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentRoot, int32_t, int32_t)},
	{"getDocumentStandalone", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentStandalone, $String*, int32_t)},
	{"getDocumentSystemIdentifier", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentSystemIdentifier, $String*, int32_t)},
	{"getDocumentTypeDeclarationPublicIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentTypeDeclarationPublicIdentifier, $String*)},
	{"getDocumentTypeDeclarationSystemIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentTypeDeclarationSystemIdentifier, $String*)},
	{"getDocumentVersion", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getDocumentVersion, $String*, int32_t)},
	{"getElementById", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getElementById, int32_t, $String*)},
	{"getEntityResolver", "()Lorg/xml/sax/EntityResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getEntityResolver, $EntityResolver*)},
	{"getErrorHandler", "()Lorg/xml/sax/ErrorHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getErrorHandler, $ErrorHandler*)},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getExpandedTypeID, int32_t, int32_t)},
	{"getExpandedTypeID", "(Ljava/lang/String;Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getExpandedTypeID, int32_t, $String*, $String*, int32_t)},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getFirstAttribute, int32_t, int32_t)},
	{"getFirstChild", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getFirstChild, int32_t, int32_t)},
	{"getFirstNamespaceNode", "(IZ)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getFirstNamespaceNode, int32_t, int32_t, bool)},
	{"getLastChild", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getLastChild, int32_t, int32_t)},
	{"getLevel", "(I)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getLevel, int16_t, int32_t)},
	{"getLexicalHandler", "()Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getLexicalHandler, $LexicalHandler*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getLocalName, $String*, int32_t)},
	{"getLocalNameFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getLocalNameFromExpandedNameID, $String*, int32_t)},
	{"getNamespaceFromExpandedNameID", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNamespaceFromExpandedNameID, $String*, int32_t)},
	{"getNamespaceURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNamespaceURI, $String*, int32_t)},
	{"getNextAttribute", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNextAttribute, int32_t, int32_t)},
	{"getNextNamespaceNode", "(IIZ)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNextNamespaceNode, int32_t, int32_t, int32_t, bool)},
	{"getNextSibling", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNextSibling, int32_t, int32_t)},
	{"getNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNode, $Node*, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNodeNameX, $String*, int32_t)},
	{"getNodeType", "(I)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNodeType, int16_t, int32_t)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getNodeValue, $String*, int32_t)},
	{"getOwnerDocument", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getOwnerDocument, int32_t, int32_t)},
	{"getParent", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getParent, int32_t, int32_t)},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getPrefix, $String*, int32_t)},
	{"getPreviousSibling", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getPreviousSibling, int32_t, int32_t)},
	{"getSourceLocatorFor", "(I)Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getSourceLocatorFor, $SourceLocator*, int32_t)},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getStringValue, $XMLString*, int32_t)},
	{"getStringValueChunk", "(II[I)[C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getStringValueChunk, $chars*, int32_t, int32_t, $ints*)},
	{"getStringValueChunkCount", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getStringValueChunkCount, int32_t, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, getUnparsedEntityURI, $String*, $String*)},
	{"hasChildNodes", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, hasChildNodes, bool, int32_t)},
	{"isAttributeSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, isAttributeSpecified, bool, int32_t)},
	{"isCharacterElementContentWhitespace", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, isCharacterElementContentWhitespace, bool, int32_t)},
	{"isDocumentAllDeclarationsProcessed", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, isDocumentAllDeclarationsProcessed, bool, int32_t)},
	{"isNodeAfter", "(II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, isNodeAfter, bool, int32_t, int32_t)},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, isSupported, bool, $String*, $String*)},
	{"migrateTo", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, migrateTo, void, $DTMManager*)},
	{"needsTwoThreads", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, needsTwoThreads, bool)},
	{"setDocumentBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, setDocumentBaseURI, void, $String*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, setFeature, void, $String*, bool)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, setProperty, void, $String*, Object$*)},
	{"supportsPreStripping", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTM, supportsPreStripping, bool)},
	{}
};

$ClassInfo _DTM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTM",
	nullptr,
	nullptr,
	_DTM_FieldInfo_,
	_DTM_MethodInfo_
};

$Object* allocate$DTM($Class* clazz) {
	return $of($alloc(DTM));
}

$Class* DTM::load$($String* name, bool initialize) {
	$loadClass(DTM, name, initialize, &_DTM_ClassInfo_, allocate$DTM);
	return class$;
}

$Class* DTM::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com