#include <com/sun/tools/javac/tree/DocCommentTable.h>
#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/tree/DCTree$DCDocComment.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <jcpp.h>

using $Tokens$Comment = ::com::sun::tools::javac::parser::Tokens$Comment;
using $DCTree$DCDocComment = ::com::sun::tools::javac::tree::DCTree$DCDocComment;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$Class* DocCommentTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getComment", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/parser/Tokens$Comment;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTable, getComment, $Tokens$Comment*, $JCTree*)},
		{"getCommentText", "(Lcom/sun/tools/javac/tree/JCTree;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTable, getCommentText, $String*, $JCTree*)},
		{"getCommentTree", "(Lcom/sun/tools/javac/tree/JCTree;)Lcom/sun/tools/javac/tree/DCTree$DCDocComment;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTable, getCommentTree, $DCTree$DCDocComment*, $JCTree*)},
		{"hasComment", "(Lcom/sun/tools/javac/tree/JCTree;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTable, hasComment, bool, $JCTree*)},
		{"putComment", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/parser/Tokens$Comment;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocCommentTable, putComment, void, $JCTree*, $Tokens$Comment*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.tree.DocCommentTable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocCommentTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentTable);
	});
	return class$;
}

$Class* DocCommentTable::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com