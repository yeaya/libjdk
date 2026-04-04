#include <com/sun/tools/javac/parser/JavacParser$AbstractEndPosTable.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void JavacParser$AbstractEndPosTable::init$($JavacParser* parser) {
	this->errorEndPos = $Position::NOPOS;
	$set(this, parser, parser);
}

void JavacParser$AbstractEndPosTable::setErrorEndPos(int32_t errPos) {
	if (errPos > this->errorEndPos) {
		this->errorEndPos = errPos;
	}
}

void JavacParser$AbstractEndPosTable::setParser($JavacParser* parser) {
	$set(this, parser, parser);
}

JavacParser$AbstractEndPosTable::JavacParser$AbstractEndPosTable() {
}

$Class* JavacParser$AbstractEndPosTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parser", "Lcom/sun/tools/javac/parser/JavacParser;", nullptr, $PROTECTED, $field(JavacParser$AbstractEndPosTable, parser)},
		{"errorEndPos", "I", nullptr, $PUBLIC, $field(JavacParser$AbstractEndPosTable, errorEndPos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, $PUBLIC, $method(JavacParser$AbstractEndPosTable, init$, void, $JavacParser*)},
		{"setErrorEndPos", "(I)V", nullptr, $PUBLIC, $virtualMethod(JavacParser$AbstractEndPosTable, setErrorEndPos, void, int32_t)},
		{"setParser", "(Lcom/sun/tools/javac/parser/JavacParser;)V", nullptr, $PUBLIC, $virtualMethod(JavacParser$AbstractEndPosTable, setParser, void, $JavacParser*)},
		{"to", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(JavacParser$AbstractEndPosTable, to, $JCTree*, $JCTree*)},
		{"toP", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/JCTree;", "<T:Lcom/sun/tools/javac/tree/JCTree;>(TT;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(JavacParser$AbstractEndPosTable, toP, $JCTree*, $JCTree*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable", "com.sun.tools.javac.parser.JavacParser", "AbstractEndPosTable", $PROTECTED | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.parser.JavacParser$AbstractEndPosTable",
		"java.lang.Object",
		"com.sun.tools.javac.tree.EndPosTable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.JavacParser"
	};
	$loadClass(JavacParser$AbstractEndPosTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacParser$AbstractEndPosTable);
	});
	return class$;
}

$Class* JavacParser$AbstractEndPosTable::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com