#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CDATASectionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CommentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer.h>
#include <com/sun/org/apache/xerces/internal/dom/DeepNodeListImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentFragmentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentTypeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/EntityReferenceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeListCache.h>
#include <com/sun/org/apache/xerces/internal/dom/NotationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/ProcessingInstructionImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/TextImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CDATASection.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Entity.h>
#include <org/w3c/dom/EntityReference.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Notation.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/Text.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <org/w3c/dom/events/Event.h>
#include <org/w3c/dom/events/EventListener.h>
#include <org/w3c/dom/ls/DOMImplementationLS.h>
#include <org/w3c/dom/ls/LSSerializer.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOM_DOMAIN
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef HIERARCHY_REQUEST_ERR
#undef INVALID_CHARACTER_ERR
#undef NAMESPACE_ERR
#undef NODE_ADOPTED
#undef NODE_CLONED
#undef NODE_IMPORTED
#undef NODE_RENAMED
#undef NOTATION_NODE
#undef NOT_SUPPORTED_ERR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef PROCESSING_INSTRUCTION_NODE
#undef SUN_DOM_ANCESTOR_CHECCK
#undef SUN_DOM_PROPERTY_PREFIX
#undef TEXT_NODE
#undef TYPE
#undef WRONG_DOCUMENT_ERR
#undef XMLNS_URI
#undef XML_URI

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
using $CDATASectionImpl = ::com::sun::org::apache::xerces::internal::dom::CDATASectionImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CommentImpl = ::com::sun::org::apache::xerces::internal::dom::CommentImpl;
using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $DOMConfigurationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMConfigurationImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMNormalizer = ::com::sun::org::apache::xerces::internal::dom::DOMNormalizer;
using $DeepNodeListImpl = ::com::sun::org::apache::xerces::internal::dom::DeepNodeListImpl;
using $DeferredDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DeferredDOMImplementationImpl;
using $DocumentFragmentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentFragmentImpl;
using $DocumentTypeImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentTypeImpl;
using $ElementDefinitionImpl = ::com::sun::org::apache::xerces::internal::dom::ElementDefinitionImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $EntityImpl = ::com::sun::org::apache::xerces::internal::dom::EntityImpl;
using $EntityReferenceImpl = ::com::sun::org::apache::xerces::internal::dom::EntityReferenceImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $NodeListCache = ::com::sun::org::apache::xerces::internal::dom::NodeListCache;
using $NotationImpl = ::com::sun::org::apache::xerces::internal::dom::NotationImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ParentNode$UserDataRecord = ::com::sun::org::apache::xerces::internal::dom::ParentNode$UserDataRecord;
using $ProcessingInstructionImpl = ::com::sun::org::apache::xerces::internal::dom::ProcessingInstructionImpl;
using $TextImpl = ::com::sun::org::apache::xerces::internal::dom::TextImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Attr = ::org::w3c::dom::Attr;
using $CDATASection = ::org::w3c::dom::CDATASection;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Entity = ::org::w3c::dom::Entity;
using $EntityReference = ::org::w3c::dom::EntityReference;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Notation = ::org::w3c::dom::Notation;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $Text = ::org::w3c::dom::Text;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;
using $Event = ::org::w3c::dom::events::Event;
using $EventListener = ::org::w3c::dom::events::EventListener;
using $DOMImplementationLS = ::org::w3c::dom::ls::DOMImplementationLS;
using $LSSerializer = ::org::w3c::dom::ls::LSSerializer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0 : public $Consumer {
	$class(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* userData, int16_t operation, $Node* n, $Node* c) {
		$set(this, userData, userData);
		this->operation = operation;
		$set(this, n, n);
		$set(this, c, c);
	}
	virtual void accept(Object$* key) override {
		CoreDocumentImpl::lambda$callUserDataHandlers$0(userData, operation, n, c, $cast($String, key));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0>());
	}
	$Map* userData = nullptr;
	int16_t operation = 0;
	$Node* n = nullptr;
	$Node* c = nullptr;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::fieldInfos[5] = {
	{"userData", "Ljava/util/Map;", nullptr, $PUBLIC, $field(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, userData)},
	{"operation", "S", nullptr, $PUBLIC, $field(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, operation)},
	{"n", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, n)},
	{"c", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, c)},
	{}
};
$MethodInfo CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;SLorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, init$, void, $Map*, int16_t, $Node*, $Node*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, accept, void, Object$*)},
	{}
};
$ClassInfo CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::load$($String* name, bool initialize) {
	$loadClass(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::class$ = nullptr;

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_getEncoding47[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_getStandalone60[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_getVersion66[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_setEncoding111[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_setStandalone115[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CoreDocumentImpl_MethodAnnotations_setVersion121[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CoreDocumentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CoreDocumentImpl, serialVersionUID)},
	{"docType", "Lcom/sun/org/apache/xerces/internal/dom/DocumentTypeImpl;", nullptr, $PROTECTED, $field(CoreDocumentImpl, docType)},
	{"docElement", "Lcom/sun/org/apache/xerces/internal/dom/ElementImpl;", nullptr, $PROTECTED, $field(CoreDocumentImpl, docElement)},
	{"fFreeNLCache", "Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;", nullptr, $TRANSIENT, $field(CoreDocumentImpl, fFreeNLCache)},
	{"encoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(CoreDocumentImpl, encoding)},
	{"actualEncoding", "Ljava/lang/String;", nullptr, $PROTECTED, $field(CoreDocumentImpl, actualEncoding)},
	{"version", "Ljava/lang/String;", nullptr, $PROTECTED, $field(CoreDocumentImpl, version)},
	{"standalone", "Z", nullptr, $PROTECTED, $field(CoreDocumentImpl, standalone)},
	{"fDocumentURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(CoreDocumentImpl, fDocumentURI)},
	{"nodeUserData", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;>;", $PRIVATE, $field(CoreDocumentImpl, nodeUserData)},
	{"identifiers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Node;>;", $PROTECTED, $field(CoreDocumentImpl, identifiers)},
	{"domNormalizer", "Lcom/sun/org/apache/xerces/internal/dom/DOMNormalizer;", nullptr, $TRANSIENT, $field(CoreDocumentImpl, domNormalizer)},
	{"fConfiguration", "Lcom/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl;", nullptr, $TRANSIENT, $field(CoreDocumentImpl, fConfiguration)},
	{"fXPathEvaluator", "Ljava/lang/Object;", nullptr, $TRANSIENT, $field(CoreDocumentImpl, fXPathEvaluator)},
	{"kidOK", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CoreDocumentImpl, kidOK)},
	{"changes", "I", nullptr, $PROTECTED, $field(CoreDocumentImpl, changes$)},
	{"allowGrammarAccess", "Z", nullptr, $PROTECTED, $field(CoreDocumentImpl, allowGrammarAccess)},
	{"errorChecking", "Z", nullptr, $PROTECTED, $field(CoreDocumentImpl, errorChecking)},
	{"ancestorChecking", "Z", nullptr, $PROTECTED, $field(CoreDocumentImpl, ancestorChecking)},
	{"xmlVersionChanged", "Z", nullptr, $PROTECTED, $field(CoreDocumentImpl, xmlVersionChanged)},
	{"documentNumber", "I", nullptr, $PRIVATE, $field(CoreDocumentImpl, documentNumber)},
	{"nodeCounter", "I", nullptr, $PRIVATE, $field(CoreDocumentImpl, nodeCounter)},
	{"nodeTable", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/Integer;>;", $PRIVATE, $field(CoreDocumentImpl, nodeTable)},
	{"xml11Version", "Z", nullptr, $PRIVATE, $field(CoreDocumentImpl, xml11Version)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CoreDocumentImpl, serialPersistentFields)},
	{}
};

$MethodInfo _CoreDocumentImpl_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(CoreDocumentImpl, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(CoreDocumentImpl, init$, void, bool)},
	{"<init>", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC, $method(CoreDocumentImpl, init$, void, $DocumentType*)},
	{"<init>", "(Lorg/w3c/dom/DocumentType;Z)V", nullptr, $PUBLIC, $method(CoreDocumentImpl, init$, void, $DocumentType*, bool)},
	{"abort", "()V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, abort, void)},
	{"addEventListener", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, addEventListener, void, $NodeImpl*, $String*, $EventListener*, bool)},
	{"adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, adoptNode, $Node*, $Node*)},
	{"callUserDataHandlers", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;S)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, callUserDataHandlers, void, $Node*, $Node*, int16_t)},
	{"callUserDataHandlers", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;SLjava/util/Map;)V", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;SLjava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;)V", 0, $virtualMethod(CoreDocumentImpl, callUserDataHandlers, void, $Node*, $Node*, int16_t, $Map*)},
	{"changed", "()V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, changed, void)},
	{"changes", "()I", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, changes, int32_t)},
	{"checkDOMNSErr", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED | $FINAL, $method(CoreDocumentImpl, checkDOMNSErr, void, $String*, $String*)},
	{"checkNamespaceWF", "(Ljava/lang/String;II)V", nullptr, $PROTECTED | $FINAL, $method(CoreDocumentImpl, checkNamespaceWF, void, $String*, int32_t, int32_t)},
	{"checkQName", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED | $FINAL, $method(CoreDocumentImpl, checkQName, void, $String*, $String*)},
	{"clearIdentifiers", "()V", nullptr, $PROTECTED | $FINAL, $method(CoreDocumentImpl, clearIdentifiers, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, cloneNode, $Node*, bool)},
	{"cloneNode", "(Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;Z)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, cloneNode, void, CoreDocumentImpl*, bool)},
	{"copyEventListeners", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, copyEventListeners, void, $NodeImpl*, $NodeImpl*)},
	{"createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createAttribute, $Attr*, $String*), "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createAttributeNS, $Attr*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createAttributeNS, $Attr*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createCDATASection, $CDATASection*, $String*), "org.w3c.dom.DOMException"},
	{"createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createComment, $Comment*, $String*)},
	{"createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createDocumentFragment, $DocumentFragment*)},
	{"createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createDocumentType, $DocumentType*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createElement, $Element*, $String*), "org.w3c.dom.DOMException"},
	{"createElementDefinition", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/dom/ElementDefinitionImpl;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createElementDefinition, $ElementDefinitionImpl*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createElementNS, $Element*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createElementNS, $Element*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createEntity", "(Ljava/lang/String;)Lorg/w3c/dom/Entity;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createEntity, $Entity*, $String*), "org.w3c.dom.DOMException"},
	{"createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createEntityReference, $EntityReference*, $String*), "org.w3c.dom.DOMException"},
	{"createNotation", "(Ljava/lang/String;)Lorg/w3c/dom/Notation;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createNotation, $Notation*, $String*), "org.w3c.dom.DOMException"},
	{"createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createProcessingInstruction, $ProcessingInstruction*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, createTextNode, $Text*, $String*)},
	{"deletedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;II)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, deletedText, void, $NodeImpl*, int32_t, int32_t)},
	{"dispatchEvent", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lorg/w3c/dom/events/Event;)Z", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, dispatchEvent, bool, $NodeImpl*, $Event*)},
	{"freeNodeListCache", "(Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, freeNodeListCache, void, $NodeListCache*)},
	{"getAsync", "()Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getAsync, bool)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getBaseURI, $String*)},
	{"getDoctype", "()Lorg/w3c/dom/DocumentType;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getDoctype, $DocumentType*)},
	{"getDocumentElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getDocumentElement, $Element*)},
	{"getDocumentURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getDocumentURI, $String*)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getDomConfig, $DOMConfiguration*)},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getElementById, $Element*, $String*)},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getElementsByTagName, $NodeList*, $String*)},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getElementsByTagNameNS, $NodeList*, $String*, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, getEncoding, $String*), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_getEncoding47},
	{"getErrorChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getErrorChecking, bool)},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getFeature, $Object*, $String*, $String*)},
	{"getIdentifier", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getIdentifier, $Element*, $String*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getImplementation, $DOMImplementation*)},
	{"getInputEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getInputEncoding, $String*)},
	{"getMutationEvents", "()Z", nullptr, 0, $virtualMethod(CoreDocumentImpl, getMutationEvents, bool)},
	{"getNodeListCache", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;)Lcom/sun/org/apache/xerces/internal/dom/NodeListCache;", nullptr, 0, $virtualMethod(CoreDocumentImpl, getNodeListCache, $NodeListCache*, $ParentNode*)},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getNodeName, $String*)},
	{"getNodeNumber", "()I", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, getNodeNumber, int32_t)},
	{"getNodeNumber", "(Lorg/w3c/dom/Node;)I", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, getNodeNumber, int32_t, $Node*)},
	{"getNodeType", "()S", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getNodeType, int16_t)},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $FINAL, $virtualMethod(CoreDocumentImpl, getOwnerDocument, $Document*)},
	{"getStandalone", "()Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, getStandalone, bool), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_getStandalone60},
	{"getStrictErrorChecking", "()Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getStrictErrorChecking, bool)},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getTextContent, $String*), "org.w3c.dom.DOMException"},
	{"getUserData", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getUserData, $Object*, $Node*, $String*)},
	{"getUserData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, getUserData, $Object*, $NodeImpl*)},
	{"getUserDataRecord", "(Lorg/w3c/dom/Node;)Ljava/util/Map;", "(Lorg/w3c/dom/Node;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;", $PROTECTED, $virtualMethod(CoreDocumentImpl, getUserDataRecord, $Map*, $Node*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, getVersion, $String*), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_getVersion66},
	{"getXmlEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getXmlEncoding, $String*)},
	{"getXmlStandalone", "()Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getXmlStandalone, bool)},
	{"getXmlVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, getXmlVersion, $String*)},
	{"importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, importNode, $Node*, $Node*, bool), "org.w3c.dom.DOMException"},
	{"importNode", "(Lorg/w3c/dom/Node;ZZLjava/util/Map;)Lorg/w3c/dom/Node;", "(Lorg/w3c/dom/Node;ZZLjava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;)Lorg/w3c/dom/Node;", $PRIVATE, $method(CoreDocumentImpl, importNode, $Node*, $Node*, bool, bool, $Map*), "org.w3c.dom.DOMException"},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, insertBefore, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"insertedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, insertedNode, void, $NodeImpl*, $NodeImpl*, bool)},
	{"insertedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;II)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, insertedText, void, $NodeImpl*, int32_t, int32_t)},
	{"insertingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, insertingNode, void, $NodeImpl*, bool)},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isKidOK", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, isKidOK, bool, $Node*, $Node*)},
	{"isNormalizeDocRequired", "()Z", nullptr, 0, $virtualMethod(CoreDocumentImpl, isNormalizeDocRequired, bool)},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isValidQName", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(CoreDocumentImpl, isValidQName, bool, $String*, $String*, bool)},
	{"isXML11Version", "()Z", nullptr, 0, $virtualMethod(CoreDocumentImpl, isXML11Version, bool)},
	{"isXMLName", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(CoreDocumentImpl, isXMLName, bool, $String*, bool)},
	{"isXMLVersionChanged", "()Z", nullptr, 0, $virtualMethod(CoreDocumentImpl, isXMLVersionChanged, bool)},
	{"lambda$callUserDataHandlers$0", "(Ljava/util/Map;SLorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CoreDocumentImpl, lambda$callUserDataHandlers$0, void, $Map*, int16_t, $Node*, $Node*, $String*)},
	{"load", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, load, bool, $String*)},
	{"loadXML", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, loadXML, bool, $String*)},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"modifiedAttrValue", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, modifiedAttrValue, void, $AttrImpl*, $String*)},
	{"modifiedCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, modifiedCharacterData, void, $NodeImpl*, $String*, $String*, bool)},
	{"modifyingCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, modifyingCharacterData, void, $NodeImpl*, bool)},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"normalizeDocument", "()V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, normalizeDocument, void)},
	{"putIdentifier", "(Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, putIdentifier, void, $String*, $Element*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(CoreDocumentImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, removeChild, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"removeEventListener", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, removeEventListener, void, $NodeImpl*, $String*, $EventListener*, bool)},
	{"removeIdentifier", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, removeIdentifier, void, $String*)},
	{"removeUserDataTable", "(Lorg/w3c/dom/Node;)Ljava/util/Map;", "(Lorg/w3c/dom/Node;)Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;", 0, $virtualMethod(CoreDocumentImpl, removeUserDataTable, $Map*, $Node*)},
	{"removedAttrNode", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, removedAttrNode, void, $AttrImpl*, $NodeImpl*, $String*)},
	{"removedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, removedNode, void, $NodeImpl*, bool)},
	{"removingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, removingNode, void, $NodeImpl*, $NodeImpl*, bool)},
	{"renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, renameNode, $Node*, $Node*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"renamedAttrNode", "(Lorg/w3c/dom/Attr;Lorg/w3c/dom/Attr;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, renamedAttrNode, void, $Attr*, $Attr*)},
	{"renamedElement", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, renamedElement, void, $Element*, $Element*)},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, replaceChild, $Node*, $Node*, $Node*), "org.w3c.dom.DOMException"},
	{"replacedCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, replacedCharacterData, void, $NodeImpl*, $String*, $String*)},
	{"replacedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, replacedNode, void, $NodeImpl*)},
	{"replacedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, replacedText, void, $NodeImpl*)},
	{"replacingData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, replacingData, void, $NodeImpl*)},
	{"replacingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, replacingNode, void, $NodeImpl*)},
	{"saveXML", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, saveXML, $String*, $Node*), "org.w3c.dom.DOMException"},
	{"setAsync", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setAsync, void, bool)},
	{"setAttrNode", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, setAttrNode, void, $AttrImpl*, $AttrImpl*)},
	{"setDocumentURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setDocumentURI, void, $String*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, setEncoding, void, $String*), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_setEncoding111},
	{"setErrorChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setErrorChecking, void, bool)},
	{"setInputEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setInputEncoding, void, $String*)},
	{"setMutationEvents", "(Z)V", nullptr, 0, $virtualMethod(CoreDocumentImpl, setMutationEvents, void, bool)},
	{"*setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setStandalone", "(Z)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, setStandalone, void, bool), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_setStandalone115},
	{"setStrictErrorChecking", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setStrictErrorChecking, void, bool)},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setTextContent, void, $String*), "org.w3c.dom.DOMException"},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setUserData", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setUserData, $Object*, $Node*, $String*, Object$*, $UserDataHandler*)},
	{"setUserData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, setUserData, void, $NodeImpl*, Object$*)},
	{"setUserDataTable", "(Lorg/w3c/dom/Node;Ljava/util/Map;)V", "(Lorg/w3c/dom/Node;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord;>;)V", 0, $virtualMethod(CoreDocumentImpl, setUserDataTable, void, $Node*, $Map*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(CoreDocumentImpl, setVersion, void, $String*), nullptr, nullptr, _CoreDocumentImpl_MethodAnnotations_setVersion121},
	{"setXmlEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setXmlEncoding, void, $String*)},
	{"setXmlStandalone", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setXmlStandalone, void, bool), "org.w3c.dom.DOMException"},
	{"setXmlVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CoreDocumentImpl, setXmlVersion, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"undeferChildren", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED, $virtualMethod(CoreDocumentImpl, undeferChildren, void, $Node*)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(CoreDocumentImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _CoreDocumentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl",
	"com.sun.org.apache.xerces.internal.dom.ParentNode",
	"org.w3c.dom.Document",
	_CoreDocumentImpl_FieldInfo_,
	_CoreDocumentImpl_MethodInfo_
};

$Object* allocate$CoreDocumentImpl($Class* clazz) {
	return $of($alloc(CoreDocumentImpl));
}

bool CoreDocumentImpl::hasChildNodes() {
	 return this->$ParentNode::hasChildNodes();
}

$NodeList* CoreDocumentImpl::getChildNodes() {
	 return this->$ParentNode::getChildNodes();
}

$Node* CoreDocumentImpl::getFirstChild() {
	 return this->$ParentNode::getFirstChild();
}

$Node* CoreDocumentImpl::getLastChild() {
	 return this->$ParentNode::getLastChild();
}

void CoreDocumentImpl::normalize() {
	this->$ParentNode::normalize();
}

bool CoreDocumentImpl::isEqualNode($Node* arg) {
	 return this->$ParentNode::isEqualNode(arg);
}

$Node* CoreDocumentImpl::getParentNode() {
	 return this->$ParentNode::getParentNode();
}

$Node* CoreDocumentImpl::getNextSibling() {
	 return this->$ParentNode::getNextSibling();
}

$Node* CoreDocumentImpl::getPreviousSibling() {
	 return this->$ParentNode::getPreviousSibling();
}

$String* CoreDocumentImpl::getNodeValue() {
	 return this->$ParentNode::getNodeValue();
}

void CoreDocumentImpl::setNodeValue($String* x) {
	this->$ParentNode::setNodeValue(x);
}

$Node* CoreDocumentImpl::appendChild($Node* newChild) {
	 return this->$ParentNode::appendChild(newChild);
}

$NamedNodeMap* CoreDocumentImpl::getAttributes() {
	 return this->$ParentNode::getAttributes();
}

bool CoreDocumentImpl::hasAttributes() {
	 return this->$ParentNode::hasAttributes();
}

bool CoreDocumentImpl::isSupported($String* feature, $String* version) {
	 return this->$ParentNode::isSupported(feature, version);
}

$String* CoreDocumentImpl::getNamespaceURI() {
	 return this->$ParentNode::getNamespaceURI();
}

$String* CoreDocumentImpl::getPrefix() {
	 return this->$ParentNode::getPrefix();
}

void CoreDocumentImpl::setPrefix($String* prefix) {
	this->$ParentNode::setPrefix(prefix);
}

$String* CoreDocumentImpl::getLocalName() {
	 return this->$ParentNode::getLocalName();
}

int16_t CoreDocumentImpl::compareDocumentPosition($Node* other) {
	 return this->$ParentNode::compareDocumentPosition(other);
}

bool CoreDocumentImpl::isSameNode($Node* other) {
	 return this->$ParentNode::isSameNode(other);
}

bool CoreDocumentImpl::isDefaultNamespace($String* namespaceURI) {
	 return this->$ParentNode::isDefaultNamespace(namespaceURI);
}

$String* CoreDocumentImpl::lookupPrefix($String* namespaceURI) {
	 return this->$ParentNode::lookupPrefix(namespaceURI);
}

$String* CoreDocumentImpl::lookupNamespaceURI($String* specifiedPrefix) {
	 return this->$ParentNode::lookupNamespaceURI(specifiedPrefix);
}

$Object* CoreDocumentImpl::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$ParentNode::setUserData(key, data, handler);
}

$Object* CoreDocumentImpl::getUserData($String* key) {
	 return this->$ParentNode::getUserData(key);
}

$String* CoreDocumentImpl::toString() {
	 return this->$ParentNode::toString();
}

int32_t CoreDocumentImpl::hashCode() {
	 return this->$ParentNode::hashCode();
}

bool CoreDocumentImpl::equals(Object$* arg0) {
	 return this->$ParentNode::equals(arg0);
}

void CoreDocumentImpl::finalize() {
	this->$ParentNode::finalize();
}

$ints* CoreDocumentImpl::kidOK = nullptr;
$ObjectStreamFieldArray* CoreDocumentImpl::serialPersistentFields = nullptr;

void CoreDocumentImpl::init$() {
	CoreDocumentImpl::init$(false);
}

void CoreDocumentImpl::init$(bool grammarAccess) {
	$useLocalCurrentObjectStackCache();
	$ParentNode::init$(nullptr);
	$set(this, domNormalizer, nullptr);
	$set(this, fConfiguration, nullptr);
	$set(this, fXPathEvaluator, nullptr);
	this->changes$ = 0;
	this->errorChecking = true;
	this->ancestorChecking = true;
	this->xmlVersionChanged = false;
	this->documentNumber = 0;
	this->nodeCounter = 0;
	this->xml11Version = false;
	$set(this, ownerDocument$, this);
	this->allowGrammarAccess = grammarAccess;
	$init($Constants);
	$var($String, systemProp, $SecuritySupport::getSystemProperty($$str({$Constants::SUN_DOM_PROPERTY_PREFIX, $Constants::SUN_DOM_ANCESTOR_CHECCK})));
	if (systemProp != nullptr) {
		if (systemProp->equalsIgnoreCase("false"_s)) {
			this->ancestorChecking = false;
		}
	}
}

void CoreDocumentImpl::init$($DocumentType* doctype) {
	CoreDocumentImpl::init$(doctype, false);
}

void CoreDocumentImpl::init$($DocumentType* doctype, bool grammarAccess) {
	$useLocalCurrentObjectStackCache();
	CoreDocumentImpl::init$(grammarAccess);
	if (doctype != nullptr) {
		$var($DocumentTypeImpl, doctypeImpl, nullptr);
		try {
			$assign(doctypeImpl, $cast($DocumentTypeImpl, doctype));
		} catch ($ClassCastException& e) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
		}
		$set($nc(doctypeImpl), ownerDocument$, this);
		appendChild(doctype);
	}
}

$Document* CoreDocumentImpl::getOwnerDocument() {
	return nullptr;
}

int16_t CoreDocumentImpl::getNodeType() {
	return $Node::DOCUMENT_NODE;
}

$String* CoreDocumentImpl::getNodeName() {
	return "#document"_s;
}

$Node* CoreDocumentImpl::cloneNode(bool deep) {
	$var(CoreDocumentImpl, newdoc, $new(CoreDocumentImpl));
	callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(this)))), static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newdoc)))), $UserDataHandler::NODE_CLONED);
	cloneNode(newdoc, deep);
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newdoc))));
}

void CoreDocumentImpl::cloneNode(CoreDocumentImpl* newdoc, bool deep) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	if (deep) {
		$var($Map, reversedIdentifiers, nullptr);
		if (this->identifiers != nullptr) {
			$assign(reversedIdentifiers, $new($HashMap, $nc(this->identifiers)->size()));
			{
				$var($Iterator, i$, $nc($($nc(this->identifiers)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, elementId, $cast($String, i$->next()));
					{
						reversedIdentifiers->put($cast($Node, $($nc(this->identifiers)->get(elementId))), elementId);
					}
				}
			}
		}
		{
			$var($ChildNode, kid, this->firstChild);
			for (; kid != nullptr; $assign(kid, $nc(kid)->nextSibling)) {
				$nc(newdoc)->appendChild($(newdoc->importNode(kid, true, true, reversedIdentifiers)));
			}
		}
	}
	$nc(newdoc)->allowGrammarAccess = this->allowGrammarAccess;
	newdoc->errorChecking = this->errorChecking;
}

$Node* CoreDocumentImpl::insertBefore($Node* newChild, $Node* refChild) {
	int32_t type = $nc(newChild)->getNodeType();
	if (this->errorChecking) {
		if ((type == $Node::ELEMENT_NODE && this->docElement != nullptr) || (type == $Node::DOCUMENT_TYPE_NODE && this->docType != nullptr)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, msg);
		}
	}
	if (newChild->getOwnerDocument() == nullptr && $instanceOf($DocumentTypeImpl, newChild)) {
		$set($nc($cast($DocumentTypeImpl, newChild)), ownerDocument$, this);
	}
	$ParentNode::insertBefore(newChild, refChild);
	if (type == $Node::ELEMENT_NODE) {
		$set(this, docElement, $cast($ElementImpl, newChild));
	} else if (type == $Node::DOCUMENT_TYPE_NODE) {
		$set(this, docType, $cast($DocumentTypeImpl, newChild));
	}
	return newChild;
}

$Node* CoreDocumentImpl::removeChild($Node* oldChild) {
	$ParentNode::removeChild(oldChild);
	int32_t type = $nc(oldChild)->getNodeType();
	if (type == $Node::ELEMENT_NODE) {
		$set(this, docElement, nullptr);
	} else if (type == $Node::DOCUMENT_TYPE_NODE) {
		$set(this, docType, nullptr);
	}
	return oldChild;
}

$Node* CoreDocumentImpl::replaceChild($Node* newChild, $Node* oldChild) {
	if ($nc(newChild)->getOwnerDocument() == nullptr && $instanceOf($DocumentTypeImpl, newChild)) {
		$set($nc($cast($DocumentTypeImpl, newChild)), ownerDocument$, this);
	}
	bool var$0 = this->errorChecking;
	if (var$0) {
		bool var$2 = this->docType != nullptr && $nc(oldChild)->getNodeType() != $Node::DOCUMENT_TYPE_NODE;
		bool var$1 = (var$2 && $nc(newChild)->getNodeType() == $Node::DOCUMENT_TYPE_NODE);
		if (!var$1) {
			bool var$3 = this->docElement != nullptr && $nc(oldChild)->getNodeType() != $Node::ELEMENT_NODE;
			var$1 = (var$3 && $nc(newChild)->getNodeType() == $Node::ELEMENT_NODE);
		}
		var$0 = (var$1);
	}
	if (var$0) {
		$init($DOMMessageFormatter);
		$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "HIERARCHY_REQUEST_ERR"_s, nullptr)));
	}
	$ParentNode::replaceChild(newChild, oldChild);
	int32_t type = $nc(oldChild)->getNodeType();
	if (type == $Node::ELEMENT_NODE) {
		$set(this, docElement, $cast($ElementImpl, newChild));
	} else if (type == $Node::DOCUMENT_TYPE_NODE) {
		$set(this, docType, $cast($DocumentTypeImpl, newChild));
	}
	return oldChild;
}

