#include <com/sun/org/apache/xml/internal/utils/PrefixResolverDefault.h>

#include <com/sun/org/apache/xml/internal/utils/Constants.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef S_XMLNAMESPACEURI

using $Constants = ::com::sun::org::apache::xml::internal::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _PrefixResolverDefault_FieldInfo_[] = {
	{"m_context", "Lorg/w3c/dom/Node;", nullptr, 0, $field(PrefixResolverDefault, m_context)},
	{}
};

$MethodInfo _PrefixResolverDefault_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(PrefixResolverDefault, init$, void, $Node*)},
	{"getBaseIdentifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrefixResolverDefault, getBaseIdentifier, $String*)},
	{"getNamespaceForPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrefixResolverDefault, getNamespaceForPrefix, $String*, $String*)},
	{"getNamespaceForPrefix", "(Ljava/lang/String;Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PrefixResolverDefault, getNamespaceForPrefix, $String*, $String*, $Node*)},
	{"handlesNullPrefixes", "()Z", nullptr, $PUBLIC, $virtualMethod(PrefixResolverDefault, handlesNullPrefixes, bool)},
	{}
};

$ClassInfo _PrefixResolverDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.PrefixResolverDefault",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.utils.PrefixResolver",
	_PrefixResolverDefault_FieldInfo_,
	_PrefixResolverDefault_MethodInfo_
};

$Object* allocate$PrefixResolverDefault($Class* clazz) {
	return $of($alloc(PrefixResolverDefault));
}

void PrefixResolverDefault::init$($Node* xpathExpressionContext) {
	$set(this, m_context, xpathExpressionContext);
}

$String* PrefixResolverDefault::getNamespaceForPrefix($String* prefix) {
	return getNamespaceForPrefix(prefix, this->m_context);
}

$String* PrefixResolverDefault::getNamespaceForPrefix($String* prefix, $Node* namespaceContext) {
	$useLocalCurrentObjectStackCache();
	$var($Node, parent, namespaceContext);
	$var($String, namespace$, nullptr);
	if ($nc(prefix)->equals("xml"_s)) {
		$init($Constants);
		$assign(namespace$, $Constants::S_XMLNAMESPACEURI);
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
					if ($nc($($nc(parent)->getNodeName()))->indexOf($$str({prefix, ":"_s})) == 0) {
						return parent->getNamespaceURI();
					}
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

$String* PrefixResolverDefault::getBaseIdentifier() {
	return nullptr;
}

bool PrefixResolverDefault::handlesNullPrefixes() {
	return false;
}

PrefixResolverDefault::PrefixResolverDefault() {
}

$Class* PrefixResolverDefault::load$($String* name, bool initialize) {
	$loadClass(PrefixResolverDefault, name, initialize, &_PrefixResolverDefault_ClassInfo_, allocate$PrefixResolverDefault);
	return class$;
}

$Class* PrefixResolverDefault::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com