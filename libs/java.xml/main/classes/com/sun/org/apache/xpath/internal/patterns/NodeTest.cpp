#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef ENTITY_REFERENCE_NODE
#undef MATCH_SCORE_NODETEST
#undef MATCH_SCORE_NONE
#undef MATCH_SCORE_NSWILD
#undef MATCH_SCORE_OTHER
#undef MATCH_SCORE_QNAME
#undef NAMESPACE_NODE
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef SCORE_NODETEST
#undef SCORE_NONE
#undef SCORE_NSWILD
#undef SCORE_OTHER
#undef SCORE_QNAME
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_BYFUNCTION
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_DOCUMENT_TYPE
#undef SHOW_ELEMENT
#undef SHOW_ENTITY
#undef SHOW_ENTITY_REFERENCE
#undef SHOW_NAMESPACE
#undef SHOW_NOTATION
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT
#undef SUPPORTS_PRE_STRIPPING
#undef TEXT_NODE
#undef WILD

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

$FieldInfo _NodeTest_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NodeTest, serialVersionUID)},
	{"WILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, WILD)},
	{"SUPPORTS_PRE_STRIPPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SUPPORTS_PRE_STRIPPING)},
	{"m_whatToShow", "I", nullptr, $PROTECTED, $field(NodeTest, m_whatToShow)},
	{"SHOW_BYFUNCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, SHOW_BYFUNCTION)},
	{"m_namespace", "Ljava/lang/String;", nullptr, 0, $field(NodeTest, m_namespace)},
	{"m_name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeTest, m_name)},
	{"m_score", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, 0, $field(NodeTest, m_score)},
	{"SCORE_NODETEST", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SCORE_NODETEST)},
	{"SCORE_NSWILD", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SCORE_NSWILD)},
	{"SCORE_QNAME", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SCORE_QNAME)},
	{"SCORE_OTHER", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SCORE_OTHER)},
	{"SCORE_NONE", "Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NodeTest, SCORE_NONE)},
	{"m_isTotallyWild", "Z", nullptr, $PRIVATE, $field(NodeTest, m_isTotallyWild)},
	{}
};

