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

$MethodInfo _Parser_MethodInfo_[] = {
	{"parseCompilationUnit", "()Lcom/sun/tools/javac/tree/JCTree$JCCompilationUnit;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseCompilationUnit, $JCTree$JCCompilationUnit*)},
	{"parseExpression", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseExpression, $JCTree$JCExpression*)},
	{"parseStatement", "()Lcom/sun/tools/javac/tree/JCTree$JCStatement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseStatement, $JCTree$JCStatement*)},
	{"parseType", "()Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parseType, $JCTree$JCExpression*)},
	{}
};

$ClassInfo _Parser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.parser.Parser",
	nullptr,
	nullptr,
	nullptr,
	_Parser_MethodInfo_
};

$Object* allocate$Parser($Class* clazz) {
	return $of($alloc(Parser));
}

$Class* Parser::load$($String* name, bool initialize) {
	$loadClass(Parser, name, initialize, &_Parser_ClassInfo_, allocate$Parser);
	return class$;
}

$Class* Parser::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com