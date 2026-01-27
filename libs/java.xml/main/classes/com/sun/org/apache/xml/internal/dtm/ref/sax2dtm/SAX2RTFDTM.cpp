#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2RTFDTM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <com/sun/org/apache/xml/internal/utils/IntVector.h>
#include <com/sun/org/apache/xml/internal/utils/StringVector.h>
#include <com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <java/util/Vector.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

#undef DEBUG
#undef DOCUMENT_NODE
#undef NOTPROCESSED
#undef NULL
#undef SAX2RTFDTM

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $IntStack = ::com::sun::org::apache::xml::internal::utils::IntStack;
using $IntVector = ::com::sun::org::apache::xml::internal::utils::IntVector;
using $StringVector = ::com::sun::org::apache::xml::internal::utils::StringVector;
using $SuballocatedIntVector = ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Vector = ::java::util::Vector;
using $Source = ::javax::xml::transform::Source;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

$FieldInfo _SAX2RTFDTM_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2RTFDTM, DEBUG)},
	{"m_currentDocumentNode", "I", nullptr, $PRIVATE, $field(SAX2RTFDTM, m_currentDocumentNode)},
	{"mark_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_size)},
	{"mark_data_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_data_size)},
	{"mark_char_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_char_size)},
	{"mark_doq_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_doq_size)},
	{"mark_nsdeclset_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_nsdeclset_size)},
	{"mark_nsdeclelem_size", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(SAX2RTFDTM, mark_nsdeclelem_size)},
	{"m_emptyNodeCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyNodeCount)},
	{"m_emptyNSDeclSetCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyNSDeclSetCount)},
	{"m_emptyNSDeclSetElemsCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyNSDeclSetElemsCount)},
	{"m_emptyDataCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyDataCount)},
	{"m_emptyCharsCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyCharsCount)},
	{"m_emptyDataQNCount", "I", nullptr, 0, $field(SAX2RTFDTM, m_emptyDataQNCount)},
	{}
};

$MethodInfo _SAX2RTFDTM_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(SAX2RTFDTM, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"_documentRoot", "(I)I", nullptr, $PROTECTED, $virtualMethod(SAX2RTFDTM, _documentRoot, int32_t, int32_t)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, endDocument, void), "org.xml.sax.SAXException"},
	{"getDocument", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, getDocument, int32_t)},
	{"getDocumentRoot", "(I)I", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, getDocumentRoot, int32_t, int32_t)},
	{"isTreeIncomplete", "()Z", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, isTreeIncomplete, bool)},
	{"popRewindMark", "()Z", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, popRewindMark, bool)},
	{"pushRewindMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, pushRewindMark, void)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2RTFDTM, startDocument, void), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _SAX2RTFDTM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2RTFDTM",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM",
	nullptr,
	_SAX2RTFDTM_FieldInfo_,
	_SAX2RTFDTM_MethodInfo_
};

$Object* allocate$SAX2RTFDTM($Class* clazz) {
	return $of($alloc(SAX2RTFDTM));
}

void SAX2RTFDTM::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	$SAX2DTM::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing);
	this->m_currentDocumentNode = $DTM::NULL;
	$set(this, mark_size, $new($IntStack));
	$set(this, mark_data_size, $new($IntStack));
	$set(this, mark_char_size, $new($IntStack));
	$set(this, mark_doq_size, $new($IntStack));
	$set(this, mark_nsdeclset_size, $new($IntStack));
	$set(this, mark_nsdeclelem_size, $new($IntStack));
	this->m_useSourceLocationProperty = false;
	$set(this, m_sourceSystemId, (this->m_useSourceLocationProperty) ? $new($StringVector) : ($StringVector*)nullptr);
	$set(this, m_sourceLine, (this->m_useSourceLocationProperty) ? $new($IntVector) : ($IntVector*)nullptr);
	$set(this, m_sourceColumn, (this->m_useSourceLocationProperty) ? $new($IntVector) : ($IntVector*)nullptr);
	this->m_emptyNodeCount = this->m_size;
	this->m_emptyNSDeclSetCount = (this->m_namespaceDeclSets == nullptr) ? 0 : $nc(this->m_namespaceDeclSets)->size();
	this->m_emptyNSDeclSetElemsCount = (this->m_namespaceDeclSetElements == nullptr) ? 0 : $nc(this->m_namespaceDeclSetElements)->size();
	this->m_emptyDataCount = $nc(this->m_data)->size();
	this->m_emptyCharsCount = $nc(this->m_chars)->size();
	this->m_emptyDataQNCount = $nc(this->m_dataOrQName)->size();
}

int32_t SAX2RTFDTM::getDocument() {
	return makeNodeHandle(this->m_currentDocumentNode);
}

int32_t SAX2RTFDTM::getDocumentRoot(int32_t nodeHandle) {
	for (int32_t id = makeNodeIdentity(nodeHandle); id != $DTM::NULL; id = _parent(id)) {
		if (_type(id) == $DTM::DOCUMENT_NODE) {
			return makeNodeHandle(id);
		}
	}
	return $DTM::NULL;
}

int32_t SAX2RTFDTM::_documentRoot(int32_t nodeIdentifier) {
	if (nodeIdentifier == $DTM::NULL) {
		return $DTM::NULL;
	}
	for (int32_t parent = _parent(nodeIdentifier); parent != $DTM::NULL; nodeIdentifier = parent, parent = _parent(nodeIdentifier)) {
	}
	return nodeIdentifier;
}

void SAX2RTFDTM::startDocument() {
	this->m_endDocumentOccured = false;
	$set(this, m_prefixMappings, $new($Vector));
	$set(this, m_contextIndexes, $new($IntStack));
	$set(this, m_parents, $new($IntStack));
	this->m_currentDocumentNode = this->m_size;
	$SAX2DTM::startDocument();
}

void SAX2RTFDTM::endDocument() {
	charactersFlush();
	$nc(this->m_nextsib)->setElementAt($DTM::NULL, this->m_currentDocumentNode);
	if ($nc(this->m_firstch)->elementAt(this->m_currentDocumentNode) == $DTMDefaultBase::NOTPROCESSED) {
		$nc(this->m_firstch)->setElementAt($DTM::NULL, this->m_currentDocumentNode);
	}
	if ($DTM::NULL != this->m_previous) {
		$nc(this->m_nextsib)->setElementAt($DTM::NULL, this->m_previous);
	}
	$set(this, m_parents, nullptr);
	$set(this, m_prefixMappings, nullptr);
	$set(this, m_contextIndexes, nullptr);
	this->m_currentDocumentNode = $DTM::NULL;
	this->m_endDocumentOccured = true;
}

void SAX2RTFDTM::pushRewindMark() {
	if (this->m_indexing || this->m_elemIndexes != nullptr) {
		$throwNew($NullPointerException, "Coding error; Don\'t try to mark/rewind an indexed DTM"_s);
	}
	$nc(this->mark_size)->push(this->m_size);
	$nc(this->mark_nsdeclset_size)->push((this->m_namespaceDeclSets == nullptr) ? 0 : $nc(this->m_namespaceDeclSets)->size());
	$nc(this->mark_nsdeclelem_size)->push((this->m_namespaceDeclSetElements == nullptr) ? 0 : $nc(this->m_namespaceDeclSetElements)->size());
	$nc(this->mark_data_size)->push($nc(this->m_data)->size());
	$nc(this->mark_char_size)->push($nc(this->m_chars)->size());
	$nc(this->mark_doq_size)->push($nc(this->m_dataOrQName)->size());
}

bool SAX2RTFDTM::popRewindMark() {
	bool top = $nc(this->mark_size)->empty();
	this->m_size = top ? this->m_emptyNodeCount : $nc(this->mark_size)->pop();
	$nc(this->m_exptype)->setSize(this->m_size);
	$nc(this->m_firstch)->setSize(this->m_size);
	$nc(this->m_nextsib)->setSize(this->m_size);
	$nc(this->m_prevsib)->setSize(this->m_size);
	$nc(this->m_parent)->setSize(this->m_size);
	$set(this, m_elemIndexes, nullptr);
	int32_t ds = top ? this->m_emptyNSDeclSetCount : $nc(this->mark_nsdeclset_size)->pop();
	if (this->m_namespaceDeclSets != nullptr) {
		$nc(this->m_namespaceDeclSets)->setSize(ds);
	}
	int32_t ds1 = top ? this->m_emptyNSDeclSetElemsCount : $nc(this->mark_nsdeclelem_size)->pop();
	if (this->m_namespaceDeclSetElements != nullptr) {
		$nc(this->m_namespaceDeclSetElements)->setSize(ds1);
	}
	$nc(this->m_data)->setSize(top ? this->m_emptyDataCount : $nc(this->mark_data_size)->pop());
	$nc(this->m_chars)->setLength(top ? this->m_emptyCharsCount : $nc(this->mark_char_size)->pop());
	$nc(this->m_dataOrQName)->setSize(top ? this->m_emptyDataQNCount : $nc(this->mark_doq_size)->pop());
	return this->m_size == 0;
}

bool SAX2RTFDTM::isTreeIncomplete() {
	return !this->m_endDocumentOccured;
}

SAX2RTFDTM::SAX2RTFDTM() {
}

$Class* SAX2RTFDTM::load$($String* name, bool initialize) {
	$loadClass(SAX2RTFDTM, name, initialize, &_SAX2RTFDTM_ClassInfo_, allocate$SAX2RTFDTM);
	return class$;
}

$Class* SAX2RTFDTM::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com