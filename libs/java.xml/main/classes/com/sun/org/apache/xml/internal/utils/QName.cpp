#include <com/sun/org/apache/xml/internal/utils/QName.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/NameSpace.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/XML11Char.h>
#include <java/util/Stack.h>
#include <java/util/StringTokenizer.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ER_ARG_LOCALNAME_INVALID
#undef ER_ARG_LOCALNAME_NULL
#undef ER_ARG_PREFIX_INVALID
#undef ER_NAME_CANT_START_WITH_COLON
#undef ER_PREFIX_MUST_RESOLVE
#undef S_XMLNAMESPACEURI

using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $NameSpace = ::com::sun::org::apache::xml::internal::utils::NameSpace;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $XML11Char = ::com::sun::org::apache::xml::internal::utils::XML11Char;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Stack = ::java::util::Stack;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _QName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(QName, serialVersionUID)},
	{"_localName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(QName, _localName)},
	{"_namespaceURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(QName, _namespaceURI)},
	{"_prefix", "Ljava/lang/String;", nullptr, $PROTECTED, $field(QName, _prefix)},
	{"S_XMLNAMESPACEURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(QName, S_XMLNAMESPACEURI)},
	{"m_hashCode", "I", nullptr, $PRIVATE, $field(QName, m_hashCode)},
	{}
};

$MethodInfo _QName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(QName, init$, void)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, bool)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, $String*, bool)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, bool)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Stack;)V", "(Ljava/lang/String;Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/utils/NameSpace;>;)V", $PUBLIC, $method(QName, init$, void, $String*, $Stack*)},
	{"<init>", "(Ljava/lang/String;Ljava/util/Stack;Z)V", "(Ljava/lang/String;Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/utils/NameSpace;>;Z)V", $PUBLIC, $method(QName, init$, void, $String*, $Stack*, bool)},
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $Element*, $PrefixResolver*)},
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;Z)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $Element*, $PrefixResolver*, bool)},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $PrefixResolver*)},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;Z)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $PrefixResolver*, bool)},
	{"equals", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(QName, equals, bool, $String*, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(QName, equals, bool, Object$*)},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getLocalName, $String*)},
	{"getLocalPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getLocalPart, $String*)},
	{"getLocalPart", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, getLocalPart, $String*, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getNamespace, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getNamespaceURI, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getPrefix, $String*)},
	{"getPrefixFromXMLNSDecl", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, getPrefixFromXMLNSDecl, $String*, $String*)},
	{"getPrefixPart", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, getPrefixPart, $String*, $String*)},
	{"getQNameFromString", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/QName;", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, getQNameFromString, QName*, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(QName, hashCode, int32_t)},
	{"isXMLNSDecl", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, isXMLNSDecl, bool, $String*)},
	{"toNamespacedString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, toNamespacedString, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, toString, $String*)},
	{}
};

$ClassInfo _QName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.QName",
	"java.lang.Object",
	"java.io.Serializable",
	_QName_FieldInfo_,
	_QName_MethodInfo_
};

$Object* allocate$QName($Class* clazz) {
	return $of($alloc(QName));
}

$String* QName::S_XMLNAMESPACEURI = nullptr;

void QName::init$() {
}

void QName::init$($String* namespaceURI, $String* localName) {
	QName::init$(namespaceURI, localName, false);
}

void QName::init$($String* namespaceURI, $String* localName, bool validate) {
	$useLocalCurrentObjectStackCache();
	if (localName == nullptr) {
		$init($XMLErrorResources);
		$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_NULL, nullptr)));
	}
	if (validate) {
		if (!$XML11Char::isXML11ValidNCName(localName)) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
	}
	$set(this, _namespaceURI, namespaceURI);
	$set(this, _localName, localName);
	this->m_hashCode = $nc($(toString()))->hashCode();
}

void QName::init$($String* namespaceURI, $String* prefix, $String* localName) {
	QName::init$(namespaceURI, prefix, localName, false);
}

void QName::init$($String* namespaceURI, $String* prefix, $String* localName, bool validate) {
	$useLocalCurrentObjectStackCache();
	if (localName == nullptr) {
		$init($XMLErrorResources);
		$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_NULL, nullptr)));
	}
	if (validate) {
		if (!$XML11Char::isXML11ValidNCName(localName)) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
		if ((nullptr != prefix) && (!$XML11Char::isXML11ValidNCName(prefix))) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_PREFIX_INVALID, nullptr)));
		}
	}
	$set(this, _namespaceURI, namespaceURI);
	$set(this, _prefix, prefix);
	$set(this, _localName, localName);
	this->m_hashCode = $nc($(toString()))->hashCode();
}

