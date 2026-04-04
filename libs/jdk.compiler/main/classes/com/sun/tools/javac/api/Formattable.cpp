#include <com/sun/tools/javac/api/Formattable.h>
#include <com/sun/tools/javac/api/Messages.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Messages = ::com::sun::tools::javac::api::Messages;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$Class* Formattable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getKind", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Formattable, getKind, $String*)},
		{"toString", "(Ljava/util/Locale;Lcom/sun/tools/javac/api/Messages;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Formattable, toString, $String*, $Locale*, $Messages*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.Formattable$LocalizedString", "com.sun.tools.javac.api.Formattable", "LocalizedString", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.api.Formattable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.Formattable$LocalizedString"
	};
	$loadClass(Formattable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Formattable);
	});
	return class$;
}

$Class* Formattable::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com