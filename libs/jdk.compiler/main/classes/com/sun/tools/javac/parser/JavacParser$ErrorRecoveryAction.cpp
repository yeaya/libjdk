#include <com/sun/tools/javac/parser/JavacParser$ErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Class* JavacParser$ErrorRecoveryAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavacParser$ErrorRecoveryAction, doRecover, $JCTree*, $JavacParser*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "ErrorRecoveryAction", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.parser.JavacParser$ErrorRecoveryAction",
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
		"com.sun.tools.javac.parser.JavacParser"
	};
	$loadClass(JavacParser$ErrorRecoveryAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacParser$ErrorRecoveryAction);
	});
	return class$;
}

$Class* JavacParser$ErrorRecoveryAction::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com