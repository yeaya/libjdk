#include <com/sun/tools/javac/code/TypeMetadata$Entry.h>
#include <com/sun/tools/javac/code/TypeMetadata$Entry$Kind.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <jcpp.h>

using $TypeMetadata$Entry$Kind = ::com::sun::tools::javac::code::TypeMetadata$Entry$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* TypeMetadata$Entry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"combine", "(Lcom/sun/tools/javac/code/TypeMetadata$Entry;)Lcom/sun/tools/javac/code/TypeMetadata$Entry;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeMetadata$Entry, combine, TypeMetadata$Entry*, TypeMetadata$Entry*)},
		{"kind", "()Lcom/sun/tools/javac/code/TypeMetadata$Entry$Kind;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeMetadata$Entry, kind, $TypeMetadata$Entry$Kind*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.TypeMetadata$Entry", "com.sun.tools.javac.code.TypeMetadata", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.TypeMetadata$Entry$Kind", "com.sun.tools.javac.code.TypeMetadata$Entry", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.TypeMetadata$Entry",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.TypeMetadata"
	};
	$loadClass(TypeMetadata$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeMetadata$Entry);
	});
	return class$;
}

$Class* TypeMetadata$Entry::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com