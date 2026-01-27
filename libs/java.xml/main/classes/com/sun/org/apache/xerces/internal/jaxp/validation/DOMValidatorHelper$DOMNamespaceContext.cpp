#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper$DOMNamespaceContext.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/util/Enumeration.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef EMPTY_STRING
#undef PREFIX_XMLNS
#undef XMLNS_URI

using $DOMValidatorHelper = ::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Attr = ::org::w3c::dom::Attr;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _DOMValidatorHelper$DOMNamespaceContext_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper;", nullptr, $FINAL | $SYNTHETIC, $field(DOMValidatorHelper$DOMNamespaceContext, this$0)},
	{"fNamespace", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(DOMValidatorHelper$DOMNamespaceContext, fNamespace)},
	{"fNamespaceSize", "I", nullptr, $PROTECTED, $field(DOMValidatorHelper$DOMNamespaceContext, fNamespaceSize)},
	{"fDOMContextBuilt", "Z", nullptr, $PROTECTED, $field(DOMValidatorHelper$DOMNamespaceContext, fDOMContextBuilt)},
	{}
};

$MethodInfo _DOMValidatorHelper$DOMNamespaceContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/DOMValidatorHelper;)V", nullptr, 0, $method(DOMValidatorHelper$DOMNamespaceContext, init$, void, $DOMValidatorHelper*)},
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, declarePrefix, bool, $String*, $String*)},
	{"declarePrefix0", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(DOMValidatorHelper$DOMNamespaceContext, declarePrefix0, void, $String*, $String*)},
	{"fillNamespaceContext", "()V", nullptr, $PRIVATE, $method(DOMValidatorHelper$DOMNamespaceContext, fillNamespaceContext, void)},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, getAllPrefixes, $Enumeration*)},
	{"getDeclaredPrefixAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, getDeclaredPrefixAt, $String*, int32_t)},
	{"getDeclaredPrefixCount", "()I", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, getDeclaredPrefixCount, int32_t)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, getPrefix, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, getURI, $String*, $String*)},
	{"getURI0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOMValidatorHelper$DOMNamespaceContext, getURI0, $String*, $String*)},
	{"popContext", "()V", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, popContext, void)},
	{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, pushContext, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DOMValidatorHelper$DOMNamespaceContext, reset, void)},
	{}
};

$InnerClassInfo _DOMValidatorHelper$DOMNamespaceContext_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper$DOMNamespaceContext", "com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper", "DOMNamespaceContext", $FINAL},
	{}
};

$ClassInfo _DOMValidatorHelper$DOMNamespaceContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper$DOMNamespaceContext",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.NamespaceContext",
	_DOMValidatorHelper$DOMNamespaceContext_FieldInfo_,
	_DOMValidatorHelper$DOMNamespaceContext_MethodInfo_,
	nullptr,
	nullptr,
	_DOMValidatorHelper$DOMNamespaceContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper"
};

$Object* allocate$DOMValidatorHelper$DOMNamespaceContext($Class* clazz) {
	return $of($alloc(DOMValidatorHelper$DOMNamespaceContext));
}

void DOMValidatorHelper$DOMNamespaceContext::init$($DOMValidatorHelper* this$0) {
	$set(this, this$0, this$0);
	$set(this, fNamespace, $new($StringArray, 16 * 2));
	this->fNamespaceSize = 0;
	this->fDOMContextBuilt = false;
}

void DOMValidatorHelper$DOMNamespaceContext::pushContext() {
	$nc(this->this$0->fNamespaceContext)->pushContext();
}

void DOMValidatorHelper$DOMNamespaceContext::popContext() {
	$nc(this->this$0->fNamespaceContext)->popContext();
}

bool DOMValidatorHelper$DOMNamespaceContext::declarePrefix($String* prefix, $String* uri) {
	return $nc(this->this$0->fNamespaceContext)->declarePrefix(prefix, uri);
}

$String* DOMValidatorHelper$DOMNamespaceContext::getURI($String* prefix) {
	$var($String, uri, $nc(this->this$0->fNamespaceContext)->getURI(prefix));
	if (uri == nullptr) {
		if (!this->fDOMContextBuilt) {
			fillNamespaceContext();
			this->fDOMContextBuilt = true;
		}
		if (this->fNamespaceSize > 0 && !$nc(this->this$0->fNamespaceContext)->containsPrefix(prefix)) {
			$assign(uri, getURI0(prefix));
		}
	}
	return uri;
}

