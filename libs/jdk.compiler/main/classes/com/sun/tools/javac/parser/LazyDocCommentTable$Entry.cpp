#include <com/sun/tools/javac/parser/LazyDocCommentTable$Entry.h>
#include <com/sun/tools/javac/parser/LazyDocCommentTable.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <jcpp.h>

using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void LazyDocCommentTable$Entry::init$($Tokens$Comment* c) {
	$set(this, comment, c);
}

LazyDocCommentTable$Entry::LazyDocCommentTable$Entry() {
}

$Class* LazyDocCommentTable$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comment", "Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $FINAL, $field(LazyDocCommentTable$Entry, comment)},
		{"tree", "Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, 0, $field(LazyDocCommentTable$Entry, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, 0, $method(LazyDocCommentTable$Entry, init$, void, $Tokens$Comment*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.LazyDocCommentTable$Entry", "com.sun.tools.javac.parser.LazyDocCommentTable", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.LazyDocCommentTable$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.LazyDocCommentTable"
	};
	$loadClass(LazyDocCommentTable$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LazyDocCommentTable$Entry);
	});
	return class$;
}

$Class* LazyDocCommentTable$Entry::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com