$String* CoreDocumentImpl::getTextContent() {
	return nullptr;
}

void CoreDocumentImpl::setTextContent($String* textContent) {
}

$Object* CoreDocumentImpl::getFeature($String* feature, $String* version) {
	return $of($ParentNode::getFeature(feature, version));
}

$Attr* CoreDocumentImpl::createAttribute($String* name) {
	if (this->errorChecking && !isXMLName(name, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($AttrImpl, this, name);
}

$CDATASection* CoreDocumentImpl::createCDATASection($String* data) {
	return $new($CDATASectionImpl, this, data);
}

$Comment* CoreDocumentImpl::createComment($String* data) {
	return $new($CommentImpl, this, data);
}

$DocumentFragment* CoreDocumentImpl::createDocumentFragment() {
	return $new($DocumentFragmentImpl, this);
}

$Element* CoreDocumentImpl::createElement($String* tagName) {
	if (this->errorChecking && !isXMLName(tagName, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($ElementImpl, this, tagName);
}

$EntityReference* CoreDocumentImpl::createEntityReference($String* name) {
	if (this->errorChecking && !isXMLName(name, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($EntityReferenceImpl, this, name);
}

$ProcessingInstruction* CoreDocumentImpl::createProcessingInstruction($String* target, $String* data) {
	if (this->errorChecking && !isXMLName(target, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($ProcessingInstructionImpl, this, target, data);
}

$Text* CoreDocumentImpl::createTextNode($String* data) {
	return $new($TextImpl, this, data);
}

$DocumentType* CoreDocumentImpl::getDoctype() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->docType;
}

$Element* CoreDocumentImpl::getDocumentElement() {
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	return this->docElement;
}

$NodeList* CoreDocumentImpl::getElementsByTagName($String* tagname) {
	return $new($DeepNodeListImpl, this, tagname);
}

$DOMImplementation* CoreDocumentImpl::getImplementation() {
	return $CoreDOMImplementationImpl::getDOMImplementation();
}

void CoreDocumentImpl::setErrorChecking(bool check) {
	this->errorChecking = check;
}

void CoreDocumentImpl::setStrictErrorChecking(bool check) {
	this->errorChecking = check;
}

bool CoreDocumentImpl::getErrorChecking() {
	return this->errorChecking;
}

bool CoreDocumentImpl::getStrictErrorChecking() {
	return this->errorChecking;
}

$String* CoreDocumentImpl::getInputEncoding() {
	return this->actualEncoding;
}

void CoreDocumentImpl::setInputEncoding($String* value) {
	$set(this, actualEncoding, value);
}

void CoreDocumentImpl::setXmlEncoding($String* value) {
	$set(this, encoding, value);
}

void CoreDocumentImpl::setEncoding($String* value) {
	setXmlEncoding(value);
}

$String* CoreDocumentImpl::getXmlEncoding() {
	return this->encoding;
}

$String* CoreDocumentImpl::getEncoding() {
	return getXmlEncoding();
}

void CoreDocumentImpl::setXmlVersion($String* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		return;
	}
	bool var$0 = $nc(value)->equals("1.0"_s);
	if (var$0 || $nc(value)->equals("1.1"_s)) {
		if (!$nc($(getXmlVersion()))->equals(value)) {
			this->xmlVersionChanged = true;
			isNormalized(false);
			$set(this, version, value);
		}
	} else {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	if ($nc(($(getXmlVersion())))->equals("1.1"_s)) {
		this->xml11Version = true;
	} else {
		this->xml11Version = false;
	}
}

void CoreDocumentImpl::setVersion($String* value) {
	setXmlVersion(value);
}

$String* CoreDocumentImpl::getXmlVersion() {
	return (this->version == nullptr) ? "1.0"_s : this->version;
}

$String* CoreDocumentImpl::getVersion() {
	return getXmlVersion();
}

void CoreDocumentImpl::setXmlStandalone(bool value) {
	this->standalone = value;
}

void CoreDocumentImpl::setStandalone(bool value) {
	setXmlStandalone(value);
}

bool CoreDocumentImpl::getXmlStandalone() {
	return this->standalone;
}

bool CoreDocumentImpl::getStandalone() {
	return getXmlStandalone();
}

$String* CoreDocumentImpl::getDocumentURI() {
	return this->fDocumentURI;
}

$Node* CoreDocumentImpl::renameNode($Node* n, $String* namespaceURI, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->errorChecking && !$equals($nc(n)->getOwnerDocument(), this) && !$equals(n, this)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
	}
	switch ($nc(n)->getNodeType()) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($ElementImpl, el, $cast($ElementImpl, n));
				if ($instanceOf($ElementNSImpl, el)) {
					$nc(($cast($ElementNSImpl, el)))->rename(namespaceURI, name);
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el)))), nullptr, $UserDataHandler::NODE_RENAMED);
				} else if (namespaceURI == nullptr) {
					if (this->errorChecking) {
						int32_t colon1 = $nc(name)->indexOf((int32_t)u':');
						if (colon1 != -1) {
							$init($DOMMessageFormatter);
							$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
							$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
						}
						if (!isXMLName(name, this->xml11Version)) {
							$init($DOMMessageFormatter);
							$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
							$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
						}
					}
					el->rename(name);
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el)))), nullptr, $UserDataHandler::NODE_RENAMED);
				} else {
					$var($ElementNSImpl, nel, $new($ElementNSImpl, this, namespaceURI, name));
					copyEventListeners(el, nel);
					$var($Map, data, removeUserDataTable(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el))))));
					$var($Node, parent, el->getParentNode());
					$var($Node, nextSib, el->getNextSibling());
					if (parent != nullptr) {
						parent->removeChild(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el)))));
					}
					$var($Node, child, el->getFirstChild());
					while (child != nullptr) {
						el->removeChild(child);
						nel->appendChild(child);
						$assign(child, el->getFirstChild());
					}
					nel->moveSpecifiedAttributes(el);
					setUserDataTable(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$ElementImpl*>(nel))))), data);
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el)))), static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$ElementImpl*>(nel))))), $UserDataHandler::NODE_RENAMED);
					if (parent != nullptr) {
						parent->insertBefore(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$ElementImpl*>(nel))))), nextSib);
					}
					$assign(el, nel);
				}
				renamedElement($cast($Element, n), el);
				return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(el))));
			}
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				$var($AttrImpl, at, $cast($AttrImpl, n));
				$var($Element, el, at->getOwnerElement());
				if (el != nullptr) {
					el->removeAttributeNode(at);
				}
				if ($instanceOf($AttrNSImpl, n)) {
					$nc(($cast($AttrNSImpl, at)))->rename(namespaceURI, name);
					if (el != nullptr) {
						el->setAttributeNodeNS(at);
					}
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(at)), nullptr, $UserDataHandler::NODE_RENAMED);
				} else if (namespaceURI == nullptr) {
					at->rename(name);
					if (el != nullptr) {
						el->setAttributeNode(at);
					}
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(at)), nullptr, $UserDataHandler::NODE_RENAMED);
				} else {
					$var($AttrNSImpl, nat, $new($AttrNSImpl, this, namespaceURI, name));
					copyEventListeners(at, nat);
					$var($Map, data, removeUserDataTable(static_cast<$Node*>(static_cast<$NodeImpl*>(at))));
					$var($Node, child, at->getFirstChild());
					while (child != nullptr) {
						at->removeChild(child);
						nat->appendChild(child);
						$assign(child, at->getFirstChild());
					}
					setUserDataTable(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$AttrImpl*>(nat))), data);
					callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(at)), static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$AttrImpl*>(nat))), $UserDataHandler::NODE_RENAMED);
					if (el != nullptr) {
						el->setAttributeNode(nat);
					}
					$assign(at, nat);
				}
				renamedAttrNode($cast($Attr, n), at);
				return static_cast<$Node*>(static_cast<$NodeImpl*>(at));
			}
		}
	default:
		{
			{
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
			}
		}
	}
}

