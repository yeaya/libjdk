#include <javax/naming/NameParser.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {

$Class* NameParser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NameParser, parse, $Name*, $String*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.NameParser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NameParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NameParser);
	});
	return class$;
}

$Class* NameParser::class$ = nullptr;

	} // naming
} // javax