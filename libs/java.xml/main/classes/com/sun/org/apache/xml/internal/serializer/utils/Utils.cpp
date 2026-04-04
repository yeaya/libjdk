#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <jcpp.h>

using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$Messages* Utils::messages = nullptr;

void Utils::init$() {
}

void Utils::clinit$($Class* clazz) {
	$assignStatic(Utils::messages, $new($Messages, "com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages"_s));
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"messages", "Lcom/sun/org/apache/xml/internal/serializer/utils/Messages;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Utils, messages)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Utils, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.Utils",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Utils, name, initialize, &classInfo$$, Utils::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Utils);
	});
	return class$;
}

$Class* Utils::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com