void CoreDocumentImpl::normalizeDocument() {
	bool var$0 = isNormalized();
	if (var$0 && !isNormalizeDocRequired()) {
		return;
	}
	if (needsSyncChildren()) {
		synchronizeChildren();
	}
	if (this->domNormalizer == nullptr) {
		$set(this, domNormalizer, $new($DOMNormalizer));
	}
	if (this->fConfiguration == nullptr) {
		$set(this, fConfiguration, $new($DOMConfigurationImpl));
	} else {
		$nc(this->fConfiguration)->reset();
	}
	$nc(this->domNormalizer)->normalizeDocument(this, this->fConfiguration);
	isNormalized(true);
	this->xmlVersionChanged = false;
}

$DOMConfiguration* CoreDocumentImpl::getDomConfig() {
	if (this->fConfiguration == nullptr) {
		$set(this, fConfiguration, $new($DOMConfigurationImpl));
	}
	return this->fConfiguration;
}

$String* CoreDocumentImpl::getBaseURI() {
	if (this->fDocumentURI != nullptr && $nc(this->fDocumentURI)->length() != 0) {
		try {
			return $$new($URI, this->fDocumentURI)->toString();
		} catch ($URI$MalformedURIException& e) {
			return nullptr;
		}
	}
	return this->fDocumentURI;
}

