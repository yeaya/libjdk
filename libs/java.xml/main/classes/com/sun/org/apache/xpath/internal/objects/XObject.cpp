#include <com/sun/org/apache/xpath/internal/objects/XObject.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathException.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XMLStringFactoryImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XObjectFactory.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/util/List.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NULL
#undef CLASS_NUMBER
#undef CLASS_RTREEFRAG
#undef CLASS_STRING
#undef CLASS_UNKNOWN
#undef CLASS_UNRESOLVEDVARIABLE
#undef ER_CANT_CONVERT_TO_MUTABLENODELIST
#undef ER_CANT_CONVERT_TO_NODELIST
#undef ER_CANT_CONVERT_TO_NUMBER
#undef ER_CANT_CONVERT_TO_TYPE
#undef NULL

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathException = ::com::sun::org::apache::xpath::internal::XPathException;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XMLStringFactoryImpl = ::com::sun::org::apache::xpath::internal::objects::XMLStringFactoryImpl;
using $XObjectFactory = ::com::sun::org::apache::xpath::internal::objects::XObjectFactory;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
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

$FieldInfo _XObject_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XObject, serialVersionUID)},
	{"m_obj", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(XObject, m_obj)},
	{"CLASS_NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_NULL)},
	{"CLASS_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_UNKNOWN)},
	{"CLASS_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_BOOLEAN)},
	{"CLASS_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_NUMBER)},
	{"CLASS_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_STRING)},
	{"CLASS_NODESET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_NODESET)},
	{"CLASS_RTREEFRAG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_RTREEFRAG)},
	{"CLASS_UNRESOLVEDVARIABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XObject, CLASS_UNRESOLVEDVARIABLE)},
	{}
};

$MethodInfo _XObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XObject, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XObject, init$, void, Object$*)},
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XObject, allowDetachToRelease, void, bool)},
	{"appendToFsb", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(XObject, appendToFsb, void, $FastStringBuffer*)},
	{"bool", "()Z", nullptr, $PUBLIC, $virtualMethod(XObject, bool$, bool), "javax.xml.transform.TransformerException"},
	{"boolWithSideEffects", "()Z", nullptr, $PUBLIC, $virtualMethod(XObject, boolWithSideEffects, bool), "javax.xml.transform.TransformerException"},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(XObject, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"castToType", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XObject, castToType, $Object*, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"create", "(Ljava/lang/Object;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XObject, create, XObject*, Object$*)},
	{"create", "(Ljava/lang/Object;Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XObject, create, XObject*, Object$*, $XPathContext*)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, deepEquals, bool, $Expression*)},
	{"destruct", "()V", nullptr, $PUBLIC, $virtualMethod(XObject, destruct, void)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(XObject, detach, void)},
	{"dispatchCharactersEvents", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XObject, dispatchCharactersEvents, void, $ContentHandler*), "org.xml.sax.SAXException"},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, equals, bool, XObject*)},
	{"error", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XObject, error, void, $String*), "javax.xml.transform.TransformerException"},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XObject, error, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(XObject, execute, XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(XObject, fixupVariables, void, $List*, int32_t)},
	{"getFresh", "()Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(XObject, getFresh, XObject*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(XObject, getType, int32_t)},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XObject, getTypeString, $String*)},
	{"greaterThan", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, greaterThan, bool, XObject*), "javax.xml.transform.TransformerException"},
	{"greaterThanOrEqual", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, greaterThanOrEqual, bool, XObject*), "javax.xml.transform.TransformerException"},
	{"iter", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XObject, iter, $DTMIterator*), "javax.xml.transform.TransformerException"},
	{"lessThan", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, lessThan, bool, XObject*), "javax.xml.transform.TransformerException"},
	{"lessThanOrEqual", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, lessThanOrEqual, bool, XObject*), "javax.xml.transform.TransformerException"},
	{"mutableNodeset", "()Lcom/sun/org/apache/xpath/internal/NodeSetDTM;", nullptr, $PUBLIC, $virtualMethod(XObject, mutableNodeset, $NodeSetDTM*), "javax.xml.transform.TransformerException"},
	{"nodelist", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, $virtualMethod(XObject, nodelist, $NodeList*), "javax.xml.transform.TransformerException"},
	{"nodeset", "()Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(XObject, nodeset, $NodeIterator*), "javax.xml.transform.TransformerException"},
	{"notEquals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XObject, notEquals, bool, XObject*), "javax.xml.transform.TransformerException"},
	{"num", "()D", nullptr, $PUBLIC, $virtualMethod(XObject, num, double), "javax.xml.transform.TransformerException"},
	{"numWithSideEffects", "()D", nullptr, $PUBLIC, $virtualMethod(XObject, numWithSideEffects, double), "javax.xml.transform.TransformerException"},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XObject, object, $Object*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XObject, reset, void)},
	{"rtf", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(XObject, rtf, int32_t, $XPathContext*)},
	{"rtf", "()I", nullptr, $PUBLIC, $virtualMethod(XObject, rtf, int32_t)},
	{"rtree", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(XObject, rtree, $DocumentFragment*, $XPathContext*)},
	{"rtree", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC, $virtualMethod(XObject, rtree, $DocumentFragment*)},
	{"setObject", "(Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(XObject, setObject, void, Object$*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XObject, str, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XObject, toString, $String*)},
	{"xstr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC, $virtualMethod(XObject, xstr, $XMLString*)},
	{}
};

$ClassInfo _XObject_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XObject",
	"com.sun.org.apache.xpath.internal.Expression",
	"java.lang.Cloneable",
	_XObject_FieldInfo_,
	_XObject_MethodInfo_
};

