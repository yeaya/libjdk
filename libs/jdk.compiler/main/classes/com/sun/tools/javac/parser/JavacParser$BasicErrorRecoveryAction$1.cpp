#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction$1.h>
#include <com/sun/tools/javac/parser/JavacParser$BasicErrorRecoveryAction.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
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

void JavacParser$BasicErrorRecoveryAction$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$JavacParser$BasicErrorRecoveryAction::init$($enum$name, $enum$ordinal);
}

$JCTree* JavacParser$BasicErrorRecoveryAction$1::doRecover($JavacParser* parser) {
	return $nc(parser)->parseStatementAsBlock();
}

JavacParser$BasicErrorRecoveryAction$1::JavacParser$BasicErrorRecoveryAction$1() {
}

$Class* JavacParser$BasicErrorRecoveryAction$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(JavacParser$BasicErrorRecoveryAction$1, init$, void, $String*, int32_t)},
		{"doRecover", "(Lcom/sun/tools/javac/parser/JavacParser;)Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(JavacParser$BasicErrorRecoveryAction$1, doRecover, $JCTree*, $JavacParser*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction", "com.sun.tools.javac.parser.JavacParser", "BasicErrorRecoveryAction", $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.parser.JavacParser$BasicErrorRecoveryAction$1",
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
	$loadClass(JavacParser$BasicErrorRecoveryAction$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JavacParser$BasicErrorRecoveryAction$1));
	});
	return class$;
}

$Class* JavacParser$BasicErrorRecoveryAction$1::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com