void CoreDocumentImpl::setDocumentURI($String* documentURI) {
	$set(this, fDocumentURI, documentURI);
}

bool CoreDocumentImpl::getAsync() {
	return false;
}

void CoreDocumentImpl::setAsync(bool async) {
	if (async) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
}

void CoreDocumentImpl::abort() {
}

bool CoreDocumentImpl::load($String* uri) {
	return false;
}

bool CoreDocumentImpl::loadXML($String* source) {
	return false;
}

$String* CoreDocumentImpl::saveXML($Node* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	if (this->errorChecking && node != nullptr && !$equals(this, node->getOwnerDocument())) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "WRONG_DOCUMENT_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, msg);
	}
	$var($DOMImplementationLS, domImplLS, $cast($DOMImplementationLS, $DOMImplementationImpl::getDOMImplementation()));
	$var($LSSerializer, xmlWriter, $nc(domImplLS)->createLSSerializer());
	if (node == nullptr) {
		$assign(node, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(this)))));
	}
	return $nc(xmlWriter)->writeToString(node);
}

void CoreDocumentImpl::setMutationEvents(bool set) {
}

bool CoreDocumentImpl::getMutationEvents() {
	return false;
}

$DocumentType* CoreDocumentImpl::createDocumentType($String* qualifiedName, $String* publicID, $String* systemID) {
	return $new($DocumentTypeImpl, this, qualifiedName, publicID, systemID);
}