$Object* allocate$XObject($Class* clazz) {
	return $of($alloc(XObject));
}

int32_t XObject::hashCode() {
	 return this->$Expression::hashCode();
}

bool XObject::equals(Object$* arg0) {
	 return this->$Expression::equals(arg0);
}

$Object* XObject::clone() {
	 return this->$Expression::clone();
}

void XObject::finalize() {
	this->$Expression::finalize();
}

void XObject::init$() {
	$Expression::init$();
}

void XObject::init$(Object$* obj) {
	$Expression::init$();
	setObject(obj);
}

void XObject::setObject(Object$* obj) {
	$set(this, m_obj, obj);
}

XObject* XObject::execute($XPathContext* xctxt) {
	return this;
}

void XObject::allowDetachToRelease(bool allowRelease) {
}

void XObject::detach() {
}

void XObject::destruct() {
	if (nullptr != this->m_obj) {
		allowDetachToRelease(true);
		detach();
		setObject(nullptr);
	}
}

void XObject::reset() {
}

void XObject::dispatchCharactersEvents($ContentHandler* ch) {
	$nc($(xstr()))->dispatchCharactersEvents(ch);
}

XObject* XObject::create(Object$* val) {
	$init(XObject);
	return $XObjectFactory::create(val);
}

XObject* XObject::create(Object$* val, $XPathContext* xctxt) {
	$init(XObject);
	return $XObjectFactory::create(val, xctxt);
}

int32_t XObject::getType() {
	return XObject::CLASS_UNKNOWN;
}

$String* XObject::getTypeString() {
	$useLocalCurrentObjectStackCache();
	return $str({"#UNKNOWN ("_s, $($nc($of($(object())))->getClass()->getName()), ")"_s});
}

double XObject::num() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_NUMBER, $$new($ObjectArray, {$($of(getTypeString()))}));
	return 0.0;
}

double XObject::numWithSideEffects() {
	return num();
}

bool XObject::bool$() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_NUMBER, $$new($ObjectArray, {$($of(getTypeString()))}));
	return false;
}

bool XObject::boolWithSideEffects() {
	return bool$();
}

$XMLString* XObject::xstr() {
	$useLocalCurrentObjectStackCache();
	return $nc($($XMLStringFactoryImpl::getFactory()))->newstr($(str()));
}

$String* XObject::str() {
	return (this->m_obj != nullptr) ? $nc($of(this->m_obj))->toString() : ""_s;
}

$String* XObject::toString() {
	return str();
}

int32_t XObject::rtf($XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	int32_t result = rtf();
	if ($DTM::NULL == result) {
		$var($DTM, frag, $nc(support)->createDocumentFragment());
		$nc(frag)->appendTextChild($(str()));
		result = frag->getDocument();
	}
	return result;
}

$DocumentFragment* XObject::rtree($XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	$var($DocumentFragment, docFrag, nullptr);
	int32_t result = rtf();
	if ($DTM::NULL == result) {
		$var($DTM, frag, $nc(support)->createDocumentFragment());
		$nc(frag)->appendTextChild($(str()));
		$assign(docFrag, $cast($DocumentFragment, frag->getNode(frag->getDocument())));
	} else {
		$var($DTM, frag, $nc(support)->getDTM(result));
		$assign(docFrag, $cast($DocumentFragment, $nc(frag)->getNode(frag->getDocument())));
	}
	return docFrag;
}

