#include <com/sun/org/apache/xpath/internal/functions/FuncCurrent.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ER_PROCESSOR_ERROR
#undef NULL

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $XSLTErrorResources = ::com::sun::org::apache::xalan::internal::res::XSLTErrorResources;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncCurrent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncCurrent, serialVersionUID)},
	{}
};

$MethodInfo _FuncCurrent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncCurrent, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncCurrent, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncCurrent, fixupVariables, void, $List*, int32_t)},
	{}
};

$ClassInfo _FuncCurrent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncCurrent",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncCurrent_FieldInfo_,
	_FuncCurrent_MethodInfo_
};

$Object* allocate$FuncCurrent($Class* clazz) {
	return $of($alloc(FuncCurrent));
}

void FuncCurrent::init$() {
	$Function::init$();
}

$XObject* FuncCurrent::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($SubContextList, subContextList, $nc(xctxt)->getCurrentNodeList());
	int32_t currentNode = $DTM::NULL;
	if (nullptr != subContextList) {
		if ($instanceOf($PredicatedNodeTest, subContextList)) {
			$var($LocPathIterator, iter, $nc(($cast($PredicatedNodeTest, subContextList)))->getLocPathIterator());
			currentNode = $nc(iter)->getCurrentContextNode();
		} else if ($instanceOf($StepPattern, subContextList)) {
			$init($XSLTErrorResources);
			$throwNew($RuntimeException, $($XSLMessages::createMessage($XSLTErrorResources::ER_PROCESSOR_ERROR, nullptr)));
		}
	} else {
		currentNode = xctxt->getContextNode();
	}
	return $new($XNodeSet, currentNode, $(xctxt->getDTMManager()));
}

void FuncCurrent::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncCurrent::FuncCurrent() {
}

$Class* FuncCurrent::load$($String* name, bool initialize) {
	$loadClass(FuncCurrent, name, initialize, &_FuncCurrent_ClassInfo_, allocate$FuncCurrent);
	return class$;
}

$Class* FuncCurrent::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com