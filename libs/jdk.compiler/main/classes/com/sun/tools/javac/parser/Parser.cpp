#include <com/sun/tools/javac/parser/Parser.h>
#include <com/sun/tools/javac/tree/JCTree$JCCompilationUnit.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <jcpp.h>

using $JCTree$JCCompilationUnit = ::com::sun::tools::javac::tree::JCTree$JCCompilationUnit;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Class* Parser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parseCompilationUnit", "()Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseCompilationUnit, $JCTree$JCCompilationUnit*)},
		{"parseExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseExpression, $JCTree$JCExpression*)},
		{"parseStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseStatement, $JCTree$JCStatement*)},
		{"parseType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseType, $JCTree$JCExpression*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.parser.Parser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Parser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Parser);
	});
	return class$;
}

$Class* Parser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com