$DocumentFragment* XObject::rtree() {
	return nullptr;
}

int32_t XObject::rtf() {
	return $DTM::NULL;
}

$Object* XObject::object() {
	return $of(this->m_obj);
}

$DTMIterator* XObject::iter() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST, $$new($ObjectArray, {$($of(getTypeString()))}));
	return nullptr;
}

XObject* XObject::getFresh() {
	return this;
}

$NodeIterator* XObject::nodeset() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST, $$new($ObjectArray, {$($of(getTypeString()))}));
	return nullptr;
}

$NodeList* XObject::nodelist() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_NODELIST, $$new($ObjectArray, {$($of(getTypeString()))}));
	return nullptr;
}

$NodeSetDTM* XObject::mutableNodeset() {
	$useLocalCurrentObjectStackCache();
	$init($XPATHErrorResources);
	error($XPATHErrorResources::ER_CANT_CONVERT_TO_MUTABLENODELIST, $$new($ObjectArray, {$($of(getTypeString()))}));
	return $cast($NodeSetDTM, this->m_obj);
}

$Object* XObject::castToType(int32_t t, $XPathContext* support) {
	$useLocalCurrentObjectStackCache();
	$var($Object, result, nullptr);
	switch (t) {
	case XObject::CLASS_STRING:
		{
			$assign(result, str());
			break;
		}
	case XObject::CLASS_NUMBER:
		{
			$assign(result, $Double::valueOf(num()));
			break;
		}
	case XObject::CLASS_NODESET:
		{
			$assign(result, iter());
			break;
		}
	case XObject::CLASS_BOOLEAN:
		{
			$assign(result, $Boolean::valueOf(bool$()));
			break;
		}
	case XObject::CLASS_UNKNOWN:
		{
			$assign(result, this->m_obj);
			break;
		}
	default:
		{
			$init($XPATHErrorResources);
			error($XPATHErrorResources::ER_CANT_CONVERT_TO_TYPE, $$new($ObjectArray, {
				$($of(getTypeString())),
				$($of($Integer::toString(t)))
			}));
			$assign(result, nullptr);
		}
	}
	return $of(result);
}

bool XObject::lessThan(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->greaterThan(this);
	}
	double var$0 = this->num();
	return var$0 < $nc(obj2)->num();
}

bool XObject::lessThanOrEqual(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->greaterThanOrEqual(this);
	}
	double var$0 = this->num();
	return var$0 <= $nc(obj2)->num();
}

bool XObject::greaterThan(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->lessThan(this);
	}
	double var$0 = this->num();
	return var$0 > $nc(obj2)->num();
}

bool XObject::greaterThanOrEqual(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->lessThanOrEqual(this);
	}
	double var$0 = this->num();
	return var$0 >= $nc(obj2)->num();
}

bool XObject::equals(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->equals(this);
	}
	if (nullptr != this->m_obj) {
		return $nc($of(this->m_obj))->equals($nc(obj2)->m_obj);
	} else {
		return $nc(obj2)->m_obj == nullptr;
	}
}

bool XObject::notEquals(XObject* obj2) {
	if ($nc(obj2)->getType() == XObject::CLASS_NODESET) {
		return obj2->notEquals(this);
	}
	return !equals(obj2);
}

void XObject::error($String* msg) {
	error(msg, nullptr);
}

void XObject::error($String* msg, $ObjectArray* args) {
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	{
		$throwNew($XPathException, fmsg, static_cast<$ExpressionNode*>(this));
	}
}

void XObject::fixupVariables($List* vars, int32_t globalsSize) {
}

void XObject::appendToFsb($FastStringBuffer* fsb) {
	$nc(fsb)->append($(str()));
}

void XObject::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	assertion(false, "callVisitors should not be called for this object!!!"_s);
}

bool XObject::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	if (!this->equals($cast(XObject, expr))) {
		return false;
	}
	return true;
}

XObject::XObject() {
}

$Class* XObject::load$($String* name, bool initialize) {
	$loadClass(XObject, name, initialize, &_XObject_ClassInfo_, allocate$XObject);
	return class$;
}

$Class* XObject::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com