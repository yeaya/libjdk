#include <com/sun/org/apache/xpath/internal/objects/XNodeSetForDOM.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XNodeSetForDOM_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNodeSetForDOM, serialVersionUID)},
	{"m_origObj", "Ljava/lang/Object;", nullptr, 0, $field(XNodeSetForDOM, m_origObj)},
	{}
};

$MethodInfo _XNodeSetForDOM_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xml/internal/dtm/DTMManager;)V", nullptr, $PUBLIC, $method(XNodeSetForDOM, init$, void, $Node*, $DTMManager*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/objects/XNodeSet;)V", nullptr, $PUBLIC, $method(XNodeSetForDOM, init$, void, $XNodeSet*)},
	{"<init>", "(Lorg/w3c/dom/NodeList;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(XNodeSetForDOM, init$, void, $NodeList*, $XPathContext*)},
	{"<init>", "(Lorg/w3c/dom/traversal/NodeIterator;Lcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(XNodeSetForDOM, init$, void, $NodeIterator*, $XPathContext*)},
	{"nodelist", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(XNodeSetForDOM, nodelist, $NodeList*), "javax.xml.transform.TransformerException"},
	{"nodeset", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(XNodeSetForDOM, nodeset, $NodeIterator*), "javax.xml.transform.TransformerException"},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XNodeSetForDOM, object, $Object*)},
	{}
};

$ClassInfo _XNodeSetForDOM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XNodeSetForDOM",
	"com.sun.org.apache.xpath.internal.objects.XNodeSet",
	nullptr,
	_XNodeSetForDOM_FieldInfo_,
	_XNodeSetForDOM_MethodInfo_
};

$Object* allocate$XNodeSetForDOM($Class* clazz) {
	return $of($alloc(XNodeSetForDOM));
}

void XNodeSetForDOM::init$($Node* node, $DTMManager* dtmMgr) {
	$XNodeSet::init$();
	$set(this, m_dtmMgr, dtmMgr);
	$set(this, m_origObj, node);
	int32_t dtmHandle = $nc(dtmMgr)->getDTMHandleFromNode(node);
	setObject($$new($NodeSetDTM, dtmMgr));
	$nc(($cast($NodeSetDTM, this->m_obj)))->addNode(dtmHandle);
}

void XNodeSetForDOM::init$($XNodeSet* val) {
	$XNodeSet::init$(val);
	if ($instanceOf(XNodeSetForDOM, val)) {
		$set(this, m_origObj, $nc(($cast(XNodeSetForDOM, val)))->m_origObj);
	}
}

void XNodeSetForDOM::init$($NodeList* nodeList, $XPathContext* xctxt) {
	$XNodeSet::init$();
	$set(this, m_dtmMgr, $nc(xctxt)->getDTMManager());
	$set(this, m_origObj, nodeList);
	$var($NodeSetDTM, nsdtm, $new($NodeSetDTM, nodeList, xctxt));
	this->m_last = nsdtm->getLength();
	setObject(nsdtm);
}

void XNodeSetForDOM::init$($NodeIterator* nodeIter, $XPathContext* xctxt) {
	$XNodeSet::init$();
	$set(this, m_dtmMgr, $nc(xctxt)->getDTMManager());
	$set(this, m_origObj, nodeIter);
	$var($NodeSetDTM, nsdtm, $new($NodeSetDTM, nodeIter, xctxt));
	this->m_last = nsdtm->getLength();
	setObject(nsdtm);
}

$Object* XNodeSetForDOM::object() {
	return $of(this->m_origObj);
}

$NodeIterator* XNodeSetForDOM::nodeset() {
	return ($instanceOf($NodeIterator, this->m_origObj)) ? $cast($NodeIterator, this->m_origObj) : $XNodeSet::nodeset();
}

$NodeList* XNodeSetForDOM::nodelist() {
	return ($instanceOf($NodeList, this->m_origObj)) ? $cast($NodeList, this->m_origObj) : $XNodeSet::nodelist();
}

XNodeSetForDOM::XNodeSetForDOM() {
}

$Class* XNodeSetForDOM::load$($String* name, bool initialize) {
	$loadClass(XNodeSetForDOM, name, initialize, &_XNodeSetForDOM_ClassInfo_, allocate$XNodeSetForDOM);
	return class$;
}

$Class* XNodeSetForDOM::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com