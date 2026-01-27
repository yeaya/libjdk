#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringDefault.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/xml/transform/Source.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DEFAULT_BLOCKSIZE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef EMPTY_STR
#undef EMPTY_XML_STR
#undef IDENT_DTM_NODE_BITS
#undef INHERIT
#undef NAMESPACE_NODE
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef ROOTNODE
#undef SAX2DTM2
#undef STRIP
#undef TEXT_LENGTH_BITS
#undef TEXT_LENGTH_MAX
#undef TEXT_NODE
#undef TEXT_OFFSET_BITS
#undef TEXT_OFFSET_MAX

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMStringPool = ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $IntStack = ::com::sun::org::apache::xml::internal::utils::IntStack;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringDefault = ::com::sun::org::apache::xml::internal::utils::XMLStringDefault;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Source = ::javax::xml::transform::Source;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

$FieldInfo _SAX2DTM2_FieldInfo_[] = {
	{"m_exptype_map0", "[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_exptype_map0)},
	{"m_nextsib_map0", "[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_nextsib_map0)},
	{"m_firstch_map0", "[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_firstch_map0)},
	{"m_parent_map0", "[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_parent_map0)},
	{"m_exptype_map", "[[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_exptype_map)},
	{"m_nextsib_map", "[[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_nextsib_map)},
	{"m_firstch_map", "[[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_firstch_map)},
	{"m_parent_map", "[[I", nullptr, $PRIVATE, $field(SAX2DTM2, m_parent_map)},
	{"m_extendedTypes", "[Lcom/sun/org/apache/xml/internal/dtm/ref/ExtendedType;", nullptr, $PROTECTED, $field(SAX2DTM2, m_extendedTypes)},
	{"m_values", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PROTECTED, $field(SAX2DTM2, m_values)},
	{"m_valueIndex", "I", nullptr, $PRIVATE, $field(SAX2DTM2, m_valueIndex)},
	{"m_maxNodeIndex", "I", nullptr, $PRIVATE, $field(SAX2DTM2, m_maxNodeIndex)},
	{"m_SHIFT", "I", nullptr, $PROTECTED, $field(SAX2DTM2, m_SHIFT)},
	{"m_MASK", "I", nullptr, $PROTECTED, $field(SAX2DTM2, m_MASK)},
	{"m_blocksize", "I", nullptr, $PROTECTED, $field(SAX2DTM2, m_blocksize)},
	{"TEXT_LENGTH_BITS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SAX2DTM2, TEXT_LENGTH_BITS)},
	{"TEXT_OFFSET_BITS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SAX2DTM2, TEXT_OFFSET_BITS)},
	{"TEXT_LENGTH_MAX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SAX2DTM2, TEXT_LENGTH_MAX)},
	{"TEXT_OFFSET_MAX", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SAX2DTM2, TEXT_OFFSET_MAX)},
	{"m_buildIdIndex", "Z", nullptr, $PROTECTED, $field(SAX2DTM2, m_buildIdIndex)},
	{"EMPTY_STR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAX2DTM2, EMPTY_STR)},
	{"EMPTY_XML_STR", "Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SAX2DTM2, EMPTY_XML_STR)},
	{}
};

$MethodInfo _SAX2DTM2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(SAX2DTM2, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZZ)V", nullptr, $PUBLIC, $method(SAX2DTM2, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool, bool)},
	{"_exptype", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(SAX2DTM2, _exptype, int32_t, int32_t)},
	{"_exptype2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _exptype2, int32_t, int32_t)},
	{"_exptype2Type", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _exptype2Type, int32_t, int32_t)},
	{"_firstch2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _firstch2, int32_t, int32_t)},
	{"_nextsib2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _nextsib2, int32_t, int32_t)},
	{"_parent2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _parent2, int32_t, int32_t)},
	{"_type2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, _type2, int32_t, int32_t)},
	{"addNode", "(IIIIIZ)I", nullptr, $PROTECTED | $FINAL, $virtualMethod(SAX2DTM2, addNode, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool)},
	{"charactersFlush", "()V", nullptr, $PROTECTED | $FINAL, $virtualMethod(SAX2DTM2, charactersFlush, void)},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"copyAttribute", "(IILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, copyAttribute, void, int32_t, int32_t, $SerializationHandler*), "org.xml.sax.SAXException"},
	{"copyAttributes", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, copyAttributes, void, int32_t, $SerializationHandler*), "org.xml.sax.SAXException"},
	{"copyElement", "(IILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, copyElement, $String*, int32_t, int32_t, $SerializationHandler*), "org.xml.sax.SAXException"},
	{"copyNS", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;Z)V", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, copyNS, void, int32_t, $SerializationHandler*, bool), "org.xml.sax.SAXException"},
	{"copyTextNode", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, copyTextNode, void, int32_t, $SerializationHandler*), "org.xml.sax.SAXException"},
	{"dispatchCharactersEvents", "(ILorg/xml/sax/ContentHandler;Z)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SAX2DTM2, dispatchCharactersEvents, void, int32_t, $ContentHandler*, bool), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"getExpandedTypeID2", "(I)I", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, getExpandedTypeID2, int32_t, int32_t)},
	{"getFirstAttribute", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(SAX2DTM2, getFirstAttribute, int32_t, int32_t)},
	{"getFirstAttributeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(SAX2DTM2, getFirstAttributeIdentity, int32_t, int32_t)},
	{"getIdForNamespace", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getIdForNamespace, int32_t, $String*)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getLocalName, $String*, int32_t)},
	{"getNextAttributeIdentity", "(I)I", nullptr, $PROTECTED, $virtualMethod(SAX2DTM2, getNextAttributeIdentity, int32_t, int32_t)},
	{"getNextNamespaceNode2", "(I)I", nullptr, $PROTECTED | $FINAL, $method(SAX2DTM2, getNextNamespaceNode2, int32_t, int32_t)},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getNodeName, $String*, int32_t)},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SAX2DTM2, getNodeNameX, $String*, int32_t)},
	{"getNodeValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getNodeValue, $String*, int32_t)},
	{"getStringValue", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getStringValue, $XMLString*, int32_t)},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, getStringValue, $String*)},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(SAX2DTM2, getStringValueX, $String*, int32_t)},
	{"getTypedAttribute", "(II)I", nullptr, $PROTECTED | $FINAL, $virtualMethod(SAX2DTM2, getTypedAttribute, int32_t, int32_t, int32_t)},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _SAX2DTM2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedSingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedSingletonIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedDescendantIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "DescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedAncestorIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "AncestorIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedFollowingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "FollowingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedPrecedingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedPrecedingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "AttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedFollowingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "FollowingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedRootIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedRootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "ParentIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "ChildrenIterator", $PUBLIC | $FINAL},
	{}
};

$ClassInfo _SAX2DTM2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM",
	nullptr,
	_SAX2DTM2_FieldInfo_,
	_SAX2DTM2_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedSingletonIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedDescendantIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$DescendantIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAncestorIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedPrecedingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAttributeIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AttributeIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedFollowingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$FollowingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedRootIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedChildrenIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator,com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ChildrenIterator"
};

$Object* allocate$SAX2DTM2($Class* clazz) {
	return $of($alloc(SAX2DTM2));
}

$String* SAX2DTM2::EMPTY_STR = nullptr;
$XMLString* SAX2DTM2::EMPTY_XML_STR = nullptr;

void SAX2DTM2::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	SAX2DTM2::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, $DTMDefaultBase::DEFAULT_BLOCKSIZE, true, true, false);
}

void SAX2DTM2::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool buildIdIndex, bool newNameTable) {
	$SAX2DTM::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, blocksize, usePrevsib, newNameTable);
	this->m_valueIndex = 0;
	this->m_buildIdIndex = true;
	int32_t shift = 0;
	for (shift = 0; ($usrAssign(blocksize, 1)) != 0; ++shift) {
	}
	this->m_blocksize = $sl(1, shift);
	this->m_SHIFT = shift;
	this->m_MASK = this->m_blocksize - 1;
	this->m_buildIdIndex = buildIdIndex;
	$set(this, m_values, $new($ArrayList, 32));
	this->m_maxNodeIndex = $sl(1, $DTMManager::IDENT_DTM_NODE_BITS);
	$set(this, m_exptype_map0, $nc(this->m_exptype)->getMap0());
	$set(this, m_nextsib_map0, $nc(this->m_nextsib)->getMap0());
	$set(this, m_firstch_map0, $nc(this->m_firstch)->getMap0());
	$set(this, m_parent_map0, $nc(this->m_parent)->getMap0());
}

