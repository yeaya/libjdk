#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeCompleter.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/comp/Annotate.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Annotate$AnnotationTypeCompleter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Annotate$AnnotationTypeCompleter, complete, void, $Symbol$ClassSymbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
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
		"com.sun.tools.javac.comp.Annotate"
	};
	$loadClass(Annotate$AnnotationTypeCompleter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Annotate$AnnotationTypeCompleter);
	});
	return class$;
}

$Class* Annotate$AnnotationTypeCompleter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com