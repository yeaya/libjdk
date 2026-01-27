#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeList.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence$IteratorCache.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/objects/Comparator.h>
#include <com/sun/org/apache/xpath/internal/objects/EqualComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/GreaterThanComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/GreaterThanOrEqualComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/LessThanComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/LessThanOrEqualComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/NotEqualComparator.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NUMBER
#undef CLASS_RTREEFRAG
#undef CLASS_STRING
#undef EMPTYSTRING
#undef NULL
#undef S_EQ
#undef S_GT
#undef S_GTE
#undef S_LT
#undef S_LTE
#undef S_NEQ

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMNodeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeIterator;
using $DTMNodeList = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeList;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $Comparator = ::com::sun::org::apache::xpath::internal::objects::Comparator;
using $EqualComparator = ::com::sun::org::apache::xpath::internal::objects::EqualComparator;
using $GreaterThanComparator = ::com::sun::org::apache::xpath::internal::objects::GreaterThanComparator;
using $GreaterThanOrEqualComparator = ::com::sun::org::apache::xpath::internal::objects::GreaterThanOrEqualComparator;
using $LessThanComparator = ::com::sun::org::apache::xpath::internal::objects::LessThanComparator;
using $LessThanOrEqualComparator = ::com::sun::org::apache::xpath::internal::objects::LessThanOrEqualComparator;
using $NotEqualComparator = ::com::sun::org::apache::xpath::internal::objects::NotEqualComparator;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $NodeList = ::org::w3c::dom::NodeList;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XNodeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNodeSet, serialVersionUID)},
	{"S_LT", "Lcom/sun/org/apache/xpath/internal/objects/LessThanComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_LT)},
	{"S_LTE", "Lcom/sun/org/apache/xpath/internal/objects/LessThanOrEqualComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_LTE)},
	{"S_GT", "Lcom/sun/org/apache/xpath/internal/objects/GreaterThanComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_GT)},
	{"S_GTE", "Lcom/sun/org/apache/xpath/internal/objects/GreaterThanOrEqualComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_GTE)},
	{"S_EQ", "Lcom/sun/org/apache/xpath/internal/objects/EqualComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_EQ)},
	{"S_NEQ", "Lcom/sun/org/apache/xpath/internal/objects/NotEqualComparator;", nullptr, $STATIC | $FINAL, $staticField(XNodeSet, S_NEQ)},
	{}
};

$MethodInfo _XNodeSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(XNodeSet, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $method(XNodeSet, init$, void, $DTMIterator*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;)V", nullptr, $PUBLIC, $method(XNodeSet, init$, void, XNodeSet*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(XNodeSet, init$, void, $DTMManager*)},
	{"<init>", "(ILcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(XNodeSet, init$, void, int32_t, $DTMManager*)},
	{"appendToFsb", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(XNodeSet, appendToFsb, void, $FastStringBuffer*)},
	{"bool", "()Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, bool$, bool)},
	{"boolWithSideEffects", "()Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, boolWithSideEffects, bool)},
	{"compare", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/Comparator;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, compare, bool, $XObject*, $Comparator*), "javax.xml.transform.TransformerException"},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XNodeSet, dispatchCharactersEvents, void, $ContentHandler*), "org.xml.sax.SAXException"},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, equals, bool, $XObject*)},
	{"getFresh", "()Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, getFresh, $XObject*)},
	{"getNumberFromNode", "(I)D", nullptr, $PUBLIC, $virtualMethod(XNodeSet, getNumberFromNode, double, int32_t)},
	{"getStringFromNode", "(I)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, getStringFromNode, $XMLString*, int32_t)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(XNodeSet, getType, int32_t)},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, getTypeString, $String*)},
	{"greaterThan", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, greaterThan, bool, $XObject*), "javax.xml.transform.TransformerException"},
	{"greaterThanOrEqual", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, greaterThanOrEqual, bool, $XObject*), "javax.xml.transform.TransformerException"},
	{"iter", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, iter, $DTMIterator*)},
	{"iterRaw", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, iterRaw, $DTMIterator*)},
	{"lessThan", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, lessThan, bool, $XObject*), "javax.xml.transform.TransformerException"},
	{"lessThanOrEqual", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, lessThanOrEqual, bool, $XObject*), "javax.xml.transform.TransformerException"},
	{"mutableNodeset", "()Lcom/sun/org/apache/xpath/internal/NodeSetDTM;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, mutableNodeset, $NodeSetDTM*)},
	{"nodelist", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, nodelist, $NodeList*), "javax.xml.transform.TransformerException"},
	{"nodeset", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, nodeset, $NodeIterator*), "javax.xml.transform.TransformerException"},
	{"notEquals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNodeSet, notEquals, bool, $XObject*), "javax.xml.transform.TransformerException"},
	{"num", "()D", nullptr, $PUBLIC, $virtualMethod(XNodeSet, num, double)},
	{"numWithSideEffects", "()D", nullptr, $PUBLIC, $virtualMethod(XNodeSet, numWithSideEffects, double)},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, object, $Object*)},
	{"release", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $virtualMethod(XNodeSet, release, void, $DTMIterator*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, str, $String*)},
	{"xstr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XNodeSet, xstr, $XMLString*)},
	{}
};

