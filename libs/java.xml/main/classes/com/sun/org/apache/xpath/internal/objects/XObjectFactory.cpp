#include <com/sun/org/apache/xpath/internal/objects/XObjectFactory.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/axes/OneStepIterator.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSetForDOM.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <java/lang/Number.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <jcpp.h>

#undef SELF

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $OneStepIterator = ::com::sun::org::apache::xpath::internal::axes::OneStepIterator;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XNodeSetForDOM = ::com::sun::org::apache::xpath::internal::objects::XNodeSetForDOM;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
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

$MethodInfo _XObjectFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XObjectFactory, init$, void)},
	{"create", "(Ljava/lang/Object;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XObjectFactory, create, $XObject*, Object$*)},
	{"create", "(Ljava/lang/Object;Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC | $STATIC, $staticMethod(XObjectFactory, create, $XObject*, Object$*, $XPathContext*)},
	{}
};

$ClassInfo _XObjectFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XObjectFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XObjectFactory_MethodInfo_
};

$Object* allocate$XObjectFactory($Class* clazz) {
	return $of($alloc(XObjectFactory));
}

void XObjectFactory::init$() {
}

$XObject* XObjectFactory::create(Object$* val) {
	$var($XObject, result, nullptr);
	if ($instanceOf($XObject, val)) {
		$assign(result, $cast($XObject, val));
	} else if ($instanceOf($String, val)) {
		$assign(result, $new($XString, $cast($String, val)));
	} else if ($instanceOf($Boolean, val)) {
		$assign(result, $new($XBoolean, $cast($Boolean, val)));
	} else if ($instanceOf($Double, val)) {
		$assign(result, $new($XNumber, ($cast($Double, val))));
	} else {
		$assign(result, $new($XObject, val));
	}
	return result;
}

$XObject* XObjectFactory::create(Object$* val, $XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, result, nullptr);
	if ($instanceOf($XObject, val)) {
		$assign(result, $cast($XObject, val));
	} else if ($instanceOf($String, val)) {
		$assign(result, $new($XString, $cast($String, val)));
	} else if ($instanceOf($Boolean, val)) {
		$assign(result, $new($XBoolean, $cast($Boolean, val)));
	} else if ($instanceOf($Number, val)) {
		$assign(result, $new($XNumber, ($cast($Number, val))));
	} else if ($instanceOf($DTM, val)) {
		$var($DTM, dtm, $cast($DTM, val));
		try {
			int32_t dtmRoot = $nc(dtm)->getDocument();
			$var($DTMAxisIterator, iter, dtm->getAxisIterator($Axis::SELF));
			$nc(iter)->setStartNode(dtmRoot);
			$var($DTMIterator, iterator, $new($OneStepIterator, iter, $Axis::SELF));
			iterator->setRoot(dtmRoot, xctxt);
			$assign(result, $new($XNodeSet, iterator));
		} catch ($Exception& ex) {
			$throwNew($WrappedRuntimeException, ex);
		}
	} else if ($instanceOf($DTMAxisIterator, val)) {
		$var($DTMAxisIterator, iter, $cast($DTMAxisIterator, val));
		try {
			$var($DTMIterator, iterator, $new($OneStepIterator, iter, $Axis::SELF));
			iterator->setRoot($nc(iter)->getStartNode(), xctxt);
			$assign(result, $new($XNodeSet, iterator));
		} catch ($Exception& ex) {
			$throwNew($WrappedRuntimeException, ex);
		}
	} else if ($instanceOf($DTMIterator, val)) {
		$assign(result, $new($XNodeSet, $cast($DTMIterator, val)));
	} else if ($instanceOf($Node, val)) {
		$assign(result, $new($XNodeSetForDOM, $cast($Node, val), static_cast<$DTMManager*>(xctxt)));
	} else if ($instanceOf($NodeList, val)) {
		$assign(result, $new($XNodeSetForDOM, $cast($NodeList, val), xctxt));
	} else if ($instanceOf($NodeIterator, val)) {
		$assign(result, $new($XNodeSetForDOM, $cast($NodeIterator, val), xctxt));
	} else {
		$assign(result, $new($XObject, val));
	}
	return result;
}

XObjectFactory::XObjectFactory() {
}

$Class* XObjectFactory::load$($String* name, bool initialize) {
	$loadClass(XObjectFactory, name, initialize, &_XObjectFactory_ClassInfo_, allocate$XObjectFactory);
	return class$;
}

$Class* XObjectFactory::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com