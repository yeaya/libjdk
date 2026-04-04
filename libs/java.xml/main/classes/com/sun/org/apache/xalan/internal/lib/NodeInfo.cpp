#include <com/sun/org/apache/xalan/internal/lib/NodeInfo.h>
#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

void NodeInfo::init$() {
}

$String* NodeInfo::systemId($ExpressionContext* context) {
	$useLocalObjectStack();
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, contextNode))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, contextNode)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getSystemId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::systemId($NodeList* nodeList) {
	$useLocalObjectStack();
	if (nodeList == nullptr || nodeList->getLength() == 0) {
		return nullptr;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, node))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, node)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getSystemId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::publicId($ExpressionContext* context) {
	$useLocalObjectStack();
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, contextNode))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, contextNode)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getPublicId();
	} else {
		return nullptr;
	}
}

$String* NodeInfo::publicId($NodeList* nodeList) {
	$useLocalObjectStack();
	if (nodeList == nullptr || nodeList->getLength() == 0) {
		return nullptr;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, node))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, node)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getPublicId();
	} else {
		return nullptr;
	}
}

int32_t NodeInfo::lineNumber($ExpressionContext* context) {
	$useLocalObjectStack();
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, contextNode))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, contextNode)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getLineNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::lineNumber($NodeList* nodeList) {
	$useLocalObjectStack();
	if (nodeList == nullptr || nodeList->getLength() == 0) {
		return -1;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, node))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, node)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getLineNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::columnNumber($ExpressionContext* context) {
	$useLocalObjectStack();
	$var($Node, contextNode, $nc(context)->getContextNode());
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, contextNode))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, contextNode)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getColumnNumber();
	} else {
		return -1;
	}
}

int32_t NodeInfo::columnNumber($NodeList* nodeList) {
	$useLocalObjectStack();
	if (nodeList == nullptr || nodeList->getLength() == 0) {
		return -1;
	}
	$var($Node, node, $nc(nodeList)->item(0));
	int32_t nodeHandler = $nc($cast($DTMNodeProxy, node))->getDTMNodeNumber();
	$var($SourceLocator, locator, $$nc($cast($DTMNodeProxy, node)->getDTM())->getSourceLocatorFor(nodeHandler));
	if (locator != nullptr) {
		return locator->getColumnNumber();
	} else {
		return -1;
	}
}

NodeInfo::NodeInfo() {
}

$Class* NodeInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NodeInfo, init$, void)},
		{"columnNumber", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, columnNumber, int32_t, $ExpressionContext*)},
		{"columnNumber", "(Lorg/w3c/dom/NodeList;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, columnNumber, int32_t, $NodeList*)},
		{"lineNumber", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, lineNumber, int32_t, $ExpressionContext*)},
		{"lineNumber", "(Lorg/w3c/dom/NodeList;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, lineNumber, int32_t, $NodeList*)},
		{"publicId", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, publicId, $String*, $ExpressionContext*)},
		{"publicId", "(Lorg/w3c/dom/NodeList;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, publicId, $String*, $NodeList*)},
		{"systemId", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, systemId, $String*, $ExpressionContext*)},
		{"systemId", "(Lorg/w3c/dom/NodeList;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(NodeInfo, systemId, $String*, $NodeList*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.lib.NodeInfo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NodeInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeInfo);
	});
	return class$;
}

$Class* NodeInfo::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com