int32_t SAX2DTM2::_exptype(int32_t identity) {
	return $nc(this->m_exptype)->elementAt(identity);
}

int32_t SAX2DTM2::_exptype2(int32_t identity) {
	if (identity < this->m_blocksize) {
		return $nc(this->m_exptype_map0)->get(identity);
	} else {
		return $nc($nc(this->m_exptype_map)->get($usr(identity, this->m_SHIFT)))->get((int32_t)(identity & (uint32_t)this->m_MASK));
	}
}

int32_t SAX2DTM2::_nextsib2(int32_t identity) {
	if (identity < this->m_blocksize) {
		return $nc(this->m_nextsib_map0)->get(identity);
	} else {
		return $nc($nc(this->m_nextsib_map)->get($usr(identity, this->m_SHIFT)))->get((int32_t)(identity & (uint32_t)this->m_MASK));
	}
}

int32_t SAX2DTM2::_firstch2(int32_t identity) {
	if (identity < this->m_blocksize) {
		return $nc(this->m_firstch_map0)->get(identity);
	} else {
		return $nc($nc(this->m_firstch_map)->get($usr(identity, this->m_SHIFT)))->get((int32_t)(identity & (uint32_t)this->m_MASK));
	}
}

int32_t SAX2DTM2::_parent2(int32_t identity) {
	if (identity < this->m_blocksize) {
		return $nc(this->m_parent_map0)->get(identity);
	} else {
		return $nc($nc(this->m_parent_map)->get($usr(identity, this->m_SHIFT)))->get((int32_t)(identity & (uint32_t)this->m_MASK));
	}
}

int32_t SAX2DTM2::_type2(int32_t identity) {
	int32_t eType = 0;
	if (identity < this->m_blocksize) {
		eType = $nc(this->m_exptype_map0)->get(identity);
	} else {
		eType = $nc($nc(this->m_exptype_map)->get($usr(identity, this->m_SHIFT)))->get((int32_t)(identity & (uint32_t)this->m_MASK));
	}
	if ($DTM::NULL != eType) {
		return $nc($nc(this->m_extendedTypes)->get(eType))->getNodeType();
	} else {
		return $DTM::NULL;
	}
}

int32_t SAX2DTM2::getExpandedTypeID2(int32_t nodeHandle) {
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	if (nodeID != $DTM::NULL) {
		if (nodeID < this->m_blocksize) {
			return $nc(this->m_exptype_map0)->get(nodeID);
		} else {
			return $nc($nc(this->m_exptype_map)->get($usr(nodeID, this->m_SHIFT)))->get((int32_t)(nodeID & (uint32_t)this->m_MASK));
		}
	} else {
		return $DTM::NULL;
	}
}

int32_t SAX2DTM2::_exptype2Type(int32_t exptype) {
	if ($DTM::NULL != exptype) {
		return $nc($nc(this->m_extendedTypes)->get(exptype))->getNodeType();
	} else {
		return $DTM::NULL;
	}
}

int32_t SAX2DTM2::getIdForNamespace($String* uri) {
	int32_t index = $nc(this->m_values)->indexOf(uri);
	if (index < 0) {
		$nc(this->m_values)->add(uri);
		return this->m_valueIndex++;
	} else {
		return index;
	}
}

void SAX2DTM2::startElement($String* uri, $String* localName$renamed, $String* qName, $Attributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($String, localName, localName$renamed);
	charactersFlush();
	bool var$0 = (uri == nullptr || $nc(uri)->isEmpty());
	if (var$0 && (localName == nullptr || $nc(localName)->isEmpty())) {
		int32_t colon = $nc(qName)->lastIndexOf((int32_t)u':');
		$assign(localName, (colon > -1) ? qName->substring(colon + 1) : qName);
	}
	int32_t exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(uri, localName, $DTM::ELEMENT_NODE);
	int32_t var$1 = $nc(qName)->length();
	int32_t prefixIndex = (var$1 != $nc(localName)->length()) ? $nc(this->m_valuesOrPrefixes)->stringToIndex(qName) : 0;
	int32_t elemNode = addNode($DTM::ELEMENT_NODE, exName, $nc(this->m_parents)->peek(), this->m_previous, prefixIndex, true);
	if (this->m_indexing) {
		indexNode(exName, elemNode);
	}
	$nc(this->m_parents)->push(elemNode);
	int32_t startDecls = $nc(this->m_contextIndexes)->peek();
	int32_t nDecls = $nc(this->m_prefixMappings)->size();
	$var($String, prefix, nullptr);
	if (!this->m_pastFirstElement) {
		$assign(prefix, "xml"_s);
		$var($String, declURL, "http://www.w3.org/XML/1998/namespace"_s);
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(nullptr, prefix, $DTM::NAMESPACE_NODE);
		$nc(this->m_values)->add(declURL);
		int32_t val = this->m_valueIndex++;
		addNode($DTM::NAMESPACE_NODE, exName, elemNode, $DTM::NULL, val, false);
		this->m_pastFirstElement = true;
	}
	for (int32_t i = startDecls; i < nDecls; i += 2) {
		$assign(prefix, $cast($String, $nc(this->m_prefixMappings)->get(i)));
		if (prefix == nullptr) {
			continue;
		}
		$var($String, declURL, $cast($String, $nc(this->m_prefixMappings)->get(i + 1)));
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(nullptr, prefix, $DTM::NAMESPACE_NODE);
		$nc(this->m_values)->add(declURL);
		int32_t val = this->m_valueIndex++;
		addNode($DTM::NAMESPACE_NODE, exName, elemNode, $DTM::NULL, val, false);
	}
	int32_t n = $nc(attributes)->getLength();
	for (int32_t i = 0; i < n; ++i) {
		$var($String, attrUri, attributes->getURI(i));
		$var($String, attrLocalName, attributes->getLocalName(i));
		$var($String, attrQName, attributes->getQName(i));
		$var($String, valString, attributes->getValue(i));
		if (attrUri == nullptr || $nc(attrUri)->isEmpty()) {
			if (attrLocalName == nullptr || $nc(attrLocalName)->isEmpty()) {
				int32_t colon = $nc(attrQName)->lastIndexOf((int32_t)u':');
				$assign(attrLocalName, (colon > -1) ? attrQName->substring(colon + 1) : attrQName);
			} else {
				int32_t colon = attrLocalName->lastIndexOf((int32_t)u':');
				$assign(attrLocalName, (colon > -1) ? attrLocalName->substring(colon + 1) : attrLocalName);
			}
		}
		int32_t nodeType = 0;
		bool var$2 = (nullptr != attrQName);
		if (var$2) {
			bool var$3 = attrQName->equals("xmlns"_s);
			var$2 = (var$3 || attrQName->startsWith("xmlns:"_s));
		}
		if (var$2) {
			$assign(prefix, getPrefix(attrQName, attrUri));
			if (declAlreadyDeclared(prefix)) {
				continue;
			}
			nodeType = $DTM::NAMESPACE_NODE;
		} else {
			nodeType = $DTM::ATTRIBUTE_NODE;
			if (this->m_buildIdIndex && $nc($(attributes->getType(i)))->equalsIgnoreCase("ID"_s)) {
				setIDAttribute(valString, elemNode);
			}
		}
		if (nullptr == valString) {
			$assign(valString, ""_s);
		}
		$nc(this->m_values)->add(valString);
		int32_t val = this->m_valueIndex++;
		int32_t var$4 = $nc(attrLocalName)->length();
		if (var$4 != $nc(attrQName)->length()) {
			prefixIndex = $nc(this->m_valuesOrPrefixes)->stringToIndex(attrQName);
			int32_t dataIndex = $nc(this->m_data)->size();
			$nc(this->m_data)->addElement(prefixIndex);
			$nc(this->m_data)->addElement(val);
			val = -dataIndex;
		}
		exName = $nc(this->m_expandedNameTable)->getExpandedTypeID(attrUri, attrLocalName, nodeType);
		addNode(nodeType, exName, elemNode, $DTM::NULL, val, false);
	}
	if (nullptr != this->m_wsfilter) {
		int16_t wsv = $nc(this->m_wsfilter)->getShouldStripSpace(makeNodeHandle(elemNode), this);
		bool shouldStrip = ($DTMWSFilter::INHERIT == wsv) ? getShouldStripWhitespace() : ($DTMWSFilter::STRIP == wsv);
		pushShouldStripWhitespace(shouldStrip);
	}
	this->m_previous = $DTM::NULL;
	$nc(this->m_contextIndexes)->push($nc(this->m_prefixMappings)->size());
}

