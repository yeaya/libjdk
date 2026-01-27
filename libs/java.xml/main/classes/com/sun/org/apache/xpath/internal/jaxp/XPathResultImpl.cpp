#include <com/sun/org/apache/xpath/internal/jaxp/XPathResultImpl.h>

#include <com/sun/org/apache/xpath/internal/jaxp/XPathNodesImpl.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Number.h>
#include <java/util/Objects.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPathEvaluationResult$XPathResultType.h>
#include <javax/xml/xpath/XPathEvaluationResult.h>
#include <javax/xml/xpath/XPathNodes.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef BOOLEAN
#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NULL
#undef CLASS_NUMBER
#undef CLASS_RTREEFRAG
#undef CLASS_STRING
#undef NODE
#undef NODESET
#undef NUMBER
#undef STRING

using $XPathNodesImpl = ::com::sun::org::apache::xpath::internal::jaxp::XPathNodesImpl;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPathEvaluationResult = ::javax::xml::xpath::XPathEvaluationResult;
using $XPathEvaluationResult$XPathResultType = ::javax::xml::xpath::XPathEvaluationResult$XPathResultType;
using $XPathNodes = ::javax::xml::xpath::XPathNodes;
using $Node = ::org::w3c::dom::Node;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _XPathResultImpl_FieldInfo_[] = {
	{"resultObject", "Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, 0, $field(XPathResultImpl, resultObject)},
	{"resultType", "I", nullptr, 0, $field(XPathResultImpl, resultType)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", 0, $field(XPathResultImpl, type$)},
	{"mapToType", "Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, 0, $field(XPathResultImpl, mapToType)},
	{"nodeList", "Lorg/w3c/dom/NodeList;", nullptr, 0, $field(XPathResultImpl, nodeList)},
	{"currentIndex", "I", nullptr, 0, $field(XPathResultImpl, currentIndex)},
	{"currentNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(XPathResultImpl, currentNode)},
	{"boolValue", "Z", nullptr, 0, $field(XPathResultImpl, boolValue)},
	{"node", "Lorg/w3c/dom/Node;", nullptr, 0, $field(XPathResultImpl, node)},
	{"numValue", "D", nullptr, 0, $field(XPathResultImpl, numValue)},
	{"strValue", "Ljava/lang/String;", nullptr, 0, $field(XPathResultImpl, strValue)},
	{}
};

$MethodInfo _XPathResultImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class<TT;>;)V", $PUBLIC, $method(XPathResultImpl, init$, void, $XObject*, $Class*), "javax.xml.transform.TransformerException"},
	{"classToInternalType", "(Ljava/lang/Class;)I", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)I", $STATIC, $staticMethod(XPathResultImpl, classToInternalType, int32_t, $Class*)},
	{"getResult", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)V", nullptr, $PRIVATE, $method(XPathResultImpl, getResult, void, $XObject*), "javax.xml.transform.TransformerException"},
	{"getValue", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Lcom/sun/org/apache/xpath/internal/objects/XObject;Ljava/lang/Class<TT;>;)TT;", $STATIC, $staticMethod(XPathResultImpl, getValue, $Object*, $XObject*, $Class*), "javax.xml.transform.TransformerException"},
	{"type", "()Ljavax/xml/xpath/XPathEvaluationResult$XPathResultType;", nullptr, $PUBLIC, $virtualMethod(XPathResultImpl, type, $XPathEvaluationResult$XPathResultType*)},
	{"value", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(XPathResultImpl, value, $Object*)},
	{}
};

$ClassInfo _XPathResultImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.XPathResultImpl",
	"java.lang.Object",
	"javax.xml.xpath.XPathEvaluationResult",
	_XPathResultImpl_FieldInfo_,
	_XPathResultImpl_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/xml/xpath/XPathEvaluationResult<TT;>;"
};

$Object* allocate$XPathResultImpl($Class* clazz) {
	return $of($alloc(XPathResultImpl));
}

void XPathResultImpl::init$($XObject* resultObject, $Class* type) {
	$set(this, nodeList, nullptr);
	this->boolValue = false;
	$set(this, node, nullptr);
	$set(this, resultObject, resultObject);
	this->resultType = $nc(resultObject)->getType();
	$set(this, type$, type);
	getResult(resultObject);
}

$XPathEvaluationResult$XPathResultType* XPathResultImpl::type() {
	return this->mapToType;
}

$Object* XPathResultImpl::value() {
	$Objects::requireNonNull(this->type$);
	try {
		return $of(getValue(this->resultObject, this->type$));
	} catch ($TransformerException& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

void XPathResultImpl::getResult($XObject* resultObject) {
	{
		$var($NodeIterator, ni, nullptr)
		switch (this->resultType) {
		case $XObject::CLASS_BOOLEAN:
			{
				this->boolValue = $nc(resultObject)->bool$();
				$init($XPathEvaluationResult$XPathResultType);
				$set(this, mapToType, $XPathEvaluationResult$XPathResultType::BOOLEAN);
				break;
			}
		case $XObject::CLASS_NUMBER:
			{
				this->numValue = $nc(resultObject)->num();
				$init($XPathEvaluationResult$XPathResultType);
				$set(this, mapToType, $XPathEvaluationResult$XPathResultType::NUMBER);
				break;
			}
		case $XObject::CLASS_STRING:
			{
				$set(this, strValue, $nc(resultObject)->str());
				$init($XPathEvaluationResult$XPathResultType);
				$set(this, mapToType, $XPathEvaluationResult$XPathResultType::STRING);
				break;
			}
		case $XObject::CLASS_NODESET:
			{
				$init($XPathEvaluationResult$XPathResultType);
				$set(this, mapToType, $XPathEvaluationResult$XPathResultType::NODESET);
				$set(this, nodeList, $nc(resultObject)->nodelist());
				break;
			}
		case $XObject::CLASS_RTREEFRAG:
			{
				$init($XPathEvaluationResult$XPathResultType);
				$set(this, mapToType, $XPathEvaluationResult$XPathResultType::NODE);
				$assign(ni, $nc(resultObject)->nodeset());
				$set(this, node, $nc(ni)->nextNode());
				break;
			}
		}
	}
}

$Object* XPathResultImpl::getValue($XObject* resultObject, $Class* type) {
	$init(XPathResultImpl);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(type);
	$load($XPathEvaluationResult);
	if (type->isAssignableFrom($XPathEvaluationResult::class$)) {
		return $of(type->cast($$new(XPathResultImpl, resultObject, type)));
	}
	int32_t resultType = classToInternalType(type);
	{
		$var($XPathNodes, nodeSet, nullptr)
		$var($NodeIterator, ni, nullptr)
		switch (resultType) {
		case $XObject::CLASS_BOOLEAN:
			{
				return $of(type->cast($($Boolean::valueOf($nc(resultObject)->bool$()))));
			}
		case $XObject::CLASS_NUMBER:
			{
				$load($Double);
				if ($Double::class$->isAssignableFrom(type)) {
					return $of(type->cast($($Double::valueOf($nc(resultObject)->num()))));
				} else {
					$load($Integer);
					if ($Integer::class$->isAssignableFrom(type)) {
						return $of(type->cast($($Integer::valueOf($cast(int32_t, $nc(resultObject)->num())))));
					} else {
						$load($Long);
						if ($Long::class$->isAssignableFrom(type)) {
							return $of(type->cast($($Long::valueOf($cast(int64_t, $nc(resultObject)->num())))));
						}
					}
				}
				break;
			}
		case $XObject::CLASS_STRING:
			{
				return $of(type->cast($($nc(resultObject)->str())));
			}
		case $XObject::CLASS_NODESET:
			{
				$load($Node);
				$assign(nodeSet, $new($XPathNodesImpl, $($nc(resultObject)->nodelist()), $Node::class$));
				return $of(type->cast(nodeSet));
			}
		case $XObject::CLASS_RTREEFRAG:
			{
				$assign(ni, $nc(resultObject)->nodeset());
				return $of(type->cast($($nc(ni)->nextNode())));
			}
		}
	}
	return $of(nullptr);
}

int32_t XPathResultImpl::classToInternalType($Class* type) {
	$init(XPathResultImpl);
	$load($Boolean);
	if ($nc(type)->isAssignableFrom($Boolean::class$)) {
		return $XObject::CLASS_BOOLEAN;
	} else {
		$load($Number);
		if ($Number::class$->isAssignableFrom(type)) {
			return $XObject::CLASS_NUMBER;
		} else if (type->isAssignableFrom($String::class$)) {
			return $XObject::CLASS_STRING;
		} else {
			$load($XPathNodes);
			if (type->isAssignableFrom($XPathNodes::class$)) {
				return $XObject::CLASS_NODESET;
			} else {
				$load($Node);
				if (type->isAssignableFrom($Node::class$)) {
					return $XObject::CLASS_RTREEFRAG;
				}
			}
		}
	}
	return $XObject::CLASS_NULL;
}

XPathResultImpl::XPathResultImpl() {
}

$Class* XPathResultImpl::load$($String* name, bool initialize) {
	$loadClass(XPathResultImpl, name, initialize, &_XPathResultImpl_ClassInfo_, allocate$XPathResultImpl);
	return class$;
}

$Class* XPathResultImpl::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com