$Entity* CoreDocumentImpl::createEntity($String* name) {
	if (this->errorChecking && !isXMLName(name, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($EntityImpl, this, name);
}

$Notation* CoreDocumentImpl::createNotation($String* name) {
	if (this->errorChecking && !isXMLName(name, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($NotationImpl, this, name);
}

$ElementDefinitionImpl* CoreDocumentImpl::createElementDefinition($String* name) {
	if (this->errorChecking && !isXMLName(name, this->xml11Version)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
	return $new($ElementDefinitionImpl, this, name);
}

int32_t CoreDocumentImpl::getNodeNumber() {
	if (this->documentNumber == 0) {
		$var($CoreDOMImplementationImpl, cd, $cast($CoreDOMImplementationImpl, $CoreDOMImplementationImpl::getDOMImplementation()));
		this->documentNumber = $nc(cd)->assignDocumentNumber();
	}
	return this->documentNumber;
}

int32_t CoreDocumentImpl::getNodeNumber($Node* node) {
	$useLocalCurrentObjectStackCache();
	int32_t num = 0;
	if (this->nodeTable == nullptr) {
		$set(this, nodeTable, $new($HashMap));
		num = --this->nodeCounter;
		$nc(this->nodeTable)->put(node, $($Integer::valueOf(num)));
	} else {
		$var($Integer, n, $cast($Integer, $nc(this->nodeTable)->get(node)));
		if (n == nullptr) {
			num = --this->nodeCounter;
			$nc(this->nodeTable)->put(node, $($Integer::valueOf(num)));
		} else {
			num = $nc(n)->intValue();
		}
	}
	return num;
}

$Node* CoreDocumentImpl::importNode($Node* source, bool deep) {
	return importNode(source, deep, false, nullptr);
}

$Node* CoreDocumentImpl::importNode($Node* source, bool deep, bool cloningDoc, $Map* reversedIdentifiers) {
	$useLocalCurrentObjectStackCache();
	$var($Node, newnode, nullptr);
	$var($Map, userData, nullptr);
	if ($instanceOf($NodeImpl, source)) {
		$assign(userData, $nc(($cast($NodeImpl, source)))->getUserDataRecord());
	}
	int32_t type = $nc(source)->getNodeType();
	switch (type) {
	case $Node::ELEMENT_NODE:
		{
			{
				$var($Element, newElement, nullptr);
				bool domLevel20 = $nc($($nc($(source->getOwnerDocument()))->getImplementation()))->hasFeature("XML"_s, "2.0"_s);
				if (domLevel20 == false || source->getLocalName() == nullptr) {
					$assign(newElement, createElement($(source->getNodeName())));
				} else {
					$var($String, var$0, source->getNamespaceURI());
					$assign(newElement, createElementNS(var$0, $(source->getNodeName())));
				}
				$var($NamedNodeMap, sourceAttrs, source->getAttributes());
				if (sourceAttrs != nullptr) {
					int32_t length = sourceAttrs->getLength();
					for (int32_t index = 0; index < length; ++index) {
						$var($Attr, attr, $cast($Attr, sourceAttrs->item(index)));
						if ($nc(attr)->getSpecified() || cloningDoc) {
							$var($Attr, newAttr, $cast($Attr, importNode(attr, true, cloningDoc, reversedIdentifiers)));
							if (domLevel20 == false || $nc(attr)->getLocalName() == nullptr) {
								$nc(newElement)->setAttributeNode(newAttr);
							} else {
								$nc(newElement)->setAttributeNodeNS(newAttr);
							}
						}
					}
				}
				if (reversedIdentifiers != nullptr) {
					$var($String, elementId, $cast($String, reversedIdentifiers->get(source)));
					if (elementId != nullptr) {
						if (this->identifiers == nullptr) {
							$set(this, identifiers, $new($HashMap));
						}
						$nc(this->identifiers)->put(elementId, newElement);
					}
				}
				$assign(newnode, newElement);
				break;
			}
		}
	case $Node::ATTRIBUTE_NODE:
		{
			{
				if ($nc($($nc($(source->getOwnerDocument()))->getImplementation()))->hasFeature("XML"_s, "2.0"_s)) {
					if (source->getLocalName() == nullptr) {
						$assign(newnode, createAttribute($(source->getNodeName())));
					} else {
						$var($String, var$1, source->getNamespaceURI());
						$assign(newnode, createAttributeNS(var$1, $(source->getNodeName())));
					}
				} else {
					$assign(newnode, createAttribute($(source->getNodeName())));
				}
				if ($instanceOf($AttrImpl, source)) {
					$var($AttrImpl, attr, $cast($AttrImpl, source));
					if (attr->hasStringValue()) {
						$var($AttrImpl, newattr, $cast($AttrImpl, newnode));
						$nc(newattr)->setValue($(attr->getValue()));
						deep = false;
					} else {
						deep = true;
					}
				} else if (source->getFirstChild() == nullptr) {
					$nc(newnode)->setNodeValue($(source->getNodeValue()));
					deep = false;
				} else {
					deep = true;
				}
				break;
			}
		}
	case $Node::TEXT_NODE:
		{
			{
				$assign(newnode, createTextNode($(source->getNodeValue())));
				break;
			}
		}
	case $Node::CDATA_SECTION_NODE:
		{
			{
				$assign(newnode, createCDATASection($(source->getNodeValue())));
				break;
			}
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			{
				$assign(newnode, createEntityReference($(source->getNodeName())));
				deep = false;
				break;
			}
		}
	case $Node::ENTITY_NODE:
		{
			{
				$var($Entity, srcentity, $cast($Entity, source));
				$var($EntityImpl, newentity, $cast($EntityImpl, createEntity($(source->getNodeName()))));
				$nc(newentity)->setPublicId($(srcentity->getPublicId()));
				newentity->setSystemId($(srcentity->getSystemId()));
				newentity->setNotationName($(srcentity->getNotationName()));
				newentity->isReadOnly(false);
				$assign(newnode, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newentity)))));
				break;
			}
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			{
				$var($String, var$2, source->getNodeName());
				$assign(newnode, createProcessingInstruction(var$2, $(source->getNodeValue())));
				break;
			}
		}
	case $Node::COMMENT_NODE:
		{
			{
				$assign(newnode, createComment($(source->getNodeValue())));
				break;
			}
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				if (!cloningDoc) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
					$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
				}
				$var($DocumentType, srcdoctype, $cast($DocumentType, source));
				$var($String, var$3, srcdoctype->getNodeName());
				$var($String, var$4, srcdoctype->getPublicId());
				$var($DocumentTypeImpl, newdoctype, $cast($DocumentTypeImpl, createDocumentType(var$3, var$4, $(srcdoctype->getSystemId()))));
				$var($NamedNodeMap, smap, srcdoctype->getEntities());
				$var($NamedNodeMap, tmap, $nc(newdoctype)->getEntities());
				if (smap != nullptr) {
					for (int32_t i = 0; i < smap->getLength(); ++i) {
						$nc(tmap)->setNamedItem($(importNode($(smap->item(i)), true, true, reversedIdentifiers)));
					}
				}
				$assign(smap, srcdoctype->getNotations());
				$assign(tmap, newdoctype->getNotations());
				if (smap != nullptr) {
					for (int32_t i = 0; i < smap->getLength(); ++i) {
						$nc(tmap)->setNamedItem($(importNode($(smap->item(i)), true, true, reversedIdentifiers)));
					}
				}
				$assign(newnode, static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(newdoctype)))));
				break;
			}
		}
	case $Node::DOCUMENT_FRAGMENT_NODE:
		{
			{
				$assign(newnode, createDocumentFragment());
				break;
			}
		}
	case $Node::NOTATION_NODE:
		{
			{
				$var($Notation, srcnotation, $cast($Notation, source));
				$var($NotationImpl, newnotation, $cast($NotationImpl, createNotation($(source->getNodeName()))));
				$nc(newnotation)->setPublicId($(srcnotation->getPublicId()));
				newnotation->setSystemId($(srcnotation->getSystemId()));
				$assign(newnode, static_cast<$Node*>(static_cast<$NodeImpl*>(newnotation)));
				break;
			}
		}
	case $Node::DOCUMENT_NODE:
		{}
	default:
		{
			{
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
			}
		}
	}
	if (userData != nullptr) {
		callUserDataHandlers(source, newnode, $UserDataHandler::NODE_IMPORTED, userData);
	}
	if (deep) {
		{
			$var($Node, srckid, source->getFirstChild());
			for (; srckid != nullptr; $assign(srckid, $nc(srckid)->getNextSibling())) {
				$nc(newnode)->appendChild($(importNode(srckid, true, cloningDoc, reversedIdentifiers)));
			}
		}
	}
	if ($nc(newnode)->getNodeType() == $Node::ENTITY_NODE) {
		$nc(($cast($NodeImpl, newnode)))->setReadOnly(true, true);
	}
	return newnode;
}