$ClassInfo _XNodeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XNodeSet",
	"com.sun.org.apache.xpath.internal.axes.NodeSequence",
	nullptr,
	_XNodeSet_FieldInfo_,
	_XNodeSet_MethodInfo_
};

$Object* allocate$XNodeSet($Class* clazz) {
	return $of($alloc(XNodeSet));
}

$LessThanComparator* XNodeSet::S_LT = nullptr;
$LessThanOrEqualComparator* XNodeSet::S_LTE = nullptr;
$GreaterThanComparator* XNodeSet::S_GT = nullptr;
$GreaterThanOrEqualComparator* XNodeSet::S_GTE = nullptr;
$EqualComparator* XNodeSet::S_EQ = nullptr;
$NotEqualComparator* XNodeSet::S_NEQ = nullptr;

void XNodeSet::init$() {
	$NodeSequence::init$();
}

void XNodeSet::init$($DTMIterator* val) {
	$useLocalCurrentObjectStackCache();
	$NodeSequence::init$();
	if ($instanceOf(XNodeSet, val)) {
		$var(XNodeSet, nodeSet, $cast(XNodeSet, val));
		setIter($nc(nodeSet)->m_iter);
		$set(this, m_dtmMgr, $nc(nodeSet)->m_dtmMgr);
		this->m_last = nodeSet->m_last;
		if (!nodeSet->hasCache()) {
			nodeSet->setShouldCacheNodes(true);
		}
		setObject($(nodeSet->getIteratorCache()));
	} else {
		setIter(val);
	}
}

void XNodeSet::init$(XNodeSet* val) {
	$NodeSequence::init$();
	setIter($nc(val)->m_iter);
	$set(this, m_dtmMgr, $nc(val)->m_dtmMgr);
	this->m_last = val->m_last;
	if (!val->hasCache()) {
		val->setShouldCacheNodes(true);
	}
	setObject(val->m_obj);
}

void XNodeSet::init$($DTMManager* dtmMgr) {
	XNodeSet::init$($DTM::NULL, dtmMgr);
}

void XNodeSet::init$(int32_t n, $DTMManager* dtmMgr) {
	$NodeSequence::init$($of($$new($NodeSetDTM, dtmMgr)));
	$set(this, m_dtmMgr, dtmMgr);
	if ($DTM::NULL != n) {
		$nc(($cast($NodeSetDTM, this->m_obj)))->addNode(n);
		this->m_last = 1;
	} else {
		this->m_last = 0;
	}
}

int32_t XNodeSet::getType() {
	return $XObject::CLASS_NODESET;
}

$String* XNodeSet::getTypeString() {
	return "#NODESET"_s;
}

double XNodeSet::getNumberFromNode(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($XMLString, xstr, $nc($($nc(this->m_dtmMgr)->getDTM(n)))->getStringValue(n));
	return $nc(xstr)->toDouble();
}

double XNodeSet::num() {
	int32_t node = item(0);
	$init($Double);
	return (node != $DTM::NULL) ? getNumberFromNode(node) : $Double::NaN;
}

double XNodeSet::numWithSideEffects() {
	int32_t node = nextNode();
	$init($Double);
	return (node != $DTM::NULL) ? getNumberFromNode(node) : $Double::NaN;
}

bool XNodeSet::bool$() {
	return (item(0) != $DTM::NULL);
}

bool XNodeSet::boolWithSideEffects() {
	return (nextNode() != $DTM::NULL);
}

$XMLString* XNodeSet::getStringFromNode(int32_t n) {
	if ($DTM::NULL != n) {
		return $nc($($nc(this->m_dtmMgr)->getDTM(n)))->getStringValue(n);
	} else {
		$init($XString);
		return $XString::EMPTYSTRING;
	}
}

void XNodeSet::dispatchCharactersEvents($ContentHandler* ch) {
	int32_t node = item(0);
	if (node != $DTM::NULL) {
		$nc($($nc(this->m_dtmMgr)->getDTM(node)))->dispatchCharactersEvents(node, ch, false);
	}
}

$XMLString* XNodeSet::xstr() {
	int32_t node = item(0);
	$init($XString);
	return (node != $DTM::NULL) ? getStringFromNode(node) : static_cast<$XMLString*>($XString::EMPTYSTRING);
}

void XNodeSet::appendToFsb($FastStringBuffer* fsb) {
	$var($XString, xstring, $cast($XString, xstr()));
	$nc(xstring)->appendToFsb(fsb);
}

$String* XNodeSet::str() {
	int32_t node = item(0);
	return (node != $DTM::NULL) ? $nc($(getStringFromNode(node)))->toString() : ""_s;
}

$Object* XNodeSet::object() {
	if (nullptr == this->m_obj) {
		return $of(this);
	} else {
		return $of(this->m_obj);
	}
}

$NodeIterator* XNodeSet::nodeset() {
	return $new($DTMNodeIterator, $(iter()));
}

$NodeList* XNodeSet::nodelist() {
	$useLocalCurrentObjectStackCache();
	$var($DTMNodeList, nodelist, $new($DTMNodeList, this));
	$var(XNodeSet, clone, $cast(XNodeSet, nodelist->getDTMIterator()));
	SetVector($($nc(clone)->getVector()));
	return nodelist;
}

$DTMIterator* XNodeSet::iterRaw() {
	return this;
}

void XNodeSet::release($DTMIterator* iter) {
}

$DTMIterator* XNodeSet::iter() {
	try {
		if (hasCache()) {
			return cloneWithReset();
		} else {
			return this;
		}
	} catch ($CloneNotSupportedException& cnse) {
		$throwNew($RuntimeException, $(cnse->getMessage()));
	}
	$shouldNotReachHere();
}

$XObject* XNodeSet::getFresh() {
	try {
		if (hasCache()) {
			return $cast($XObject, cloneWithReset());
		} else {
			return this;
		}
	} catch ($CloneNotSupportedException& cnse) {
		$throwNew($RuntimeException, $(cnse->getMessage()));
	}
	$shouldNotReachHere();
}

$NodeSetDTM* XNodeSet::mutableNodeset() {
	$useLocalCurrentObjectStackCache();
	$var($NodeSetDTM, mnl, nullptr);
	if ($instanceOf($NodeSetDTM, this->m_obj)) {
		$assign(mnl, $cast($NodeSetDTM, this->m_obj));
	} else {
		$assign(mnl, $new($NodeSetDTM, $(iter())));
		setObject(mnl);
		setCurrentPos(0);
	}
	return mnl;
}

