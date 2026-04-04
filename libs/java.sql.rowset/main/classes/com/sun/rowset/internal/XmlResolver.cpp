#include <com/sun/rowset/internal/XmlResolver.h>
#include <java/io/InputStream.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace rowset {
			namespace internal {

void XmlResolver::init$() {
}

$InputSource* XmlResolver::resolveEntity($String* publicId, $String* systemId) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, schemaName, $nc(systemId)->substring($nc(systemId)->lastIndexOf(u'/')));
	if (systemId->startsWith("http://java.sun.com/xml/ns/jdbc"_s)) {
		return $new($InputSource, $(this->getClass()->getResourceAsStream(schemaName)));
	} else {
		return nullptr;
	}
}

XmlResolver::XmlResolver() {
}

$Class* XmlResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XmlResolver, init$, void)},
		{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(XmlResolver, resolveEntity, $InputSource*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.rowset.internal.XmlResolver",
		"java.lang.Object",
		"org.xml.sax.EntityResolver",
		nullptr,
		methodInfos$$
	};
	$loadClass(XmlResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XmlResolver);
	});
	return class$;
}

$Class* XmlResolver::class$ = nullptr;

			} // internal
		} // rowset
	} // sun
} // com