void QName::init$($String* localName) {
	QName::init$(localName, false);
}

void QName::init$($String* localName, bool validate) {
	$useLocalCurrentObjectStackCache();
	if (localName == nullptr) {
		$init($XMLErrorResources);
		$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_NULL, nullptr)));
	}
	if (validate) {
		if (!$XML11Char::isXML11ValidNCName(localName)) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
	}
	$set(this, _namespaceURI, nullptr);
	$set(this, _localName, localName);
	this->m_hashCode = $nc($(toString()))->hashCode();
}

void QName::init$($String* qname, $Stack* namespaces) {
	QName::init$(qname, namespaces, false);
}

void QName::init$($String* qname, $Stack* namespaces, bool validate) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, nullptr);
	$var($String, prefix, nullptr);
	int32_t indexOfNSSep = $nc(qname)->indexOf((int32_t)u':');
	if (indexOfNSSep > 0) {
		$assign(prefix, qname->substring(0, indexOfNSSep));
		if (prefix->equals("xml"_s)) {
			$assign(namespace$, QName::S_XMLNAMESPACEURI);
		} else if (prefix->equals("xmlns"_s)) {
			return;
		} else {
			int32_t depth = $nc(namespaces)->size();
			for (int32_t i = depth - 1; i >= 0; --i) {
				$var($NameSpace, ns, $cast($NameSpace, namespaces->get(i)));
				while (nullptr != ns) {
					if ((nullptr != ns->m_prefix) && prefix->equals(ns->m_prefix)) {
						$assign(namespace$, ns->m_uri);
						i = -1;
						break;
					}
					$assign(ns, ns->m_next);
				}
			}
		}
		if (nullptr == namespace$) {
			$init($XMLErrorResources);
			$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_PREFIX_MUST_RESOLVE, $$new($ObjectArray, {$of(prefix)}))));
		}
	}
	$set(this, _localName, (indexOfNSSep < 0) ? qname : qname->substring(indexOfNSSep + 1));
	if (validate) {
		if ((this->_localName == nullptr) || (!$XML11Char::isXML11ValidNCName(this->_localName))) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
	}
	$set(this, _namespaceURI, namespace$);
	$set(this, _prefix, prefix);
	this->m_hashCode = $nc($(toString()))->hashCode();
}

void QName::init$($String* qname, $Element* namespaceContext, $PrefixResolver* resolver) {
	QName::init$(qname, namespaceContext, resolver, false);
}

void QName::init$($String* qname, $Element* namespaceContext, $PrefixResolver* resolver, bool validate) {
	$useLocalCurrentObjectStackCache();
	$set(this, _namespaceURI, nullptr);
	int32_t indexOfNSSep = $nc(qname)->indexOf((int32_t)u':');
	if (indexOfNSSep > 0) {
		if (nullptr != namespaceContext) {
			$var($String, prefix, qname->substring(0, indexOfNSSep));
			$set(this, _prefix, prefix);
			if (prefix->equals("xml"_s)) {
				$set(this, _namespaceURI, QName::S_XMLNAMESPACEURI);
			} else if (prefix->equals("xmlns"_s)) {
				return;
			} else {
				$set(this, _namespaceURI, $nc(resolver)->getNamespaceForPrefix(prefix, namespaceContext));
			}
			if (nullptr == this->_namespaceURI) {
				$init($XMLErrorResources);
				$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_PREFIX_MUST_RESOLVE, $$new($ObjectArray, {$of(prefix)}))));
			}
		} else {
		}
	}
	$set(this, _localName, (indexOfNSSep < 0) ? qname : qname->substring(indexOfNSSep + 1));
	if (validate) {
		if ((this->_localName == nullptr) || (!$XML11Char::isXML11ValidNCName(this->_localName))) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
	}
	this->m_hashCode = $nc($(toString()))->hashCode();
}

void QName::init$($String* qname, $PrefixResolver* resolver) {
	QName::init$(qname, resolver, false);
}