$Node* CoreDocumentImpl::adoptNode($Node* source) {
	$useLocalCurrentObjectStackCache();
	$var($NodeImpl, node, nullptr);
	$var($Map, userData, nullptr);
	try {
		$assign(node, $cast($NodeImpl, source));
	} catch ($ClassCastException& e) {
		return nullptr;
	}
	if (source == nullptr) {
		return nullptr;
	} else if ($nc(source)->getOwnerDocument() != nullptr) {
		$var($DOMImplementation, thisImpl, this->getImplementation());
		$var($DOMImplementation, otherImpl, $nc($(source->getOwnerDocument()))->getImplementation());
		if (thisImpl != otherImpl) {
			if ($instanceOf($DOMImplementationImpl, thisImpl) && $instanceOf($DeferredDOMImplementationImpl, otherImpl)) {
				undeferChildren(node);
			} else if ($instanceOf($DeferredDOMImplementationImpl, thisImpl) && $instanceOf($DOMImplementationImpl, otherImpl)) {
			} else {
				return nullptr;
			}
		} else if ($instanceOf($DeferredDOMImplementationImpl, otherImpl)) {
			undeferChildren(node);
		}
	}
	switch ($nc(node)->getNodeType()) {
	case $Node::ATTRIBUTE_NODE:
		{
			{
				$var($AttrImpl, attr, $cast($AttrImpl, node));
				if (attr->getOwnerElement() != nullptr) {
					$nc($(attr->getOwnerElement()))->removeAttributeNode(attr);
				}
				attr->isSpecified(true);
				$assign(userData, node->getUserDataRecord());
				attr->setOwnerDocument(this);
				if (userData != nullptr) {
					setUserDataTable(node, userData);
				}
				break;
			}
		}
	case $Node::ENTITY_NODE:
		{}
	case $Node::NOTATION_NODE:
		{
			{
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NO_MODIFICATION_ALLOWED_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, msg);
			}
		}
	case $Node::DOCUMENT_NODE:
		{}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
			}
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			{
				$assign(userData, node->getUserDataRecord());
				$var($Node, parent, node->getParentNode());
				if (parent != nullptr) {
					parent->removeChild(source);
				}
				$var($Node, child, nullptr);
				while (($assign(child, node->getFirstChild())) != nullptr) {
					node->removeChild(child);
				}
				node->setOwnerDocument(this);
				if (userData != nullptr) {
					setUserDataTable(node, userData);
				}
				if (this->docType == nullptr) {
					break;
				}
				$var($NamedNodeMap, entities, $nc(this->docType)->getEntities());
				$var($Node, entityNode, $nc(entities)->getNamedItem($(node->getNodeName())));
				if (entityNode == nullptr) {
					break;
				}
				for ($assign(child, $nc(entityNode)->getFirstChild()); child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
					$var($Node, childClone, child->cloneNode(true));
					node->appendChild(childClone);
				}
				break;
			}
		}
	case $Node::ELEMENT_NODE:
		{
			{
				$assign(userData, node->getUserDataRecord());
				$var($Node, parent, node->getParentNode());
				if (parent != nullptr) {
					parent->removeChild(source);
				}
				node->setOwnerDocument(this);
				if (userData != nullptr) {
					setUserDataTable(node, userData);
				}
				$nc(($cast($ElementImpl, node)))->reconcileDefaultAttributes();
				break;
			}
		}
	default:
		{
			{
				$assign(userData, node->getUserDataRecord());
				$var($Node, parent, node->getParentNode());
				if (parent != nullptr) {
					parent->removeChild(source);
				}
				node->setOwnerDocument(this);
				if (userData != nullptr) {
					setUserDataTable(node, userData);
				}
			}
		}
	}
	if (userData != nullptr) {
		callUserDataHandlers(source, nullptr, $UserDataHandler::NODE_ADOPTED, userData);
	}
	return node;
}

void CoreDocumentImpl::undeferChildren($Node* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	$var($Node, top, node);
	while (nullptr != node) {
		if ($nc(($cast($NodeImpl, node)))->needsSyncData()) {
			($cast($NodeImpl, node))->synchronizeData();
		}
		$var($NamedNodeMap, attributes, node->getAttributes());
		if (attributes != nullptr) {
			int32_t length = attributes->getLength();
			for (int32_t i = 0; i < length; ++i) {
				undeferChildren($(attributes->item(i)));
			}
		}
		$var($Node, nextNode, nullptr);
		$assign(nextNode, node->getFirstChild());
		while (nullptr == nextNode) {
			if ($nc($of(top))->equals(node)) {
				break;
			}
			$assign(nextNode, $nc(node)->getNextSibling());
			if (nullptr == nextNode) {
				$assign(node, node->getParentNode());
				if ((nullptr == node) || ($nc($of(top))->equals(node))) {
					$assign(nextNode, nullptr);
					break;
				}
			}
		}
		$assign(node, nextNode);
	}
}

$Element* CoreDocumentImpl::getElementById($String* elementId) {
	return getIdentifier(elementId);
}

void CoreDocumentImpl::clearIdentifiers() {
	if (this->identifiers != nullptr) {
		$nc(this->identifiers)->clear();
	}
}

void CoreDocumentImpl::putIdentifier($String* idName, $Element* element) {
	if (element == nullptr) {
		removeIdentifier(idName);
		return;
	}
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->identifiers == nullptr) {
		$set(this, identifiers, $new($HashMap));
	}
	$nc(this->identifiers)->put(idName, element);
}

$Element* CoreDocumentImpl::getIdentifier($String* idName) {
	$useLocalCurrentObjectStackCache();
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->identifiers == nullptr) {
		return nullptr;
	}
	$var($Element, elem, $cast($Element, $nc(this->identifiers)->get(idName)));
	if (elem != nullptr) {
		$var($Node, parent, elem->getParentNode());
		while (parent != nullptr) {
			if ($equals(parent, this)) {
				return elem;
			}
			$assign(parent, parent->getParentNode());
		}
	}
	return nullptr;
}

void CoreDocumentImpl::removeIdentifier($String* idName) {
	if (needsSyncData()) {
		synchronizeData();
	}
	if (this->identifiers == nullptr) {
		return;
	}
	$nc(this->identifiers)->remove(idName);
}

$Element* CoreDocumentImpl::createElementNS($String* namespaceURI, $String* qualifiedName) {
	return $new($ElementNSImpl, this, namespaceURI, qualifiedName);
}

$Element* CoreDocumentImpl::createElementNS($String* namespaceURI, $String* qualifiedName, $String* localpart) {
	return $new($ElementNSImpl, this, namespaceURI, qualifiedName, localpart);
}

$Attr* CoreDocumentImpl::createAttributeNS($String* namespaceURI, $String* qualifiedName) {
	return $new($AttrNSImpl, this, namespaceURI, qualifiedName);
}

$Attr* CoreDocumentImpl::createAttributeNS($String* namespaceURI, $String* qualifiedName, $String* localpart) {
	return $new($AttrNSImpl, this, namespaceURI, qualifiedName, localpart);
}

$NodeList* CoreDocumentImpl::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	return $new($DeepNodeListImpl, this, namespaceURI, localName);
}

$Object* CoreDocumentImpl::clone() {
	$var(CoreDocumentImpl, newdoc, $cast(CoreDocumentImpl, $ParentNode::clone()));
	$set($nc(newdoc), docType, nullptr);
	$set(newdoc, docElement, nullptr);
	return $of(newdoc);
}

bool CoreDocumentImpl::isXMLName($String* s, bool xml11Version) {
	$init(CoreDocumentImpl);
	if (s == nullptr) {
		return false;
	}
	if (!xml11Version) {
		return $XMLChar::isValidName(s);
	} else {
		return $XML11Char::isXML11ValidName(s);
	}
}

