#include <com/sun/tools/javac/api/Messages.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* Messages::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Messages, add, void, $String*), "java.util.MissingResourceException"},
		{"getLocalizedString", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Messages, getLocalizedString, $String*, $Locale*, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.api.Messages",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Messages, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Messages);
	});
	return class$;
}

$Class* Messages::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com