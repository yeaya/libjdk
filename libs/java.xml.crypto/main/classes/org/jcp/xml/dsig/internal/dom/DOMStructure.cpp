#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <java/util/List.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMStructure::init$() {
}

bool DOMStructure::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

bool DOMStructure::equalsContent($List* content, $List* otherContent) {
	$useLocalObjectStack();
	int32_t size = $nc(content)->size();
	if (size != $nc(otherContent)->size()) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		$var($XMLStructure, oxs, $cast($XMLStructure, otherContent->get(i)));
		$var($XMLStructure, xs, $cast($XMLStructure, content->get(i)));
		if ($instanceOf($DOMStructure, oxs)) {
			if (!($instanceOf($DOMStructure, xs))) {
				return false;
			}
			$var($Node, otherNode, $cast($DOMStructure, oxs)->getNode());
			$var($Node, node, $nc($cast($DOMStructure, xs))->getNode());
			if (!$DOMUtils::nodesEqual(node, otherNode)) {
				return false;
			}
		} else if (!($nc(xs)->equals(oxs))) {
			return false;
		}
	}
	return true;
}

DOMStructure::DOMStructure() {
}

$Class* DOMStructure::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMStructure, init$, void)},
		{"equalsContent", "(Ljava/util/List;Ljava/util/List;)Z", "(Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;)Z", $PROTECTED, $virtualMethod(DOMStructure, equalsContent, bool, $List*, $List*)},
		{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(DOMStructure, isFeatureSupported, bool, $String*)},
		{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOMStructure, marshal, void, $Node*, $String*, $DOMCryptoContext*), "javax.xml.crypto.MarshalException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"org.jcp.xml.dsig.internal.dom.DOMStructure",
		"java.lang.Object",
		"javax.xml.crypto.XMLStructure",
		nullptr,
		methodInfos$$
	};
	$loadClass(DOMStructure, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMStructure);
	});
	return class$;
}

$Class* DOMStructure::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org