bool CoreDocumentImpl::isValidQName($String* prefix, $String* local, bool xml11Version) {
	$init(CoreDocumentImpl);
	if (local == nullptr) {
		return false;
	}
	bool validNCName = false;
	if (!xml11Version) {
		bool var$0 = (prefix == nullptr || $XMLChar::isValidNCName(prefix));
		validNCName = var$0 && $XMLChar::isValidNCName(local);
	} else {
		bool var$1 = (prefix == nullptr || $XML11Char::isXML11ValidNCName(prefix));
		validNCName = var$1 && $XML11Char::isXML11ValidNCName(local);
	}
	return validNCName;
}

bool CoreDocumentImpl::isKidOK($Node* parent, $Node* child) {
	if (this->allowGrammarAccess && $nc(parent)->getNodeType() == $Node::DOCUMENT_TYPE_NODE) {
		return $nc(child)->getNodeType() == $Node::ELEMENT_NODE;
	}
	int32_t var$0 = 0;
	int32_t var$2 = $nc(CoreDocumentImpl::kidOK)->get($nc(parent)->getNodeType());
	int32_t var$1 = ((int32_t)(var$2 & (uint32_t)$sl(1, $nc(child)->getNodeType())));
	return var$0 != var$1;
}

void CoreDocumentImpl::changed() {
	++this->changes$;
}

int32_t CoreDocumentImpl::changes() {
	return this->changes$;
}

$NodeListCache* CoreDocumentImpl::getNodeListCache($ParentNode* owner) {
	if (this->fFreeNLCache == nullptr) {
		return $new($NodeListCache, owner);
	}
	$var($NodeListCache, c, this->fFreeNLCache);
	$set(this, fFreeNLCache, $nc(this->fFreeNLCache)->next);
	$set($nc(c), fChild, nullptr);
	c->fChildIndex = -1;
	c->fLength = -1;
	if (c->fOwner != nullptr) {
		$set($nc(c->fOwner), fNodeListCache, nullptr);
	}
	$set(c, fOwner, owner);
	return c;
}

void CoreDocumentImpl::freeNodeListCache($NodeListCache* c) {
	$set($nc(c), next, this->fFreeNLCache);
	$set(this, fFreeNLCache, c);
}

$Object* CoreDocumentImpl::setUserData($Node* n, $String* key, Object$* data, $UserDataHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr) {
		if (this->nodeUserData != nullptr) {
			$var($Map, t, $cast($Map, $nc(this->nodeUserData)->get(n)));
			if (t != nullptr) {
				$var($ParentNode$UserDataRecord, r, $cast($ParentNode$UserDataRecord, t->remove(key)));
				if (r != nullptr) {
					return $of(r->fData);
				}
			}
		}
		return $of(nullptr);
	} else {
		$var($Map, t, nullptr);
		if (this->nodeUserData == nullptr) {
			$set(this, nodeUserData, $new($HashMap));
			$assign(t, $new($HashMap));
			$nc(this->nodeUserData)->put(n, t);
		} else {
			$assign(t, $cast($Map, $nc(this->nodeUserData)->get(n)));
			if (t == nullptr) {
				$assign(t, $new($HashMap));
				$nc(this->nodeUserData)->put(n, t);
			}
		}
		$var($ParentNode$UserDataRecord, r, $cast($ParentNode$UserDataRecord, $nc(t)->put(key, $$new($ParentNode$UserDataRecord, this, data, handler))));
		if (r != nullptr) {
			return $of(r->fData);
		}
		return $of(nullptr);
	}
}

$Object* CoreDocumentImpl::getUserData($Node* n, $String* key) {
	$useLocalCurrentObjectStackCache();
	if (this->nodeUserData == nullptr) {
		return $of(nullptr);
	}
	$var($Map, t, $cast($Map, $nc(this->nodeUserData)->get(n)));
	if (t == nullptr) {
		return $of(nullptr);
	}
	$var($ParentNode$UserDataRecord, r, $cast($ParentNode$UserDataRecord, $nc(t)->get(key)));
	if (r != nullptr) {
		return $of(r->fData);
	}
	return $of(nullptr);
}

$Map* CoreDocumentImpl::getUserDataRecord($Node* n) {
	if (this->nodeUserData == nullptr) {
		return nullptr;
	}
	$var($Map, t, $cast($Map, $nc(this->nodeUserData)->get(n)));
	if (t == nullptr) {
		return nullptr;
	}
	return t;
}

$Map* CoreDocumentImpl::removeUserDataTable($Node* n) {
	if (this->nodeUserData == nullptr) {
		return nullptr;
	}
	return $cast($Map, $nc(this->nodeUserData)->get(n));
}

void CoreDocumentImpl::setUserDataTable($Node* n, $Map* data) {
	if (this->nodeUserData == nullptr) {
		$set(this, nodeUserData, $new($HashMap));
	}
	if (data != nullptr) {
		$nc(this->nodeUserData)->put(n, data);
	}
}

void CoreDocumentImpl::callUserDataHandlers($Node* n, $Node* c, int16_t operation) {
	if (this->nodeUserData == nullptr) {
		return;
	}
	if ($instanceOf($NodeImpl, n)) {
		$var($Map, t, $nc(($cast($NodeImpl, n)))->getUserDataRecord());
		if (t == nullptr || $nc(t)->isEmpty()) {
			return;
		}
		callUserDataHandlers(n, c, operation, t);
	}
}

void CoreDocumentImpl::callUserDataHandlers($Node* n, $Node* c, int16_t operation, $Map* userData) {
	$useLocalCurrentObjectStackCache();
	if (userData == nullptr || $nc(userData)->isEmpty()) {
		return;
	}
	$nc($($nc($($nc(userData)->keySet()))->stream()))->forEach(static_cast<$Consumer*>($$new(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0, userData, operation, n, c)));
}

void CoreDocumentImpl::checkNamespaceWF($String* qname, int32_t colon1, int32_t colon2) {
	if (!this->errorChecking) {
		return;
	}
	if (colon1 == 0 || colon1 == $nc(qname)->length() - 1 || colon2 != colon1) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
	}
}

void CoreDocumentImpl::checkDOMNSErr($String* prefix, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	if (this->errorChecking) {
		if (namespace$ == nullptr) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
			$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
		} else {
			bool var$1 = $nc(prefix)->equals("xml"_s);
			$init($NamespaceContext);
			if (var$1 && !$nc(namespace$)->equals($NamespaceContext::XML_URI)) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
				$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
			} else {
				bool var$6 = prefix->equals("xmlns"_s);
				bool var$5 = var$6 && !namespace$->equals($NamespaceContext::XMLNS_URI);
				if (!var$5) {
					bool var$7 = !prefix->equals("xmlns"_s);
					var$5 = (var$7 && namespace$->equals($NamespaceContext::XMLNS_URI));
				}
				if (var$5) {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NAMESPACE_ERR"_s, nullptr));
					$throwNew($DOMException, $DOMException::NAMESPACE_ERR, msg);
				}
			}
		}
	}
}

void CoreDocumentImpl::checkQName($String* prefix, $String* local) {
	if (!this->errorChecking) {
		return;
	}
	bool validNCName = false;
	if (!this->xml11Version) {
		bool var$0 = (prefix == nullptr || $XMLChar::isValidNCName(prefix));
		validNCName = var$0 && $XMLChar::isValidNCName(local);
	} else {
		bool var$1 = (prefix == nullptr || $XML11Char::isXML11ValidNCName(prefix));
		validNCName = var$1 && $XML11Char::isXML11ValidNCName(local);
	}
	if (!validNCName) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "INVALID_CHARACTER_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::INVALID_CHARACTER_ERR, msg);
	}
}

bool CoreDocumentImpl::isXML11Version() {
	return this->xml11Version;
}

bool CoreDocumentImpl::isNormalizeDocRequired() {
	return true;
}

bool CoreDocumentImpl::isXMLVersionChanged() {
	return this->xmlVersionChanged;
}

void CoreDocumentImpl::setUserData($NodeImpl* n, Object$* data) {
	setUserData(n, "XERCES1DOMUSERDATA"_s, data, nullptr);
}

$Object* CoreDocumentImpl::getUserData($NodeImpl* n) {
	return $of(getUserData(n, "XERCES1DOMUSERDATA"_s));
}

void CoreDocumentImpl::addEventListener($NodeImpl* node, $String* type, $EventListener* listener, bool useCapture) {
}

void CoreDocumentImpl::removeEventListener($NodeImpl* node, $String* type, $EventListener* listener, bool useCapture) {
}

void CoreDocumentImpl::copyEventListeners($NodeImpl* src, $NodeImpl* tgt) {
}

bool CoreDocumentImpl::dispatchEvent($NodeImpl* node, $Event* event) {
	return false;
}

void CoreDocumentImpl::replacedText($NodeImpl* node) {
}

void CoreDocumentImpl::deletedText($NodeImpl* node, int32_t offset, int32_t count) {
}

void CoreDocumentImpl::insertedText($NodeImpl* node, int32_t offset, int32_t count) {
}

void CoreDocumentImpl::modifyingCharacterData($NodeImpl* node, bool replace) {
}

void CoreDocumentImpl::modifiedCharacterData($NodeImpl* node, $String* oldvalue, $String* value, bool replace) {
}

void CoreDocumentImpl::insertingNode($NodeImpl* node, bool replace) {
}

