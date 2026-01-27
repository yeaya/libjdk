#include <javax/xml/namespace/QName.h>

#include <javax/xml/XMLConstants.h>
#include <jcpp.h>

#undef DEFAULT_NS_PREFIX
#undef NULL_NS_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;

namespace javax {
	namespace xml {
		namespace namespace$ {

$FieldInfo _QName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QName, serialVersionUID)},
	{"namespaceURI", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(QName, namespaceURI)},
	{"localPart", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(QName, localPart)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(QName, prefix)},
	{}
};

$MethodInfo _QName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(QName, init$, void, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(QName, equals, bool, Object$*)},
	{"getLocalPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getLocalPart, $String*)},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getNamespaceURI, $String*)},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, getPrefix, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(QName, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(QName, toString, $String*)},
	{"valueOf", "(Ljava/lang/String;)Ljavax/xml/namespace/QName;", nullptr, $PUBLIC | $STATIC, $staticMethod(QName, valueOf, QName*, $String*)},
	{}
};

$ClassInfo _QName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.namespace.QName",
	"java.lang.Object",
	"java.io.Serializable",
	_QName_FieldInfo_,
	_QName_MethodInfo_
};

$Object* allocate$QName($Class* clazz) {
	return $of($alloc(QName));
}

void QName::init$($String* namespaceURI, $String* localPart) {
	$init($XMLConstants);
	QName::init$(namespaceURI, localPart, $XMLConstants::DEFAULT_NS_PREFIX);
}

void QName::init$($String* namespaceURI, $String* localPart, $String* prefix) {
	if (namespaceURI == nullptr) {
		$init($XMLConstants);
		$set(this, namespaceURI, $XMLConstants::NULL_NS_URI);
	} else {
		$set(this, namespaceURI, namespaceURI);
	}
	if (localPart == nullptr) {
		$throwNew($IllegalArgumentException, "local part cannot be \"null\" when creating a QName"_s);
	}
	$set(this, localPart, localPart);
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException, "prefix cannot be \"null\" when creating a QName"_s);
	}
	$set(this, prefix, prefix);
}

void QName::init$($String* localPart) {
	$init($XMLConstants);
	QName::init$($XMLConstants::NULL_NS_URI, localPart, $XMLConstants::DEFAULT_NS_PREFIX);
}

$String* QName::getNamespaceURI() {
	return this->namespaceURI;
}

$String* QName::getLocalPart() {
	return this->localPart;
}

$String* QName::getPrefix() {
	return this->prefix;
}

bool QName::equals(Object$* objectToTest) {
	if ($equals(objectToTest, this)) {
		return true;
	}
	if (objectToTest == nullptr || !($instanceOf(QName, objectToTest))) {
		return false;
	}
	$var(QName, qName, $cast(QName, objectToTest));
	bool var$0 = $nc(this->localPart)->equals($nc(qName)->localPart);
	return var$0 && $nc(this->namespaceURI)->equals($nc(qName)->namespaceURI);
}

int32_t QName::hashCode() {
	int32_t var$0 = $nc(this->namespaceURI)->hashCode();
	return var$0 ^ $nc(this->localPart)->hashCode();
}

$String* QName::toString() {
	$init($XMLConstants);
	if ($nc(this->namespaceURI)->equals($XMLConstants::NULL_NS_URI)) {
		return this->localPart;
	} else {
		return $str({"{"_s, this->namespaceURI, "}"_s, this->localPart});
	}
}

QName* QName::valueOf($String* qNameAsString) {
	$init(QName);
	$useLocalCurrentObjectStackCache();
	if (qNameAsString == nullptr) {
		$throwNew($IllegalArgumentException, "cannot create QName from \"null\" or \"\" String"_s);
	}
	if ($nc(qNameAsString)->length() == 0) {
		$init($XMLConstants);
		return $new(QName, $XMLConstants::NULL_NS_URI, qNameAsString, $XMLConstants::DEFAULT_NS_PREFIX);
	}
	if ($nc(qNameAsString)->charAt(0) != u'{') {
		$init($XMLConstants);
		return $new(QName, $XMLConstants::NULL_NS_URI, qNameAsString, $XMLConstants::DEFAULT_NS_PREFIX);
	}
	$init($XMLConstants);
	if ($nc(qNameAsString)->startsWith($$str({"{"_s, $XMLConstants::NULL_NS_URI, "}"_s}))) {
		$throwNew($IllegalArgumentException, $$str({"Namespace URI .equals(XMLConstants.NULL_NS_URI), .equals(\""_s, $XMLConstants::NULL_NS_URI, "\"), only the local part, \""_s, $(qNameAsString->substring(2 + $nc($XMLConstants::NULL_NS_URI)->length())), "\", should be provided."_s}));
	}
	int32_t endOfNamespaceURI = $nc(qNameAsString)->indexOf((int32_t)u'}');
	if (endOfNamespaceURI == -1) {
		$throwNew($IllegalArgumentException, $$str({"cannot create QName from \""_s, qNameAsString, "\", missing closing \"}\""_s}));
	}
	$var($String, var$0, qNameAsString->substring(1, endOfNamespaceURI));
	return $new(QName, var$0, $(qNameAsString->substring(endOfNamespaceURI + 1)), $XMLConstants::DEFAULT_NS_PREFIX);
}

QName::QName() {
}

$Class* QName::load$($String* name, bool initialize) {
	$loadClass(QName, name, initialize, &_QName_ClassInfo_, allocate$QName);
	return class$;
}

$Class* QName::class$ = nullptr;

		} // namespace$
	} // xml
} // javax