void SAX2DTM2::endElement($String* uri, $String* localName, $String* qName) {
	charactersFlush();
	$nc(this->m_contextIndexes)->quickPop(1);
	int32_t topContextIndex = $nc(this->m_contextIndexes)->peek();
	if (topContextIndex != $nc(this->m_prefixMappings)->size()) {
		$nc(this->m_prefixMappings)->setSize(topContextIndex);
	}
	this->m_previous = $nc(this->m_parents)->pop();
	popShouldStripWhitespace();
}

void SAX2DTM2::comment($chars* ch, int32_t start, int32_t length) {
	if (this->m_insideDTD) {
		return;
	}
	charactersFlush();
	$nc(this->m_values)->add($$new($String, ch, start, length));
	int32_t dataIndex = this->m_valueIndex++;
	this->m_previous = addNode($DTM::COMMENT_NODE, $DTM::COMMENT_NODE, $nc(this->m_parents)->peek(), this->m_previous, dataIndex, false);
}

void SAX2DTM2::startDocument() {
	int32_t doc = addNode($DTM::DOCUMENT_NODE, $DTM::DOCUMENT_NODE, $DTM::NULL, $DTM::NULL, 0, true);
	$nc(this->m_parents)->push(doc);
	this->m_previous = $DTM::NULL;
	$nc(this->m_contextIndexes)->push($nc(this->m_prefixMappings)->size());
}

void SAX2DTM2::endDocument() {
	$SAX2DTM::endDocument();
	$nc(this->m_exptype)->addElement($DTM::NULL);
	$nc(this->m_parent)->addElement($DTM::NULL);
	$nc(this->m_nextsib)->addElement($DTM::NULL);
	$nc(this->m_firstch)->addElement($DTM::NULL);
	$set(this, m_extendedTypes, $nc(this->m_expandedNameTable)->getExtendedTypes());
	$set(this, m_exptype_map, $nc(this->m_exptype)->getMap());
	$set(this, m_nextsib_map, $nc(this->m_nextsib)->getMap());
	$set(this, m_firstch_map, $nc(this->m_firstch)->getMap());
	$set(this, m_parent_map, $nc(this->m_parent)->getMap());
}

int32_t SAX2DTM2::addNode(int32_t type, int32_t expandedTypeID, int32_t parentIndex, int32_t previousSibling, int32_t dataOrPrefix, bool canHaveFirstChild) {
	int32_t nodeIndex = this->m_size++;
	if (nodeIndex == this->m_maxNodeIndex) {
		addNewDTMID(nodeIndex);
		this->m_maxNodeIndex += ($sl(1, $DTMManager::IDENT_DTM_NODE_BITS));
	}
	$nc(this->m_firstch)->addElement($DTM::NULL);
	$nc(this->m_nextsib)->addElement($DTM::NULL);
	$nc(this->m_parent)->addElement(parentIndex);
	$nc(this->m_exptype)->addElement(expandedTypeID);
	$nc(this->m_dataOrQName)->addElement(dataOrPrefix);
	if (this->m_prevsib != nullptr) {
		$nc(this->m_prevsib)->addElement(previousSibling);
	}
	if (this->m_locator != nullptr && this->m_useSourceLocationProperty) {
		setSourceLocation();
	}
	switch (type) {
	case $DTM::NAMESPACE_NODE:
		{
			declareNamespaceInContext(parentIndex, nodeIndex);
			break;
		}
	case $DTM::ATTRIBUTE_NODE:
		{
			break;
		}
	default:
		{
			if ($DTM::NULL != previousSibling) {
				$nc(this->m_nextsib)->setElementAt(nodeIndex, previousSibling);
			} else if ($DTM::NULL != parentIndex) {
				$nc(this->m_firstch)->setElementAt(nodeIndex, parentIndex);
			}
			break;
		}
	}
	return nodeIndex;
}

void SAX2DTM2::charactersFlush() {
	if (this->m_textPendingStart >= 0) {
		int32_t length = $nc(this->m_chars)->size() - this->m_textPendingStart;
		bool doStrip = false;
		if (getShouldStripWhitespace()) {
			doStrip = $nc(this->m_chars)->isWhitespace(this->m_textPendingStart, length);
		}
		if (doStrip) {
			$nc(this->m_chars)->setLength(this->m_textPendingStart);
		} else if (length > 0) {
			if (length <= SAX2DTM2::TEXT_LENGTH_MAX && this->m_textPendingStart <= SAX2DTM2::TEXT_OFFSET_MAX) {
				this->m_previous = addNode(this->m_coalescedTextType, $DTM::TEXT_NODE, $nc(this->m_parents)->peek(), this->m_previous, length + ($sl(this->m_textPendingStart, SAX2DTM2::TEXT_LENGTH_BITS)), false);
			} else {
				int32_t dataIndex = $nc(this->m_data)->size();
				this->m_previous = addNode(this->m_coalescedTextType, $DTM::TEXT_NODE, $nc(this->m_parents)->peek(), this->m_previous, -dataIndex, false);
				$nc(this->m_data)->addElement(this->m_textPendingStart);
				$nc(this->m_data)->addElement(length);
			}
		}
		this->m_textPendingStart = -1;
		this->m_textType = (this->m_coalescedTextType = $DTM::TEXT_NODE);
	}
}