void CoreDocumentImpl::insertedNode($NodeImpl* node, $NodeImpl* newInternal, bool replace) {
}

void CoreDocumentImpl::removingNode($NodeImpl* node, $NodeImpl* oldChild, bool replace) {
}

void CoreDocumentImpl::removedNode($NodeImpl* node, bool replace) {
}

void CoreDocumentImpl::replacingNode($NodeImpl* node) {
}

void CoreDocumentImpl::replacedNode($NodeImpl* node) {
}

void CoreDocumentImpl::replacingData($NodeImpl* node) {
}

void CoreDocumentImpl::replacedCharacterData($NodeImpl* node, $String* oldvalue, $String* value) {
}

void CoreDocumentImpl::modifiedAttrValue($AttrImpl* attr, $String* oldvalue) {
}

void CoreDocumentImpl::setAttrNode($AttrImpl* attr, $AttrImpl* previous) {
}

void CoreDocumentImpl::removedAttrNode($AttrImpl* attr, $NodeImpl* oldOwner, $String* name) {
}

void CoreDocumentImpl::renamedAttrNode($Attr* oldAt, $Attr* newAt) {
}

void CoreDocumentImpl::renamedElement($Element* oldEl, $Element* newEl) {
}

void CoreDocumentImpl::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, nud, nullptr);
	if (this->nodeUserData != nullptr) {
		$assign(nud, $new($Hashtable));
		{
			$var($Iterator, i$, $nc($($nc(this->nodeUserData)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, var$0, $cast($Node, $nc(e)->getKey()));
					nud->put(var$0, $$new($Hashtable, $cast($Map, $(e->getValue()))));
				}
			}
		}
	}
	$var($Hashtable, ids, (this->identifiers == nullptr) ? ($Hashtable*)nullptr : $new($Hashtable, this->identifiers));
	$var($Hashtable, nt, (this->nodeTable == nullptr) ? ($Hashtable*)nullptr : $new($Hashtable, this->nodeTable));
	$var($ObjectOutputStream$PutField, pf, $nc(out)->putFields());
	$nc(pf)->put("docType"_s, $of(this->docType));
	pf->put("docElement"_s, $of(this->docElement));
	pf->put("fFreeNLCache"_s, $of(this->fFreeNLCache));
	pf->put("encoding"_s, $of(this->encoding));
	pf->put("actualEncoding"_s, $of(this->actualEncoding));
	pf->put("version"_s, $of(this->version));
	pf->put("standalone"_s, this->standalone);
	pf->put("fDocumentURI"_s, $of(this->fDocumentURI));
	pf->put("userData"_s, $of(nud));
	pf->put("identifiers"_s, $of(ids));
	pf->put("changes"_s, this->changes$);
	pf->put("allowGrammarAccess"_s, this->allowGrammarAccess);
	pf->put("errorChecking"_s, this->errorChecking);
	pf->put("ancestorChecking"_s, this->ancestorChecking);
	pf->put("xmlVersionChanged"_s, this->xmlVersionChanged);
	pf->put("documentNumber"_s, this->documentNumber);
	pf->put("nodeCounter"_s, this->nodeCounter);
	pf->put("nodeTable"_s, $of(nt));
	pf->put("xml11Version"_s, this->xml11Version);
	out->writeFields();
}

void CoreDocumentImpl::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(in)->readFields());
	$set(this, docType, $cast($DocumentTypeImpl, $nc(gf)->get("docType"_s, ($Object*)nullptr)));
	$set(this, docElement, $cast($ElementImpl, gf->get("docElement"_s, ($Object*)nullptr)));
	$set(this, fFreeNLCache, $cast($NodeListCache, gf->get("fFreeNLCache"_s, ($Object*)nullptr)));
	$set(this, encoding, $cast($String, gf->get("encoding"_s, ($Object*)nullptr)));
	$set(this, actualEncoding, $cast($String, gf->get("actualEncoding"_s, ($Object*)nullptr)));
	$set(this, version, $cast($String, gf->get("version"_s, ($Object*)nullptr)));
	this->standalone = gf->get("standalone"_s, false);
	$set(this, fDocumentURI, $cast($String, gf->get("fDocumentURI"_s, ($Object*)nullptr)));
	$var($Hashtable, nud, $cast($Hashtable, gf->get("userData"_s, ($Object*)nullptr)));
	$var($Hashtable, ids, $cast($Hashtable, gf->get("identifiers"_s, ($Object*)nullptr)));
	this->changes$ = gf->get("changes"_s, 0);
	this->allowGrammarAccess = gf->get("allowGrammarAccess"_s, false);
	this->errorChecking = gf->get("errorChecking"_s, true);
	this->ancestorChecking = gf->get("ancestorChecking"_s, true);
	this->xmlVersionChanged = gf->get("xmlVersionChanged"_s, false);
	this->documentNumber = gf->get("documentNumber"_s, 0);
	this->nodeCounter = gf->get("nodeCounter"_s, 0);
	$var($Hashtable, nt, $cast($Hashtable, gf->get("nodeTable"_s, ($Object*)nullptr)));
	this->xml11Version = gf->get("xml11Version"_s, false);
	if (nud != nullptr) {
		$set(this, nodeUserData, $new($HashMap));
		{
			$var($Iterator, i$, $nc($(nud->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, var$0, $cast($Node, $nc(e)->getKey()));
					$nc(this->nodeUserData)->put(var$0, $$new($HashMap, $cast($Map, $(e->getValue()))));
				}
			}
		}
	}
	if (ids != nullptr) {
		$set(this, identifiers, $new($HashMap, static_cast<$Map*>(ids)));
	}
	if (nt != nullptr) {
		$set(this, nodeTable, $new($HashMap, static_cast<$Map*>(nt)));
	}
}

void CoreDocumentImpl::lambda$callUserDataHandlers$0($Map* userData, int16_t operation, $Node* n, $Node* c, $String* key) {
	$init(CoreDocumentImpl);
	$var($ParentNode$UserDataRecord, r, $cast($ParentNode$UserDataRecord, $nc(userData)->get(key)));
	if ($nc(r)->fHandler != nullptr) {
		$nc(r->fHandler)->handle(operation, key, r->fData, n, c);
	}
}

void clinit$CoreDocumentImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$assignStatic(CoreDocumentImpl::kidOK, $new($ints, 13));
		$nc(CoreDocumentImpl::kidOK)->set($Node::DOCUMENT_NODE, (($sl(1, $Node::ELEMENT_NODE) | $sl(1, $Node::PROCESSING_INSTRUCTION_NODE)) | $sl(1, $Node::COMMENT_NODE)) | $sl(1, $Node::DOCUMENT_TYPE_NODE));
		$nc(CoreDocumentImpl::kidOK)->set($Node::DOCUMENT_FRAGMENT_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::ENTITY_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::ENTITY_REFERENCE_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::ELEMENT_NODE, (((($sl(1, $Node::ELEMENT_NODE) | $sl(1, $Node::PROCESSING_INSTRUCTION_NODE)) | $sl(1, $Node::COMMENT_NODE)) | $sl(1, $Node::TEXT_NODE)) | $sl(1, $Node::CDATA_SECTION_NODE)) | $sl(1, $Node::ENTITY_REFERENCE_NODE)))));
		$nc(CoreDocumentImpl::kidOK)->set($Node::ATTRIBUTE_NODE, $sl(1, $Node::TEXT_NODE) | $sl(1, $Node::ENTITY_REFERENCE_NODE));
		$nc(CoreDocumentImpl::kidOK)->set($Node::DOCUMENT_TYPE_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::PROCESSING_INSTRUCTION_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::COMMENT_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::TEXT_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::CDATA_SECTION_NODE, $nc(CoreDocumentImpl::kidOK)->set($Node::NOTATION_NODE, 0))))));
	}
	$load($DocumentTypeImpl);
	$load($ElementImpl);
	$load($NodeListCache);
	$init($Boolean);
	$load($Hashtable);
	$init($Integer);
	$assignStatic(CoreDocumentImpl::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "docType"_s, $DocumentTypeImpl::class$),
		$$new($ObjectStreamField, "docElement"_s, $ElementImpl::class$),
		$$new($ObjectStreamField, "fFreeNLCache"_s, $NodeListCache::class$),
		$$new($ObjectStreamField, "encoding"_s, $String::class$),
		$$new($ObjectStreamField, "actualEncoding"_s, $String::class$),
		$$new($ObjectStreamField, "version"_s, $String::class$),
		$$new($ObjectStreamField, "standalone"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "fDocumentURI"_s, $String::class$),
		$$new($ObjectStreamField, "userData"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "identifiers"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "changes"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "allowGrammarAccess"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "errorChecking"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "ancestorChecking"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "xmlVersionChanged"_s, $Boolean::TYPE),
		$$new($ObjectStreamField, "documentNumber"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "nodeCounter"_s, $Integer::TYPE),
		$$new($ObjectStreamField, "nodeTable"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "xml11Version"_s, $Boolean::TYPE)
	}));
}

CoreDocumentImpl::CoreDocumentImpl() {
}

$Class* CoreDocumentImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::classInfo$.name)) {
			return CoreDocumentImpl$$Lambda$lambda$callUserDataHandlers$0::load$(name, initialize);
		}
	}
	$loadClass(CoreDocumentImpl, name, initialize, &_CoreDocumentImpl_ClassInfo_, clinit$CoreDocumentImpl, allocate$CoreDocumentImpl);
	return class$;
}

$Class* CoreDocumentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com