$MethodInfo _NodeTest_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NodeTest, init$, void, int32_t, $String*, $String*)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(NodeTest, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeTest, init$, void)},
	{"calcScore", "()V", nullptr, $PROTECTED, $virtualMethod(NodeTest, calcScore, void)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"debugWhatToShow", "(I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeTest, debugWhatToShow, void, int32_t)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(NodeTest, deepEquals, bool, $Expression*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(NodeTest, execute, $XObject*, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/dtm/DTM;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(NodeTest, execute, $XObject*, $XPathContext*, int32_t, $DTM*, int32_t), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(NodeTest, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(NodeTest, fixupVariables, void, $List*, int32_t)},
	{"getDefaultScore", "()D", nullptr, $PUBLIC, $virtualMethod(NodeTest, getDefaultScore, double)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeTest, getLocalName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeTest, getNamespace, $String*)},
	{"getNodeTypeTest", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeTest, getNodeTypeTest, int32_t, int32_t)},
	{"getStaticScore", "()Lcom/sun/org/apache/xpath/internal/objects/XNumber;", nullptr, $PUBLIC, $virtualMethod(NodeTest, getStaticScore, $XNumber*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(NodeTest, getWhatToShow, int32_t)},
	{"initNodeTest", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, initNodeTest, void, int32_t)},
	{"initNodeTest", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, initNodeTest, void, int32_t, $String*, $String*)},
	{"setLocalName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, setLocalName, void, $String*)},
	{"setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, setNamespace, void, $String*)},
	{"setStaticScore", "(Lcom/sun/org/apache/xpath/internal/objects/XNumber;)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, setStaticScore, void, $XNumber*)},
	{"setWhatToShow", "(I)V", nullptr, $PUBLIC, $virtualMethod(NodeTest, setWhatToShow, void, int32_t)},
	{"subPartMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(NodeTest, subPartMatch, bool, $String*, $String*)},
	{"subPartMatchNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(NodeTest, subPartMatchNS, bool, $String*, $String*)},
	{}
};

$ClassInfo _NodeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.NodeTest",
	"com.sun.org.apache.xpath.internal.Expression",
	nullptr,
	_NodeTest_FieldInfo_,
	_NodeTest_MethodInfo_
};

$Object* allocate$NodeTest($Class* clazz) {
	return $of($alloc(NodeTest));
}

$String* NodeTest::WILD = nullptr;
$String* NodeTest::SUPPORTS_PRE_STRIPPING = nullptr;
$XNumber* NodeTest::SCORE_NODETEST = nullptr;
$XNumber* NodeTest::SCORE_NSWILD = nullptr;
$XNumber* NodeTest::SCORE_QNAME = nullptr;
$XNumber* NodeTest::SCORE_OTHER = nullptr;
$XNumber* NodeTest::SCORE_NONE = nullptr;

int32_t NodeTest::getWhatToShow() {
	return this->m_whatToShow;
}

void NodeTest::setWhatToShow(int32_t what) {
	this->m_whatToShow = what;
}

$String* NodeTest::getNamespace() {
	return this->m_namespace;
}

void NodeTest::setNamespace($String* ns) {
	$set(this, m_namespace, ns);
}

$String* NodeTest::getLocalName() {
	return (nullptr == this->m_name) ? ""_s : this->m_name;
}

void NodeTest::setLocalName($String* name) {
	$set(this, m_name, name);
}

void NodeTest::init$(int32_t whatToShow, $String* namespace$, $String* name) {
	$Expression::init$();
	initNodeTest(whatToShow, namespace$, name);
}

void NodeTest::init$(int32_t whatToShow) {
	$Expression::init$();
	initNodeTest(whatToShow);
}

bool NodeTest::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	$var(NodeTest, nt, $cast(NodeTest, expr));
	if (nullptr != $nc(nt)->m_name) {
		if (nullptr == this->m_name) {
			return false;
		} else if (!$nc(nt->m_name)->equals(this->m_name)) {
			return false;
		}
	} else if (nullptr != this->m_name) {
		return false;
	}
	if (nullptr != $nc(nt)->m_namespace) {
		if (nullptr == this->m_namespace) {
			return false;
		} else if (!$nc(nt->m_namespace)->equals(this->m_namespace)) {
			return false;
		}
	} else if (nullptr != this->m_namespace) {
		return false;
	}
	if (this->m_whatToShow != $nc(nt)->m_whatToShow) {
		return false;
	}
	if (this->m_isTotallyWild != $nc(nt)->m_isTotallyWild) {
		return false;
	}
	return true;
}

void NodeTest::init$() {
	$Expression::init$();
}

void NodeTest::initNodeTest(int32_t whatToShow) {
	this->m_whatToShow = whatToShow;
	calcScore();
}

void NodeTest::initNodeTest(int32_t whatToShow, $String* namespace$, $String* name) {
	this->m_whatToShow = whatToShow;
	$set(this, m_namespace, namespace$);
	$set(this, m_name, name);
	calcScore();
}

$XNumber* NodeTest::getStaticScore() {
	return this->m_score;
}

void NodeTest::setStaticScore($XNumber* score) {
	$set(this, m_score, score);
}

void NodeTest::calcScore() {
	if ((this->m_namespace == nullptr) && (this->m_name == nullptr)) {
		$set(this, m_score, NodeTest::SCORE_NODETEST);
	} else if (((this->m_namespace == NodeTest::WILD) || (this->m_namespace == nullptr)) && (this->m_name == NodeTest::WILD)) {
		$set(this, m_score, NodeTest::SCORE_NODETEST);
	} else if ((this->m_namespace != NodeTest::WILD) && (this->m_name == NodeTest::WILD)) {
		$set(this, m_score, NodeTest::SCORE_NSWILD);
	} else {
		$set(this, m_score, NodeTest::SCORE_QNAME);
	}
	this->m_isTotallyWild = (this->m_namespace == nullptr && this->m_name == NodeTest::WILD);
}

double NodeTest::getDefaultScore() {
	return $nc(this->m_score)->num();
}

int32_t NodeTest::getNodeTypeTest(int32_t whatToShow) {
	$init(NodeTest);
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ELEMENT))) {
		return $DTM::ELEMENT_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ATTRIBUTE))) {
		return $DTM::ATTRIBUTE_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_TEXT))) {
		return $DTM::TEXT_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT))) {
		return $DTM::DOCUMENT_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT_FRAGMENT))) {
		return $DTM::DOCUMENT_FRAGMENT_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_NAMESPACE))) {
		return $DTM::NAMESPACE_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_COMMENT))) {
		return $DTM::COMMENT_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_PROCESSING_INSTRUCTION))) {
		return $DTM::PROCESSING_INSTRUCTION_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT_TYPE))) {
		return $DTM::DOCUMENT_TYPE_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ENTITY))) {
		return $DTM::ENTITY_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ENTITY_REFERENCE))) {
		return $DTM::ENTITY_REFERENCE_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_NOTATION))) {
		return $DTM::NOTATION_NODE;
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_CDATA_SECTION))) {
		return $DTM::CDATA_SECTION_NODE;
	}
	return 0;
}