void QName::init$($String* qname, $PrefixResolver* resolver, bool validate) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$set(this, _namespaceURI, nullptr);
	int32_t indexOfNSSep = $nc(qname)->indexOf((int32_t)u':');
	if (indexOfNSSep > 0) {
		$assign(prefix, qname->substring(0, indexOfNSSep));
		if (prefix->equals("xml"_s)) {
			$set(this, _namespaceURI, QName::S_XMLNAMESPACEURI);
		} else {
			$set(this, _namespaceURI, $nc(resolver)->getNamespaceForPrefix(prefix));
		}
		if (nullptr == this->_namespaceURI) {
			$init($XMLErrorResources);
			$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_PREFIX_MUST_RESOLVE, $$new($ObjectArray, {$of(prefix)}))));
		}
		$set(this, _localName, qname->substring(indexOfNSSep + 1));
	} else if (indexOfNSSep == 0) {
		$init($XMLErrorResources);
		$throwNew($RuntimeException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_NAME_CANT_START_WITH_COLON, nullptr)));
	} else {
		$set(this, _localName, qname);
	}
	if (validate) {
		if ((this->_localName == nullptr) || (!$XML11Char::isXML11ValidNCName(this->_localName))) {
			$init($XMLErrorResources);
			$throwNew($IllegalArgumentException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ARG_LOCALNAME_INVALID, nullptr)));
		}
	}
	this->m_hashCode = $nc($(toString()))->hashCode();
	$set(this, _prefix, prefix);
}

$String* QName::getNamespaceURI() {
	return this->_namespaceURI;
}

$String* QName::getPrefix() {
	return this->_prefix;
}

$String* QName::getLocalName() {
	return this->_localName;
}

$String* QName::toString() {
	return this->_prefix != nullptr ? ($str({this->_prefix, ":"_s, this->_localName})) : (this->_namespaceURI != nullptr ? ($str({"{"_s, this->_namespaceURI, "}"_s, this->_localName})) : this->_localName);
}

$String* QName::toNamespacedString() {
	return (this->_namespaceURI != nullptr ? ($str({"{"_s, this->_namespaceURI, "}"_s, this->_localName})) : this->_localName);
}

$String* QName::getNamespace() {
	return getNamespaceURI();
}

$String* QName::getLocalPart() {
	return getLocalName();
}

int32_t QName::hashCode() {
	return this->m_hashCode;
}

bool QName::equals($String* ns, $String* localPart) {
	$useLocalCurrentObjectStackCache();
	$var($String, thisnamespace, getNamespaceURI());
	bool var$0 = $nc($(getLocalName()))->equals(localPart);
	return var$0 && (((nullptr != thisnamespace) && (nullptr != ns)) ? $nc(thisnamespace)->equals(ns) : ((nullptr == thisnamespace) && (nullptr == ns)));
}

bool QName::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($equals(object, this)) {
		return true;
	}
	if ($instanceOf(QName, object)) {
		$var(QName, qname, $cast(QName, object));
		$var($String, thisnamespace, getNamespaceURI());
		$var($String, thatnamespace, $nc(qname)->getNamespaceURI());
		bool var$0 = $nc($(getLocalName()))->equals($(qname->getLocalName()));
		return var$0 && (((nullptr != thisnamespace) && (nullptr != thatnamespace)) ? $nc(thisnamespace)->equals(thatnamespace) : ((nullptr == thisnamespace) && (nullptr == thatnamespace)));
	} else {
		return false;
	}
}

QName* QName::getQNameFromString($String* name) {
	$init(QName);
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, name, "{}"_s, false));
	$var(QName, qname, nullptr);
	$var($String, s1, tokenizer->nextToken());
	$var($String, s2, tokenizer->hasMoreTokens() ? tokenizer->nextToken() : ($String*)nullptr);
	if (nullptr == s2) {
		$assign(qname, $new(QName, ($String*)nullptr, s1));
	} else {
		$assign(qname, $new(QName, s1, s2));
	}
	return qname;
}

bool QName::isXMLNSDecl($String* attRawName) {
	$init(QName);
	bool var$0 = $nc(attRawName)->startsWith("xmlns"_s);
	if (var$0) {
		bool var$1 = attRawName->equals("xmlns"_s);
		var$0 = (var$1 || attRawName->startsWith("xmlns:"_s));
	}
	return (var$0);
}

$String* QName::getPrefixFromXMLNSDecl($String* attRawName) {
	$init(QName);
	int32_t index = $nc(attRawName)->indexOf((int32_t)u':');
	return (index >= 0) ? attRawName->substring(index + 1) : ""_s;
}

$String* QName::getLocalPart($String* qname) {
	$init(QName);
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	return (index < 0) ? qname : qname->substring(index + 1);
}

$String* QName::getPrefixPart($String* qname) {
	$init(QName);
	int32_t index = $nc(qname)->indexOf((int32_t)u':');
	return (index >= 0) ? qname->substring(0, index) : ""_s;
}

QName::QName() {
}

void clinit$QName($Class* class$) {
	$assignStatic(QName::S_XMLNAMESPACEURI, "http://www.w3.org/XML/1998/namespace"_s);
}

$Class* QName::load$($String* name, bool initialize) {
	$loadClass(QName, name, initialize, &_QName_ClassInfo_, clinit$QName, allocate$QName);
	return class$;
}

$Class* QName::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com