#include <com/sun/org/apache/xpath/internal/jaxp/JAXPPrefixResolver.h>

#include <javax/xml/namespace/NamespaceContext.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef S_XMLNAMESPACEURI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPPrefixResolver_FieldInfo_[] = {
	{"namespaceContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, $PRIVATE, $field(JAXPPrefixResolver, namespaceContext)},
	{"S_XMLNAMESPACEURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JAXPPrefixResolver, S_XMLNAMESPACEURI)},
	{}
};

$MethodInfo _JAXPPrefixResolver_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $method(JAXPPrefixResolver, init$, void, $NamespaceContext*)},
	{"getBaseIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPPrefixResolver, getBaseIdentifier, $String*)},
	{"getNamespaceForPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPPrefixResolver, getNamespaceForPrefix, $String*, $String*)},
	{"getNamespaceForPrefix", "(Ljava/lang/String;Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPPrefixResolver, getNamespaceForPrefix, $String*, $String*, $Node*)},
	{"handlesNullPrefixes", "()Z", nullptr, $PUBLIC, $virtualMethod(JAXPPrefixResolver, handlesNullPrefixes, bool)},
	{}
};

$ClassInfo _JAXPPrefixResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.jaxp.JAXPPrefixResolver",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.utils.PrefixResolver",
	_JAXPPrefixResolver_FieldInfo_,
	_JAXPPrefixResolver_MethodInfo_
};

$Object* allocate$JAXPPrefixResolver($Class* clazz) {
	return $of($alloc(JAXPPrefixResolver));
}

$String* JAXPPrefixResolver::S_XMLNAMESPACEURI = nullptr;

void JAXPPrefixResolver::init$($NamespaceContext* nsContext) {
	$set(this, namespaceContext, nsContext);
}

$String* JAXPPrefixResolver::getNamespaceForPrefix($String* prefix) {
	return $nc(this->namespaceContext)->getNamespaceURI(prefix);
}

$String* JAXPPrefixResolver::getBaseIdentifier() {
	return nullptr;
}

bool JAXPPrefixResolver::handlesNullPrefixes() {
	return false;
}

$String* JAXPPrefixResolver::getNamespaceForPrefix($String* prefix, $Node* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Node, parent, namespaceContext);
	$var($String, namespace$, nullptr);
	if ($nc(prefix)->equals("xml"_s)) {
		$assign(namespace$, JAXPPrefixResolver::S_XMLNAMESPACEURI);
	} else {
		int32_t type = 0;
		while (true) {
			bool var$0 = (nullptr != parent) && (nullptr == namespace$);
			if (var$0) {
				bool var$1 = ((type = parent->getNodeType()) == $Node::ELEMENT_NODE);
				var$0 = (var$1 || (type == $Node::ENTITY_REFERENCE_NODE));
			}
			if (!(var$0)) {
				break;
			}
			{
				if (type == $Node::ELEMENT_NODE) {
					$var($NamedNodeMap, nnm, $nc(parent)->getAttributes());
					for (int32_t i = 0; i < $nc(nnm)->getLength(); ++i) {
						$var($Node, attr, nnm->item(i));
						$var($String, aname, $nc(attr)->getNodeName());
						bool isPrefix = $nc(aname)->startsWith("xmlns:"_s);
						if (isPrefix || aname->equals("xmlns"_s)) {
							int32_t index = aname->indexOf((int32_t)u':');
							$var($String, p, isPrefix ? aname->substring(index + 1) : ""_s);
							if ($nc(p)->equals(prefix)) {
								$assign(namespace$, attr->getNodeValue());
								break;
							}
						}
					}
				}
				$assign(parent, $nc(parent)->getParentNode());
			}
		}
	}
	return namespace$;
}

JAXPPrefixResolver::JAXPPrefixResolver() {
}

void clinit$JAXPPrefixResolver($Class* class$) {
	$assignStatic(JAXPPrefixResolver::S_XMLNAMESPACEURI, "http://www.w3.org/XML/1998/namespace"_s);
}

$Class* JAXPPrefixResolver::load$($String* name, bool initialize) {
	$loadClass(JAXPPrefixResolver, name, initialize, &_JAXPPrefixResolver_ClassInfo_, clinit$JAXPPrefixResolver, allocate$JAXPPrefixResolver);
	return class$;
}

$Class* JAXPPrefixResolver::class$ = nullptr;

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com