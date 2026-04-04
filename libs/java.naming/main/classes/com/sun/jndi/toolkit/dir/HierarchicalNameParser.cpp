#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <java/util/Properties.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $HierarchicalName = ::com::sun::jndi::toolkit::dir::HierarchicalName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $Name = ::javax::naming::Name;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$Properties* HierarchicalNameParser::mySyntax = nullptr;

void HierarchicalNameParser::init$() {
}

$Name* HierarchicalNameParser::parse($String* name) {
	return $new($HierarchicalName, name, HierarchicalNameParser::mySyntax);
}

void HierarchicalNameParser::clinit$($Class* clazz) {
	$assignStatic(HierarchicalNameParser::mySyntax, $new($Properties));
	{
		HierarchicalNameParser::mySyntax->put("jndi.syntax.direction"_s, "left_to_right"_s);
		HierarchicalNameParser::mySyntax->put("jndi.syntax.separator"_s, "/"_s);
		HierarchicalNameParser::mySyntax->put("jndi.syntax.ignorecase"_s, "true"_s);
		HierarchicalNameParser::mySyntax->put("jndi.syntax.escape"_s, "\\"_s);
		HierarchicalNameParser::mySyntax->put("jndi.syntax.beginquote"_s, "\""_s);
		HierarchicalNameParser::mySyntax->put("jndi.syntax.trimblanks"_s, "false"_s);
	}
}

HierarchicalNameParser::HierarchicalNameParser() {
}

$Class* HierarchicalNameParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mySyntax", "Ljava/util/Properties;", nullptr, $STATIC | $FINAL, $staticField(HierarchicalNameParser, mySyntax)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HierarchicalNameParser, init$, void)},
		{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, $virtualMethod(HierarchicalNameParser, parse, $Name*, $String*), "javax.naming.NamingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.toolkit.dir.HierarchicalNameParser",
		"java.lang.Object",
		"javax.naming.NameParser",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HierarchicalNameParser, name, initialize, &classInfo$$, HierarchicalNameParser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HierarchicalNameParser);
	});
	return class$;
}

$Class* HierarchicalNameParser::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com