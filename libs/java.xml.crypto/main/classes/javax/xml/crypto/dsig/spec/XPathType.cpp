#include <javax/xml/crypto/dsig/spec/XPathType.h>

#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $XPathType$Filter = ::javax::xml::crypto::dsig::spec::XPathType$Filter;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _XPathType_FieldInfo_[] = {
	{"expression", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathType, expression)},
	{"filter", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PRIVATE | $FINAL, $field(XPathType, filter)},
	{"nsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XPathType, nsMap)},
	{}
};

$MethodInfo _XPathType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/XPathType$Filter;)V", nullptr, $PUBLIC, $method(XPathType, init$, void, $String*, $XPathType$Filter*)},
	{"<init>", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/XPathType$Filter;Ljava/util/Map;)V", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/XPathType$Filter;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(XPathType, init$, void, $String*, $XPathType$Filter*, $Map*)},
	{"getExpression", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPathType, getExpression, $String*)},
	{"getFilter", "()Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC, $virtualMethod(XPathType, getFilter, $XPathType$Filter*)},
	{"getNamespaceMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XPathType, getNamespaceMap, $Map*)},
	{}
};

$InnerClassInfo _XPathType_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.spec.XPathType$Filter", "javax.xml.crypto.dsig.spec.XPathType", "Filter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPathType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.XPathType",
	"java.lang.Object",
	nullptr,
	_XPathType_FieldInfo_,
	_XPathType_MethodInfo_,
	nullptr,
	nullptr,
	_XPathType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.spec.XPathType$Filter"
};

$Object* allocate$XPathType($Class* clazz) {
	return $of($alloc(XPathType));
}

void XPathType::init$($String* expression, $XPathType$Filter* filter) {
	if (expression == nullptr) {
		$throwNew($NullPointerException, "expression cannot be null"_s);
	}
	if (filter == nullptr) {
		$throwNew($NullPointerException, "filter cannot be null"_s);
	}
	$set(this, expression, expression);
	$set(this, filter, filter);
	$set(this, nsMap, $Collections::emptyMap());
}

void XPathType::init$($String* expression, $XPathType$Filter* filter, $Map* namespaceMap) {
	$useLocalCurrentObjectStackCache();
	if (expression == nullptr) {
		$throwNew($NullPointerException, "expression cannot be null"_s);
	}
	if (filter == nullptr) {
		$throwNew($NullPointerException, "filter cannot be null"_s);
	}
	if (namespaceMap == nullptr) {
		$throwNew($NullPointerException, "namespaceMap cannot be null"_s);
	}
	$set(this, expression, expression);
	$set(this, filter, filter);
	$var($Map, tempMap, $Collections::checkedMap($$new($HashMap), $String::class$, $String::class$));
	$nc(tempMap)->putAll(namespaceMap);
	$set(this, nsMap, $Collections::unmodifiableMap(tempMap));
}

$String* XPathType::getExpression() {
	return this->expression;
}

$XPathType$Filter* XPathType::getFilter() {
	return this->filter;
}

$Map* XPathType::getNamespaceMap() {
	return this->nsMap;
}

XPathType::XPathType() {
}

$Class* XPathType::load$($String* name, bool initialize) {
	$loadClass(XPathType, name, initialize, &_XPathType_ClassInfo_, allocate$XPathType);
	return class$;
}

$Class* XPathType::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax