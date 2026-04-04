#include <com/sun/tools/javac/parser/DocCommentParser$20.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCSummary.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void DocCommentParser$20::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$20::parse(int32_t pos) {
	$useLocalObjectStack();
	$var($List, summary, this->this$0->inlineContent());
	return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newSummaryTree(summary));
}

DocCommentParser$20::DocCommentParser$20() {
}

$Class* DocCommentParser$20::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$20, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(DocCommentParser$20, init$, void, $DocCommentParser*, $DocCommentParser$TagParser$Kind*, $DocTree$Kind*)},
		{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, $virtualMethod(DocCommentParser$20, parse, $DCTree*, int32_t), "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.DocCommentParser",
		"createTagParsers",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$20", nullptr, nullptr, 0},
		{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.DocCommentParser$20",
		"com.sun.tools.javac.parser.DocCommentParser$TagParser",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.DocCommentParser"
	};
	$loadClass(DocCommentParser$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentParser$20);
	});
	return class$;
}

$Class* DocCommentParser$20::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com