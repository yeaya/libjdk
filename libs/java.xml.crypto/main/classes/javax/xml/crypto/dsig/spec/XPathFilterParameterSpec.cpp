#include <javax/xml/crypto/dsig/spec/XPathFilterParameterSpec.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

void XPathFilterParameterSpec::init$($String* xPath) {
	if (xPath == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, xPath, xPath);
	$set(this, nsMap, $Collections::emptyMap());
}

void XPathFilterParameterSpec::init$($String* xPath, $Map* namespaceMap) {
	$useLocalObjectStack();
	if (xPath == nullptr || namespaceMap == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, xPath, xPath);
	$var($Map, tempMap, $Collections::checkedMap($$new($HashMap), $String::class$, $String::class$));
	$nc(tempMap)->putAll(namespaceMap);
	$set(this, nsMap, $Collections::unmodifiableMap(tempMap));
}

$String* XPathFilterParameterSpec::getXPath() {
	return this->xPath;
}

$Map* XPathFilterParameterSpec::getNamespaceMap() {
	return this->nsMap;
}

XPathFilterParameterSpec::XPathFilterParameterSpec() {
}

$Class* XPathFilterParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xPath", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathFilterParameterSpec, xPath)},
		{"nsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XPathFilterParameterSpec, nsMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathFilterParameterSpec, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(XPathFilterParameterSpec, init$, void, $String*, $Map*)},
		{"getNamespaceMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $method(XPathFilterParameterSpec, getNamespaceMap, $Map*)},
		{"getXPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(XPathFilterParameterSpec, getXPath, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.xml.crypto.dsig.spec.XPathFilterParameterSpec",
		"java.lang.Object",
		"javax.xml.crypto.dsig.spec.TransformParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFilterParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFilterParameterSpec);
	});
	return class$;
}

$Class* XPathFilterParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax