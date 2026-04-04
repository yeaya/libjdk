#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$2.h>
#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JavacParser$BasicErrorRecoveryAction = ::com::sun::tools::javac::parser::JavacParser$BasicErrorRecoveryAction;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void JavacParser$BasicErrorRecoveryAction$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacParser$BasicErrorRecoveryAction::init$($enum$name, $enum$ordinal);
}

$JCTree* JavacParser$BasicErrorRecoveryAction$2::doRecover($JavacParser* parser) {
	return $nc(parser)->catchClause();
}

JavacParser$BasicErrorRecoveryAction$2::JavacParser$BasicErrorRecoveryAction$2() {
}

$Class* JavacParser$BasicErrorRecoveryAction$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(JavacParser$BasicErrorRecoveryAction$2, init$, void, $String*, int32_t)},
		{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(JavacParser$BasicErrorRecoveryAction$2, doRecover, $JCTree*, $JavacParser*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$2",
		"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.JavacParser"
	};
	$loadClass(JavacParser$BasicErrorRecoveryAction$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacParser$BasicErrorRecoveryAction$2));
	});
	return class$;
}

$Class* JavacParser$BasicErrorRecoveryAction$2::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com