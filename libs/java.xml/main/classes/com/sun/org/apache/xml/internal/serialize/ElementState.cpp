#include <com/sun/org/apache/xml/internal/serialize/ElementState.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

void ElementState::init$() {
}

ElementState::ElementState() {
}

$Class* ElementState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rawName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ElementState, rawName)},
		{"localName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ElementState, localName)},
		{"namespaceURI", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ElementState, namespaceURI)},
		{"preserveSpace", "Z", nullptr, $PUBLIC, $field(ElementState, preserveSpace)},
		{"empty", "Z", nullptr, $PUBLIC, $field(ElementState, empty)},
		{"afterElement", "Z", nullptr, $PUBLIC, $field(ElementState, afterElement)},
		{"afterComment", "Z", nullptr, $PUBLIC, $field(ElementState, afterComment)},
		{"doCData", "Z", nullptr, $PUBLIC, $field(ElementState, doCData)},
		{"unescaped", "Z", nullptr, $PUBLIC, $field(ElementState, unescaped)},
		{"inCData", "Z", nullptr, $PUBLIC, $field(ElementState, inCData)},
		{"prefixes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $field(ElementState, prefixes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ElementState, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.ElementState",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementState);
	});
	return class$;
}

$Class* ElementState::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com