bool XNodeSet::compare($XObject* obj2, $Comparator* comparator) {
	$useLocalCurrentObjectStackCache();
	bool result = false;
	int32_t type = $nc(obj2)->getType();
	if ($XObject::CLASS_NODESET == type) {
		$var($DTMIterator, list1, iterRaw());
		$var($DTMIterator, list2, $nc(($cast(XNodeSet, obj2)))->iterRaw());
		int32_t node1 = 0;
		$var($List, node2Strings, nullptr);
		while ($DTM::NULL != (node1 = $nc(list1)->nextNode())) {
			$var($XMLString, s1, getStringFromNode(node1));
			if (nullptr == node2Strings) {
				int32_t node2 = 0;
				while ($DTM::NULL != (node2 = $nc(list2)->nextNode())) {
					$var($XMLString, s2, getStringFromNode(node2));
					if ($nc(comparator)->compareStrings(s1, s2)) {
						result = true;
						break;
					}
					if (nullptr == node2Strings) {
						$assign(node2Strings, $new($ArrayList));
					}
					$nc(node2Strings)->add(s2);
				}
			} else {
				int32_t n = $nc(node2Strings)->size();
				for (int32_t i = 0; i < n; ++i) {
					if ($nc(comparator)->compareStrings(s1, $cast($XMLString, $(node2Strings->get(i))))) {
						result = true;
						break;
					}
				}
			}
		}
		$nc(list1)->reset();
		$nc(list2)->reset();
	} else if ($XObject::CLASS_BOOLEAN == type) {
		double num1 = bool$() ? 1.0 : 0.0;
		double num2 = obj2->num();
		result = $nc(comparator)->compareNumbers(num1, num2);
	} else if ($XObject::CLASS_NUMBER == type) {
		$var($DTMIterator, list1, iterRaw());
		double num2 = obj2->num();
		int32_t node = 0;
		while ($DTM::NULL != (node = $nc(list1)->nextNode())) {
			double num1 = getNumberFromNode(node);
			if ($nc(comparator)->compareNumbers(num1, num2)) {
				result = true;
				break;
			}
		}
		$nc(list1)->reset();
	} else if ($XObject::CLASS_RTREEFRAG == type) {
		$var($XMLString, s2, obj2->xstr());
		$var($DTMIterator, list1, iterRaw());
		int32_t node = 0;
		while ($DTM::NULL != (node = $nc(list1)->nextNode())) {
			$var($XMLString, s1, getStringFromNode(node));
			if ($nc(comparator)->compareStrings(s1, s2)) {
				result = true;
				break;
			}
		}
		$nc(list1)->reset();
	} else if ($XObject::CLASS_STRING == type) {
		$var($XMLString, s2, obj2->xstr());
		$var($DTMIterator, list1, iterRaw());
		int32_t node = 0;
		while ($DTM::NULL != (node = $nc(list1)->nextNode())) {
			$var($XMLString, s1, getStringFromNode(node));
			if ($nc(comparator)->compareStrings(s1, s2)) {
				result = true;
				break;
			}
		}
		$nc(list1)->reset();
	} else {
		double var$0 = this->num();
		result = $nc(comparator)->compareNumbers(var$0, obj2->num());
	}
	return result;
}

bool XNodeSet::lessThan($XObject* obj2) {
	return compare(obj2, XNodeSet::S_LT);
}

bool XNodeSet::lessThanOrEqual($XObject* obj2) {
	return compare(obj2, XNodeSet::S_LTE);
}

bool XNodeSet::greaterThan($XObject* obj2) {
	return compare(obj2, XNodeSet::S_GT);
}

bool XNodeSet::greaterThanOrEqual($XObject* obj2) {
	return compare(obj2, XNodeSet::S_GTE);
}

bool XNodeSet::equals($XObject* obj2) {
	try {
		return compare(obj2, XNodeSet::S_EQ);
	} catch ($TransformerException& te) {
		$throwNew($WrappedRuntimeException, te);
	}
	$shouldNotReachHere();
}

bool XNodeSet::notEquals($XObject* obj2) {
	return compare(obj2, XNodeSet::S_NEQ);
}

void clinit$XNodeSet($Class* class$) {
	$assignStatic(XNodeSet::S_LT, $new($LessThanComparator));
	$assignStatic(XNodeSet::S_LTE, $new($LessThanOrEqualComparator));
	$assignStatic(XNodeSet::S_GT, $new($GreaterThanComparator));
	$assignStatic(XNodeSet::S_GTE, $new($GreaterThanOrEqualComparator));
	$assignStatic(XNodeSet::S_EQ, $new($EqualComparator));
	$assignStatic(XNodeSet::S_NEQ, $new($NotEqualComparator));
}

XNodeSet::XNodeSet() {
}

$Class* XNodeSet::load$($String* name, bool initialize) {
	$loadClass(XNodeSet, name, initialize, &_XNodeSet_ClassInfo_, clinit$XNodeSet, allocate$XNodeSet);
	return class$;
}

$Class* XNodeSet::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com