#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$Class* MessageFormatter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.util.MessageFormatter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MessageFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageFormatter);
	});
	return class$;
}

$Class* MessageFormatter::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com