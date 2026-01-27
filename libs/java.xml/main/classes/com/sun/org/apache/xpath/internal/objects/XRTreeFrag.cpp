#include <com/sun/org/apache/xpath/internal/objects/XRTreeFrag.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeList.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/RTFIterator.h>
#include <com/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NUMBER
#undef CLASS_RTREEFRAG
#undef CLASS_STRING
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMNodeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeIterator;
using $DTMNodeList = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeList;
using $DTMNodeListBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $RTFIterator = ::com::sun::org::apache::xpath::internal::axes::RTFIterator;
using $DTMXRTreeFrag = ::com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XRTreeFrag_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XRTreeFrag, serialVersionUID)},
	{"m_DTMXRTreeFrag", "Lcom/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag;", nullptr, $PRIVATE, $field(XRTreeFrag, m_DTMXRTreeFrag)},
	{"m_dtmRoot", "I", nullptr, $PRIVATE, $field(XRTreeFrag, m_dtmRoot)},
	{"m_allowRelease", "Z", nullptr, $PROTECTED, $field(XRTreeFrag, m_allowRelease)},
	{"m_xmlStr", "Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PRIVATE, $field(XRTreeFrag, m_xmlStr)},
	{}
};

$MethodInfo _XRTreeFrag_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xpath/internal/ExpressionNode;)V", nullptr, $PUBLIC, $method(XRTreeFrag, init$, void, int32_t, $XPathContext*, $ExpressionNode*)},
	{"<init>", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(XRTreeFrag, init$, void, int32_t, $XPathContext*)},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $method(XRTreeFrag, init$, void, $Expression*)},
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, allowDetachToRelease, void, bool)},
	{"appendToFsb", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, appendToFsb, void, $FastStringBuffer*)},
	{"asNodeIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, asNodeIterator, $DTMIterator*)},
	{"bool", "()Z", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, bool$, bool)},
	{"convertToNodeset", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, convertToNodeset, $NodeList*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, detach, void)},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, equals, bool, $XObject*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, getType, int32_t)},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, getTypeString, $String*)},
	{"initDTM", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PRIVATE | $FINAL, $method(XRTreeFrag, initDTM, void, int32_t, $XPathContext*)},
	{"num", "()D", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, num, double), "javax.xml.transform.TransformerException"},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, object, $Object*)},
	{"rtf", "()I", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, rtf, int32_t)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, str, $String*)},
	{"xstr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XRTreeFrag, xstr, $XMLString*)},
	{}
};

$ClassInfo _XRTreeFrag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XRTreeFrag",
	"com.sun.org.apache.xpath.internal.objects.XObject",
	nullptr,
	_XRTreeFrag_FieldInfo_,
	_XRTreeFrag_MethodInfo_
};

$Object* allocate$XRTreeFrag($Class* clazz) {
	return $of($alloc(XRTreeFrag));
}

void XRTreeFrag::init$(int32_t root, $XPathContext* xctxt, $ExpressionNode* parent) {
	$XObject::init$(nullptr);
	this->m_dtmRoot = $DTM::NULL;
	this->m_allowRelease = false;
	$set(this, m_xmlStr, nullptr);
	exprSetParent(parent);
	initDTM(root, xctxt);
}

void XRTreeFrag::init$(int32_t root, $XPathContext* xctxt) {
	$XObject::init$(nullptr);
	this->m_dtmRoot = $DTM::NULL;
	this->m_allowRelease = false;
	$set(this, m_xmlStr, nullptr);
	initDTM(root, xctxt);
}

void XRTreeFrag::initDTM(int32_t root, $XPathContext* xctxt) {
	this->m_dtmRoot = root;
	$var($DTM, dtm, $nc(xctxt)->getDTM(root));
	if (dtm != nullptr) {
		$set(this, m_DTMXRTreeFrag, xctxt->getDTMXRTreeFrag(xctxt->getDTMIdentity(dtm)));
	}
}