void NodeTest::debugWhatToShow(int32_t whatToShow) {
	$init(NodeTest);
	$useLocalCurrentObjectStackCache();
	$var($List, v, $new($ArrayList));
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ATTRIBUTE))) {
		v->add("SHOW_ATTRIBUTE"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_NAMESPACE))) {
		v->add("SHOW_NAMESPACE"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_CDATA_SECTION))) {
		v->add("SHOW_CDATA_SECTION"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_COMMENT))) {
		v->add("SHOW_COMMENT"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT))) {
		v->add("SHOW_DOCUMENT"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT_FRAGMENT))) {
		v->add("SHOW_DOCUMENT_FRAGMENT"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_DOCUMENT_TYPE))) {
		v->add("SHOW_DOCUMENT_TYPE"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ELEMENT))) {
		v->add("SHOW_ELEMENT"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ENTITY))) {
		v->add("SHOW_ENTITY"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_ENTITY_REFERENCE))) {
		v->add("SHOW_ENTITY_REFERENCE"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_NOTATION))) {
		v->add("SHOW_NOTATION"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_PROCESSING_INSTRUCTION))) {
		v->add("SHOW_PROCESSING_INSTRUCTION"_s);
	}
	if (0 != ((int32_t)(whatToShow & (uint32_t)$DTMFilter::SHOW_TEXT))) {
		v->add("SHOW_TEXT"_s);
	}
	int32_t n = v->size();
	for (int32_t i = 0; i < n; ++i) {
		if (i > 0) {
			$nc($System::out)->print(" | "_s);
		}
		$nc($System::out)->print($cast($String, $(v->get(i))));
	}
	if (0 == n) {
		$nc($System::out)->print($$str({"empty whatToShow: "_s, $$str(whatToShow)}));
	}
	$nc($System::out)->println();
}

bool NodeTest::subPartMatch($String* p, $String* t) {
	$init(NodeTest);
	return (p == t) || ((nullptr != p) && ((t == NodeTest::WILD) || $nc(p)->equals(t)));
}

bool NodeTest::subPartMatchNS($String* p, $String* t) {
	$init(NodeTest);
	return (p == t) || ((nullptr != p) && ((p->length() > 0) ? ((t == NodeTest::WILD) || $nc(p)->equals(t)) : nullptr == t));
}

$XObject* NodeTest::execute($XPathContext* xctxt, int32_t context) {
	$useLocalCurrentObjectStackCache();
	$var($DTM, dtm, $nc(xctxt)->getDTM(context));
	int16_t nodeType = $nc(dtm)->getNodeType(context);
	if (this->m_whatToShow == $DTMFilter::SHOW_ALL) {
		return this->m_score;
	}
	int32_t nodeBit = ((int32_t)(this->m_whatToShow & (uint32_t)($sl(1, nodeType - 1))));
	switch (nodeBit) {
	case $DTMFilter::SHOW_DOCUMENT_FRAGMENT:
		{}
	case $DTMFilter::SHOW_DOCUMENT:
		{
			return NodeTest::SCORE_OTHER;
		}
	case $DTMFilter::SHOW_COMMENT:
		{
			return this->m_score;
		}
	case $DTMFilter::SHOW_CDATA_SECTION:
		{}
	case $DTMFilter::SHOW_TEXT:
		{
			return this->m_score;
		}
	case $DTMFilter::SHOW_PROCESSING_INSTRUCTION:
		{
			return subPartMatch($(dtm->getNodeName(context)), this->m_name) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
		}
	case $DTMFilter::SHOW_NAMESPACE:
		{
			{
				$var($String, ns, dtm->getLocalName(context));
				return (subPartMatch(ns, this->m_name)) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
			}
		}
	case $DTMFilter::SHOW_ATTRIBUTE:
		{}
	case $DTMFilter::SHOW_ELEMENT:
		{
			{
				bool var$0 = this->m_isTotallyWild;
				if (!var$0) {
					bool var$1 = subPartMatchNS($(dtm->getNamespaceURI(context)), this->m_namespace);
					var$0 = (var$1 && subPartMatch($(dtm->getLocalName(context)), this->m_name));
				}
				return (var$0) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
			}
		}
	default:
		{
			return NodeTest::SCORE_NONE;
		}
	}
}