void SAX2DTM2::processingInstruction($String* target, $String* data) {
	charactersFlush();
	int32_t dataIndex = $nc(this->m_data)->size();
	this->m_previous = addNode($DTM::PROCESSING_INSTRUCTION_NODE, $DTM::PROCESSING_INSTRUCTION_NODE, $nc(this->m_parents)->peek(), this->m_previous, -dataIndex, false);
	$nc(this->m_data)->addElement($nc(this->m_valuesOrPrefixes)->stringToIndex(target));
	$nc(this->m_values)->add(data);
	$nc(this->m_data)->addElement(this->m_valueIndex++);
}

int32_t SAX2DTM2::getFirstAttribute(int32_t nodeHandle) {
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	if (nodeID == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t type = _type2(nodeID);
	if ($DTM::ELEMENT_NODE == type) {
		while (true) {
			++nodeID;
			type = _type2(nodeID);
			if (type == $DTM::ATTRIBUTE_NODE) {
				return makeNodeHandle(nodeID);
			} else if ($DTM::NAMESPACE_NODE != type) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

int32_t SAX2DTM2::getFirstAttributeIdentity(int32_t identity) {
	if (identity == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t type = _type2(identity);
	if ($DTM::ELEMENT_NODE == type) {
		while (true) {
			++identity;
			type = _type2(identity);
			if (type == $DTM::ATTRIBUTE_NODE) {
				return identity;
			} else if ($DTM::NAMESPACE_NODE != type) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

int32_t SAX2DTM2::getNextAttributeIdentity(int32_t identity) {
	while (true) {
		++identity;
		int32_t type = _type2(identity);
		if (type == $DTM::ATTRIBUTE_NODE) {
			return identity;
		} else if (type != $DTM::NAMESPACE_NODE) {
			break;
		}
	}
	return $DTM::NULL;
}

int32_t SAX2DTM2::getTypedAttribute(int32_t nodeHandle, int32_t attType) {
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	if (nodeID == $DTM::NULL) {
		return $DTM::NULL;
	}
	int32_t type = _type2(nodeID);
	if ($DTM::ELEMENT_NODE == type) {
		int32_t expType = 0;
		while (true) {
			++nodeID;
			expType = _exptype2(nodeID);
			if (expType != $DTM::NULL) {
				type = $nc($nc(this->m_extendedTypes)->get(expType))->getNodeType();
			} else {
				return $DTM::NULL;
			}
			if (type == $DTM::ATTRIBUTE_NODE) {
				if (expType == attType) {
					return makeNodeHandle(nodeID);
				}
			} else if ($DTM::NAMESPACE_NODE != type) {
				break;
			}
		}
	}
	return $DTM::NULL;
}

$String* SAX2DTM2::getLocalName(int32_t nodeHandle) {
	int32_t expType = _exptype(makeNodeIdentity(nodeHandle));
	if (expType == $DTM::PROCESSING_INSTRUCTION_NODE) {
		int32_t dataIndex = _dataOrQName(makeNodeIdentity(nodeHandle));
		dataIndex = $nc(this->m_data)->elementAt(-dataIndex);
		return $nc(this->m_valuesOrPrefixes)->indexToString(dataIndex);
	} else {
		return $nc(this->m_expandedNameTable)->getLocalName(expType);
	}
}

$String* SAX2DTM2::getNodeNameX(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	int32_t eType = _exptype2(nodeID);
	if (eType == $DTM::PROCESSING_INSTRUCTION_NODE) {
		int32_t dataIndex = _dataOrQName(nodeID);
		dataIndex = $nc(this->m_data)->elementAt(-dataIndex);
		return $nc(this->m_valuesOrPrefixes)->indexToString(dataIndex);
	}
	$var($ExtendedType, extType, $nc(this->m_extendedTypes)->get(eType));
	if ($nc($($nc(extType)->getNamespace()))->length() == 0) {
		return extType->getLocalName();
	} else {
		int32_t qnameIndex = $nc(this->m_dataOrQName)->elementAt(nodeID);
		if (qnameIndex == 0) {
			return extType->getLocalName();
		}
		if (qnameIndex < 0) {
			qnameIndex = -qnameIndex;
			qnameIndex = $nc(this->m_data)->elementAt(qnameIndex);
		}
		return $nc(this->m_valuesOrPrefixes)->indexToString(qnameIndex);
	}
}

$String* SAX2DTM2::getNodeName(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t nodeID = makeNodeIdentity(nodeHandle);
	int32_t eType = _exptype2(nodeID);
	$var($ExtendedType, extType, $nc(this->m_extendedTypes)->get(eType));
	if ($nc($($nc(extType)->getNamespace()))->length() == 0) {
		int32_t type = extType->getNodeType();
		$var($String, localName, extType->getLocalName());
		if (type == $DTM::NAMESPACE_NODE) {
			if ($nc(localName)->length() == 0) {
				return "xmlns"_s;
			} else {
				return $str({"xmlns:"_s, localName});
			}
		} else if (type == $DTM::PROCESSING_INSTRUCTION_NODE) {
			int32_t dataIndex = _dataOrQName(nodeID);
			dataIndex = $nc(this->m_data)->elementAt(-dataIndex);
			return $nc(this->m_valuesOrPrefixes)->indexToString(dataIndex);
		} else if ($nc(localName)->length() == 0) {
			return getFixedNames(type);
		} else {
			return localName;
		}
	} else {
		int32_t qnameIndex = $nc(this->m_dataOrQName)->elementAt(nodeID);
		if (qnameIndex == 0) {
			return extType->getLocalName();
		}
		if (qnameIndex < 0) {
			qnameIndex = -qnameIndex;
			qnameIndex = $nc(this->m_data)->elementAt(qnameIndex);
		}
		return $nc(this->m_valuesOrPrefixes)->indexToString(qnameIndex);
	}
}

$XMLString* SAX2DTM2::getStringValue(int32_t nodeHandle) {
	$useLocalCurrentObjectStackCache();
	int32_t identity = makeNodeIdentity(nodeHandle);
	if (identity == $DTM::NULL) {
		return SAX2DTM2::EMPTY_XML_STR;
	}
	int32_t type = _type2(identity);
	if (type == $DTM::ELEMENT_NODE || type == $DTM::DOCUMENT_NODE) {
		int32_t startNode = identity;
		identity = _firstch2(identity);
		if ($DTM::NULL != identity) {
			int32_t offset = -1;
			int32_t length = 0;
			do {
				type = _exptype2(identity);
				if (type == $DTM::TEXT_NODE || type == $DTM::CDATA_SECTION_NODE) {
					int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
					if (dataIndex >= 0) {
						if (-1 == offset) {
							offset = $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS);
						}
						length += (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX);
					} else {
						if (-1 == offset) {
							offset = $nc(this->m_data)->elementAt(-dataIndex);
						}
						length += $nc(this->m_data)->elementAt(-dataIndex + 1);
					}
				}
				++identity;
			} while (_parent2(identity) >= startNode);
			if (length > 0) {
				if (this->m_xstrf != nullptr) {
					return $nc(this->m_xstrf)->newstr(this->m_chars, offset, length);
				} else {
					return $new($XMLStringDefault, $($nc(this->m_chars)->getString(offset, length)));
				}
			} else {
				return SAX2DTM2::EMPTY_XML_STR;
			}
		} else {
			return SAX2DTM2::EMPTY_XML_STR;
		}
	} else if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex >= 0) {
			if (this->m_xstrf != nullptr) {
				return $nc(this->m_xstrf)->newstr(this->m_chars, $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
			} else {
				return $new($XMLStringDefault, $($nc(this->m_chars)->getString($usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX))));
			}
		} else if (this->m_xstrf != nullptr) {
			$var($FastStringBuffer, var$0, this->m_chars);
			int32_t var$1 = $nc(this->m_data)->elementAt(-dataIndex);
			return $nc(this->m_xstrf)->newstr(var$0, var$1, $nc(this->m_data)->elementAt(-dataIndex + 1));
		} else {
			int32_t var$2 = $nc(this->m_data)->elementAt(-dataIndex);
			return $new($XMLStringDefault, $($nc(this->m_chars)->getString(var$2, $nc(this->m_data)->elementAt(-dataIndex + 1))));
		}
	} else {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		if (this->m_xstrf != nullptr) {
			return $nc(this->m_xstrf)->newstr($cast($String, $($nc(this->m_values)->get(dataIndex))));
		} else {
			return $new($XMLStringDefault, $cast($String, $($nc(this->m_values)->get(dataIndex))));
		}
	}
}

$String* SAX2DTM2::getStringValueX(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	if (identity == $DTM::NULL) {
		return SAX2DTM2::EMPTY_STR;
	}
	int32_t type = _type2(identity);
	if (type == $DTM::ELEMENT_NODE || type == $DTM::DOCUMENT_NODE) {
		int32_t startNode = identity;
		identity = _firstch2(identity);
		if ($DTM::NULL != identity) {
			int32_t offset = -1;
			int32_t length = 0;
			do {
				type = _exptype2(identity);
				if (type == $DTM::TEXT_NODE || type == $DTM::CDATA_SECTION_NODE) {
					int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
					if (dataIndex >= 0) {
						if (-1 == offset) {
							offset = $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS);
						}
						length += (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX);
					} else {
						if (-1 == offset) {
							offset = $nc(this->m_data)->elementAt(-dataIndex);
						}
						length += $nc(this->m_data)->elementAt(-dataIndex + 1);
					}
				}
				++identity;
			} while (_parent2(identity) >= startNode);
			if (length > 0) {
				return $nc(this->m_chars)->getString(offset, length);
			} else {
				return SAX2DTM2::EMPTY_STR;
			}
		} else {
			return SAX2DTM2::EMPTY_STR;
		}
	} else if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex >= 0) {
			return $nc(this->m_chars)->getString($usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
		} else {
			int32_t var$0 = $nc(this->m_data)->elementAt(-dataIndex);
			return $nc(this->m_chars)->getString(var$0, $nc(this->m_data)->elementAt(-dataIndex + 1));
		}
	} else {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		return $cast($String, $nc(this->m_values)->get(dataIndex));
	}
}

$String* SAX2DTM2::getStringValue() {
	int32_t child = _firstch2($DTMDefaultBase::ROOTNODE);
	if (child == $DTM::NULL) {
		return SAX2DTM2::EMPTY_STR;
	}
	bool var$0 = (_exptype2(child) == $DTM::TEXT_NODE);
	if (var$0 && (_nextsib2(child) == $DTM::NULL)) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(child);
		if (dataIndex >= 0) {
			return $nc(this->m_chars)->getString($usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
		} else {
			int32_t var$1 = $nc(this->m_data)->elementAt(-dataIndex);
			return $nc(this->m_chars)->getString(var$1, $nc(this->m_data)->elementAt(-dataIndex + 1));
		}
	} else {
		return getStringValueX(getDocument());
	}
}

void SAX2DTM2::dispatchCharactersEvents(int32_t nodeHandle, $ContentHandler* ch, bool normalize) {
	$useLocalCurrentObjectStackCache();
	int32_t identity = makeNodeIdentity(nodeHandle);
	if (identity == $DTM::NULL) {
		return;
	}
	int32_t type = _type2(identity);
	if (type == $DTM::ELEMENT_NODE || type == $DTM::DOCUMENT_NODE) {
		int32_t startNode = identity;
		identity = _firstch2(identity);
		if ($DTM::NULL != identity) {
			int32_t offset = -1;
			int32_t length = 0;
			do {
				type = _exptype2(identity);
				if (type == $DTM::TEXT_NODE || type == $DTM::CDATA_SECTION_NODE) {
					int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
					if (dataIndex >= 0) {
						if (-1 == offset) {
							offset = $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS);
						}
						length += (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX);
					} else {
						if (-1 == offset) {
							offset = $nc(this->m_data)->elementAt(-dataIndex);
						}
						length += $nc(this->m_data)->elementAt(-dataIndex + 1);
					}
				}
				++identity;
			} while (_parent2(identity) >= startNode);
			if (length > 0) {
				if (normalize) {
					$nc(this->m_chars)->sendNormalizedSAXcharacters(ch, offset, length);
				} else {
					$nc(this->m_chars)->sendSAXcharacters(ch, offset, length);
				}
			}
		}
	} else if ($DTM::TEXT_NODE == type || $DTM::CDATA_SECTION_NODE == type) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex >= 0) {
			if (normalize) {
				$nc(this->m_chars)->sendNormalizedSAXcharacters(ch, $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
			} else {
				$nc(this->m_chars)->sendSAXcharacters(ch, $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
			}
		} else if (normalize) {
			$var($ContentHandler, var$0, ch);
			int32_t var$1 = $nc(this->m_data)->elementAt(-dataIndex);
			$nc(this->m_chars)->sendNormalizedSAXcharacters(var$0, var$1, $nc(this->m_data)->elementAt(-dataIndex + 1));
		} else {
			$var($ContentHandler, var$2, ch);
			int32_t var$3 = $nc(this->m_data)->elementAt(-dataIndex);
			$nc(this->m_chars)->sendSAXcharacters(var$2, var$3, $nc(this->m_data)->elementAt(-dataIndex + 1));
		}
	} else {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		$var($String, str, $cast($String, $nc(this->m_values)->get(dataIndex)));
		if (normalize) {
			$var($chars, var$4, $nc(str)->toCharArray());
			$FastStringBuffer::sendNormalizedSAXcharacters(var$4, 0, str->length(), ch);
		} else {
			$var($chars, var$5, $nc(str)->toCharArray());
			$nc(ch)->characters(var$5, 0, str->length());
		}
	}
}

$String* SAX2DTM2::getNodeValue(int32_t nodeHandle) {
	int32_t identity = makeNodeIdentity(nodeHandle);
	int32_t type = _type2(identity);
	if (type == $DTM::TEXT_NODE || type == $DTM::CDATA_SECTION_NODE) {
		int32_t dataIndex = _dataOrQName(identity);
		if (dataIndex > 0) {
			return $nc(this->m_chars)->getString($usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
		} else {
			int32_t var$0 = $nc(this->m_data)->elementAt(-dataIndex);
			return $nc(this->m_chars)->getString(var$0, $nc(this->m_data)->elementAt(-dataIndex + 1));
		}
	} else if ($DTM::ELEMENT_NODE == type || $DTM::DOCUMENT_FRAGMENT_NODE == type || $DTM::DOCUMENT_NODE == type) {
		return nullptr;
	} else {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(identity);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		return $cast($String, $nc(this->m_values)->get(dataIndex));
	}
}

void SAX2DTM2::copyTextNode(int32_t nodeID, $SerializationHandler* handler) {
	if (nodeID != $DTM::NULL) {
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(nodeID);
		if (dataIndex >= 0) {
			$nc(this->m_chars)->sendSAXcharacters(handler, $usr(dataIndex, SAX2DTM2::TEXT_LENGTH_BITS), (int32_t)(dataIndex & (uint32_t)SAX2DTM2::TEXT_LENGTH_MAX));
		} else {
			$var($ContentHandler, var$0, static_cast<$ContentHandler*>(handler));
			int32_t var$1 = $nc(this->m_data)->elementAt(-dataIndex);
			$nc(this->m_chars)->sendSAXcharacters(var$0, var$1, $nc(this->m_data)->elementAt(-dataIndex + 1));
		}
	}
}

$String* SAX2DTM2::copyElement(int32_t nodeID, int32_t exptype, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	$var($ExtendedType, extType, $nc(this->m_extendedTypes)->get(exptype));
	$var($String, uri, $nc(extType)->getNamespace());
	$var($String, name, extType->getLocalName());
	if ($nc(uri)->length() == 0) {
		$nc(handler)->startElement(name);
		return name;
	} else {
		int32_t qnameIndex = $nc(this->m_dataOrQName)->elementAt(nodeID);
		if (qnameIndex == 0) {
			$nc(handler)->startElement(name);
			handler->namespaceAfterStartElement(SAX2DTM2::EMPTY_STR, uri);
			return name;
		}
		if (qnameIndex < 0) {
			qnameIndex = -qnameIndex;
			qnameIndex = $nc(this->m_data)->elementAt(qnameIndex);
		}
		$var($String, qName, $nc(this->m_valuesOrPrefixes)->indexToString(qnameIndex));
		$nc(handler)->startElement(qName);
		int32_t prefixIndex = $nc(qName)->indexOf((int32_t)u':');
		$var($String, prefix, nullptr);
		if (prefixIndex > 0) {
			$assign(prefix, qName->substring(0, prefixIndex));
		} else {
			$assign(prefix, nullptr);
		}
		handler->namespaceAfterStartElement(prefix, uri);
		return qName;
	}
}

void SAX2DTM2::copyNS(int32_t nodeID, $SerializationHandler* handler, bool inScope) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = this->m_namespaceDeclSetElements != nullptr && $nc(this->m_namespaceDeclSetElements)->size() == 1 && this->m_namespaceDeclSets != nullptr;
	if (var$0 && $nc(($cast($SuballocatedIntVector, $($nc(this->m_namespaceDeclSets)->get(0)))))->size() == 1) {
		return;
	}
	$var($SuballocatedIntVector, nsContext, nullptr);
	int32_t nextNSNode = 0;
	if (inScope) {
		$assign(nsContext, findNamespaceContext(nodeID));
		if (nsContext == nullptr || $nc(nsContext)->size() < 1) {
			return;
		} else {
			nextNSNode = makeNodeIdentity(nsContext->elementAt(0));
		}
	} else {
		nextNSNode = getNextNamespaceNode2(nodeID);
	}
	int32_t nsIndex = 1;
	while (nextNSNode != $DTM::NULL) {
		int32_t eType = _exptype2(nextNSNode);
		$var($String, nodeName, $nc($nc(this->m_extendedTypes)->get(eType))->getLocalName());
		int32_t dataIndex = $nc(this->m_dataOrQName)->elementAt(nextNSNode);
		if (dataIndex < 0) {
			dataIndex = -dataIndex;
			dataIndex = $nc(this->m_data)->elementAt(dataIndex + 1);
		}
		$var($String, nodeValue, $cast($String, $nc(this->m_values)->get(dataIndex)));
		$nc(handler)->namespaceAfterStartElement(nodeName, nodeValue);
		if (inScope) {
			if (nsIndex < $nc(nsContext)->size()) {
				nextNSNode = makeNodeIdentity(nsContext->elementAt(nsIndex));
				++nsIndex;
			} else {
				return;
			}
		} else {
			nextNSNode = getNextNamespaceNode2(nextNSNode);
		}
	}
}

int32_t SAX2DTM2::getNextNamespaceNode2(int32_t baseID) {
	int32_t type = 0;
	while ((type = _type2(++baseID)) == $DTM::ATTRIBUTE_NODE) {
	}
	if (type == $DTM::NAMESPACE_NODE) {
		return baseID;
	} else {
		return $DTM::NULL;
	}
}

void SAX2DTM2::copyAttributes(int32_t nodeID, $SerializationHandler* handler) {
	for (int32_t current = getFirstAttributeIdentity(nodeID); current != $DTM::NULL; current = getNextAttributeIdentity(current)) {
		int32_t eType = _exptype2(current);
		copyAttribute(current, eType, handler);
	}
}

void SAX2DTM2::copyAttribute(int32_t nodeID, int32_t exptype, $SerializationHandler* handler) {
	$useLocalCurrentObjectStackCache();
	$var($ExtendedType, extType, $nc(this->m_extendedTypes)->get(exptype));
	$var($String, uri, $nc(extType)->getNamespace());
	$var($String, localName, extType->getLocalName());
	$var($String, prefix, nullptr);
	$var($String, qname, nullptr);
	int32_t dataIndex = _dataOrQName(nodeID);
	int32_t valueIndex = dataIndex;
	if (dataIndex <= 0) {
		int32_t prefixIndex = $nc(this->m_data)->elementAt(-dataIndex);
		valueIndex = $nc(this->m_data)->elementAt(-dataIndex + 1);
		$assign(qname, $nc(this->m_valuesOrPrefixes)->indexToString(prefixIndex));
		int32_t colonIndex = $nc(qname)->indexOf((int32_t)u':');
		if (colonIndex > 0) {
			$assign(prefix, qname->substring(0, colonIndex));
		}
	}
	if ($nc(uri)->length() != 0) {
		$nc(handler)->namespaceAfterStartElement(prefix, uri);
	}
	$var($String, nodeName, (prefix != nullptr) ? qname : localName);
	$var($String, nodeValue, $cast($String, $nc(this->m_values)->get(valueIndex)));
	$nc(handler)->addAttribute(uri, localName, nodeName, "CDATA"_s, nodeValue);
}

void clinit$SAX2DTM2($Class* class$) {
	$assignStatic(SAX2DTM2::EMPTY_STR, ""_s);
	$assignStatic(SAX2DTM2::EMPTY_XML_STR, $new($XMLStringDefault, ""_s));
}

SAX2DTM2::SAX2DTM2() {
}

$Class* SAX2DTM2::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2, name, initialize, &_SAX2DTM2_ClassInfo_, clinit$SAX2DTM2, allocate$SAX2DTM2);
	return class$;
}

$Class* SAX2DTM2::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com