#include <com/sun/org/apache/xalan/internal/lib/ExsltSets.h>

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>
#include <com/sun/org/apache/xml/internal/utils/DOM2Helper.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $ExsltBase = ::com::sun::org::apache::xalan::internal::lib::ExsltBase;
using $DOM2Helper = ::com::sun::org::apache::xml::internal::utils::DOM2Helper;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _ExsltSets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltSets, init$, void)},
	{"difference", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, difference, $NodeList*, $NodeList*, $NodeList*)},
	{"distinct", "(Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, distinct, $NodeList*, $NodeList*)},
	{"hasSameNode", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, hasSameNode, bool, $NodeList*, $NodeList*)},
	{"intersection", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, intersection, $NodeList*, $NodeList*, $NodeList*)},
	{"leading", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, leading, $NodeList*, $NodeList*, $NodeList*)},
	{"trailing", "(Lorg/w3c/dom/NodeList;Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltSets, trailing, $NodeList*, $NodeList*, $NodeList*)},
	{}
};

$ClassInfo _ExsltSets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltSets",
	"com.sun.org.apache.xalan.internal.lib.ExsltBase",
	nullptr,
	nullptr,
	_ExsltSets_MethodInfo_
};

$Object* allocate$ExsltSets($Class* clazz) {
	return $of($alloc(ExsltSets));
}

void ExsltSets::init$() {
	$ExsltBase::init$();
}

$NodeList* ExsltSets::leading($NodeList* nl1, $NodeList* nl2) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	if ($nc(nl2)->getLength() == 0) {
		return nl1;
	}
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, leadNodes, $new($NodeSet));
	$var($Node, endNode, $nc(nl2)->item(0));
	if (!ns1->contains(endNode)) {
		return leadNodes;
	}
	for (int32_t i = 0; i < $nc(nl1)->getLength(); ++i) {
		$var($Node, testNode, nl1->item(i));
		bool var$0 = $DOM2Helper::isNodeAfter(testNode, endNode);
		if (var$0 && !$DOM2Helper::isNodeTheSame(testNode, endNode)) {
			leadNodes->addElement(testNode);
		}
	}
	return leadNodes;
}

$NodeList* ExsltSets::trailing($NodeList* nl1, $NodeList* nl2) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	if ($nc(nl2)->getLength() == 0) {
		return nl1;
	}
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, trailNodes, $new($NodeSet));
	$var($Node, startNode, $nc(nl2)->item(0));
	if (!ns1->contains(startNode)) {
		return trailNodes;
	}
	for (int32_t i = 0; i < $nc(nl1)->getLength(); ++i) {
		$var($Node, testNode, nl1->item(i));
		bool var$0 = $DOM2Helper::isNodeAfter(startNode, testNode);
		if (var$0 && !$DOM2Helper::isNodeTheSame(startNode, testNode)) {
			trailNodes->addElement(testNode);
		}
	}
	return trailNodes;
}

$NodeList* ExsltSets::intersection($NodeList* nl1, $NodeList* nl2) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, ns2, $new($NodeSet, nl2));
	$var($NodeSet, inter, $new($NodeSet));
	inter->setShouldCacheNodes(true);
	for (int32_t i = 0; i < ns1->getLength(); ++i) {
		$var($Node, n, ns1->elementAt(i));
		if (ns2->contains(n)) {
			inter->addElement(n);
		}
	}
	return inter;
}

$NodeList* ExsltSets::difference($NodeList* nl1, $NodeList* nl2) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, ns2, $new($NodeSet, nl2));
	$var($NodeSet, diff, $new($NodeSet));
	diff->setShouldCacheNodes(true);
	for (int32_t i = 0; i < ns1->getLength(); ++i) {
		$var($Node, n, ns1->elementAt(i));
		if (!ns2->contains(n)) {
			diff->addElement(n);
		}
	}
	return diff;
}

$NodeList* ExsltSets::distinct($NodeList* nl) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, dist, $new($NodeSet));
	dist->setShouldCacheNodes(true);
	$var($Map, stringTable, $new($HashMap));
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, currNode, nl->item(i));
		$var($String, key, toString(currNode));
		if (key == nullptr) {
			dist->addElement(currNode);
		} else if (!stringTable->containsKey(key)) {
			stringTable->put(key, currNode);
			dist->addElement(currNode);
		}
	}
	return dist;
}

bool ExsltSets::hasSameNode($NodeList* nl1, $NodeList* nl2) {
	$init(ExsltSets);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, ns1, $new($NodeSet, nl1));
	$var($NodeSet, ns2, $new($NodeSet, nl2));
	for (int32_t i = 0; i < ns1->getLength(); ++i) {
		if (ns2->contains($(ns1->elementAt(i)))) {
			return true;
		}
	}
	return false;
}

ExsltSets::ExsltSets() {
}

$Class* ExsltSets::load$($String* name, bool initialize) {
	$loadClass(ExsltSets, name, initialize, &_ExsltSets_ClassInfo_, allocate$ExsltSets);
	return class$;
}

$Class* ExsltSets::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com