$Object* XRTreeFrag::object() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->m_DTMXRTreeFrag)->getXPathContext() != nullptr) {
		return $of($new($DTMNodeIterator, static_cast<$DTMIterator*>(($$new($NodeSetDTM, this->m_dtmRoot, $($nc($($nc(this->m_DTMXRTreeFrag)->getXPathContext()))->getDTMManager()))))));
	} else {
		return $of($XObject::object());
	}
}

void XRTreeFrag::init$($Expression* expr) {
	$XObject::init$(expr);
	this->m_dtmRoot = $DTM::NULL;
	this->m_allowRelease = false;
	$set(this, m_xmlStr, nullptr);
}

void XRTreeFrag::allowDetachToRelease(bool allowRelease) {
	this->m_allowRelease = allowRelease;
}

void XRTreeFrag::detach() {
	if (this->m_allowRelease) {
		$nc(this->m_DTMXRTreeFrag)->destruct();
		setObject(nullptr);
	}
}

int32_t XRTreeFrag::getType() {
	return $XObject::CLASS_RTREEFRAG;
}

$String* XRTreeFrag::getTypeString() {
	return "#RTREEFRAG"_s;
}

double XRTreeFrag::num() {
	$var($XMLString, s, xstr());
	return $nc(s)->toDouble();
}

bool XRTreeFrag::bool$() {
	return true;
}

$XMLString* XRTreeFrag::xstr() {
	if (nullptr == this->m_xmlStr) {
		$set(this, m_xmlStr, $nc($($nc(this->m_DTMXRTreeFrag)->getDTM()))->getStringValue(this->m_dtmRoot));
	}
	return this->m_xmlStr;
}

void XRTreeFrag::appendToFsb($FastStringBuffer* fsb) {
	$var($XString, xstring, $cast($XString, xstr()));
	$nc(xstring)->appendToFsb(fsb);
}

$String* XRTreeFrag::str() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $nc($($nc($($nc(this->m_DTMXRTreeFrag)->getDTM()))->getStringValue(this->m_dtmRoot)))->toString());
	return (nullptr == str) ? ""_s : str;
}

int32_t XRTreeFrag::rtf() {
	return this->m_dtmRoot;
}

$DTMIterator* XRTreeFrag::asNodeIterator() {
	$useLocalCurrentObjectStackCache();
	return $new($RTFIterator, this->m_dtmRoot, $($nc($($nc(this->m_DTMXRTreeFrag)->getXPathContext()))->getDTMManager()));
}

$NodeList* XRTreeFrag::convertToNodeset() {
	if ($instanceOf($NodeList, this->m_obj)) {
		return $cast($NodeList, this->m_obj);
	} else {
		return $new($DTMNodeList, $(asNodeIterator()));
	}
}

bool XRTreeFrag::equals($XObject* obj2) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($XObject::CLASS_NODESET == $nc(obj2)->getType()) {
			return obj2->equals(static_cast<$XObject*>(this));
		} else if ($XObject::CLASS_BOOLEAN == obj2->getType()) {
			bool var$0 = bool$();
			return var$0 == obj2->bool$();
		} else if ($XObject::CLASS_NUMBER == obj2->getType()) {
			double var$1 = num();
			return var$1 == obj2->num();
		} else if ($XObject::CLASS_NODESET == obj2->getType()) {
			return $nc($(xstr()))->equals($(obj2->xstr()));
		} else if ($XObject::CLASS_STRING == obj2->getType()) {
			return $nc($(xstr()))->equals($(obj2->xstr()));
		} else if ($XObject::CLASS_RTREEFRAG == obj2->getType()) {
			return $nc($(xstr()))->equals($(obj2->xstr()));
		} else {
			return $XObject::equals(obj2);
		}
	} catch ($TransformerException& te) {
		$throwNew($WrappedRuntimeException, te);
	}
	$shouldNotReachHere();
}

XRTreeFrag::XRTreeFrag() {
}

$Class* XRTreeFrag::load$($String* name, bool initialize) {
	$loadClass(XRTreeFrag, name, initialize, &_XRTreeFrag_ClassInfo_, allocate$XRTreeFrag);
	return class$;
}

$Class* XRTreeFrag::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com