$String* DOMValidatorHelper$DOMNamespaceContext::getPrefix($String* uri) {
	return $nc(this->this$0->fNamespaceContext)->getPrefix(uri);
}

int32_t DOMValidatorHelper$DOMNamespaceContext::getDeclaredPrefixCount() {
	return $nc(this->this$0->fNamespaceContext)->getDeclaredPrefixCount();
}

$String* DOMValidatorHelper$DOMNamespaceContext::getDeclaredPrefixAt(int32_t index) {
	return $nc(this->this$0->fNamespaceContext)->getDeclaredPrefixAt(index);
}

$Enumeration* DOMValidatorHelper$DOMNamespaceContext::getAllPrefixes() {
	return $nc(this->this$0->fNamespaceContext)->getAllPrefixes();
}

void DOMValidatorHelper$DOMNamespaceContext::reset() {
	this->fDOMContextBuilt = false;
	this->fNamespaceSize = 0;
}

void DOMValidatorHelper$DOMNamespaceContext::fillNamespaceContext() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->fRoot != nullptr) {
		$var($Node, currentNode, $nc(this->this$0->fRoot)->getParentNode());
		while (currentNode != nullptr) {
			if ($Node::ELEMENT_NODE == currentNode->getNodeType()) {
				$var($NamedNodeMap, attributes, currentNode->getAttributes());
				int32_t attrCount = $nc(attributes)->getLength();
				for (int32_t i = 0; i < attrCount; ++i) {
					$var($Attr, attr, $cast($Attr, attributes->item(i)));
					$var($String, value, $nc(attr)->getValue());
					if (value == nullptr) {
						$init($XMLSymbols);
						$assign(value, $XMLSymbols::EMPTY_STRING);
					}
					this->this$0->fillQName(this->this$0->fAttributeQName, attr);
					$init($NamespaceContext);
					if ($nc(this->this$0->fAttributeQName)->uri == $NamespaceContext::XMLNS_URI) {
						$init($XMLSymbols);
						if ($nc(this->this$0->fAttributeQName)->prefix == $XMLSymbols::PREFIX_XMLNS) {
							declarePrefix0($nc(this->this$0->fAttributeQName)->localpart, $nc(value)->length() != 0 ? $($nc(this->this$0->fSymbolTable)->addSymbol(value)) : ($String*)nullptr);
						} else {
							declarePrefix0($XMLSymbols::EMPTY_STRING, $nc(value)->length() != 0 ? $($nc(this->this$0->fSymbolTable)->addSymbol(value)) : ($String*)nullptr);
						}
					}
				}
			}
			$assign(currentNode, currentNode->getParentNode());
		}
	}
}

void DOMValidatorHelper$DOMNamespaceContext::declarePrefix0($String* prefix, $String* uri) {
	if (this->fNamespaceSize == $nc(this->fNamespace)->length) {
		$var($StringArray, namespacearray, $new($StringArray, this->fNamespaceSize * 2));
		$System::arraycopy(this->fNamespace, 0, namespacearray, 0, this->fNamespaceSize);
		$set(this, fNamespace, namespacearray);
	}
	$nc(this->fNamespace)->set(this->fNamespaceSize++, prefix);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, uri);
}

$String* DOMValidatorHelper$DOMNamespaceContext::getURI0($String* prefix) {
	for (int32_t i = 0; i < this->fNamespaceSize; i += 2) {
		if ($nc(this->fNamespace)->get(i) == prefix) {
			return $nc(this->fNamespace)->get(i + 1);
		}
	}
	return nullptr;
}

DOMValidatorHelper$DOMNamespaceContext::DOMValidatorHelper$DOMNamespaceContext() {
}

$Class* DOMValidatorHelper$DOMNamespaceContext::load$($String* name, bool initialize) {
	$loadClass(DOMValidatorHelper$DOMNamespaceContext, name, initialize, &_DOMValidatorHelper$DOMNamespaceContext_ClassInfo_, allocate$DOMValidatorHelper$DOMNamespaceContext);
	return class$;
}

$Class* DOMValidatorHelper$DOMNamespaceContext::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com