$XObject* NodeTest::execute($XPathContext* xctxt, int32_t context, $DTM* dtm, int32_t expType) {
	$useLocalCurrentObjectStackCache();
	if (this->m_whatToShow == $DTMFilter::SHOW_ALL) {
		return this->m_score;
	}
	int32_t nodeBit = ((int32_t)(this->m_whatToShow & (uint32_t)($sl(1, ($nc(dtm)->getNodeType(context)) - 1))));
	switch (nodeBit) {
	case $DTMFilter::SHOW_DOCUMENT_FRAGMENT:
		{}
	case $DTMFilter::SHOW_DOCUMENT:
		{
			return NodeTest::SCORE_OTHER;
		}
	case $DTMFilter::SHOW_COMMENT:
		{
			return this->m_score;
		}
	case $DTMFilter::SHOW_CDATA_SECTION:
		{}
	case $DTMFilter::SHOW_TEXT:
		{
			return this->m_score;
		}
	case $DTMFilter::SHOW_PROCESSING_INSTRUCTION:
		{
			return subPartMatch($(dtm->getNodeName(context)), this->m_name) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
		}
	case $DTMFilter::SHOW_NAMESPACE:
		{
			{
				$var($String, ns, dtm->getLocalName(context));
				return (subPartMatch(ns, this->m_name)) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
			}
		}
	case $DTMFilter::SHOW_ATTRIBUTE:
		{}
	case $DTMFilter::SHOW_ELEMENT:
		{
			{
				bool var$0 = this->m_isTotallyWild;
				if (!var$0) {
					bool var$1 = subPartMatchNS($(dtm->getNamespaceURI(context)), this->m_namespace);
					var$0 = (var$1 && subPartMatch($(dtm->getLocalName(context)), this->m_name));
				}
				return (var$0) ? static_cast<$XObject*>(this->m_score) : static_cast<$XObject*>(NodeTest::SCORE_NONE);
			}
		}
	default:
		{
			return NodeTest::SCORE_NONE;
		}
	}
}

$XObject* NodeTest::execute($XPathContext* xctxt) {
	return execute(xctxt, $nc(xctxt)->getCurrentNode());
}

void NodeTest::fixupVariables($List* vars, int32_t globalsSize) {
}

void NodeTest::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	assertion(false, "callVisitors should not be called for this object!!!"_s);
}

void clinit$NodeTest($Class* class$) {
	$assignStatic(NodeTest::WILD, "*"_s);
	$assignStatic(NodeTest::SUPPORTS_PRE_STRIPPING, "http://xml.apache.org/xpath/features/whitespace-pre-stripping"_s);
	$init($XPath);
	$assignStatic(NodeTest::SCORE_NODETEST, $new($XNumber, $XPath::MATCH_SCORE_NODETEST));
	$assignStatic(NodeTest::SCORE_NSWILD, $new($XNumber, $XPath::MATCH_SCORE_NSWILD));
	$assignStatic(NodeTest::SCORE_QNAME, $new($XNumber, $XPath::MATCH_SCORE_QNAME));
	$assignStatic(NodeTest::SCORE_OTHER, $new($XNumber, $XPath::MATCH_SCORE_OTHER));
	$assignStatic(NodeTest::SCORE_NONE, $new($XNumber, $XPath::MATCH_SCORE_NONE));
}

NodeTest::NodeTest() {
}

$Class* NodeTest::load$($String* name, bool initialize) {
	$loadClass(NodeTest, name, initialize, &_NodeTest_ClassInfo_, clinit$NodeTest, allocate$NodeTest);
	return class$;
}

$Class* NodeTest::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com