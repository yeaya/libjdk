#include <com/sun/tools/javac/parser/DocCommentParser$14.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$26.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCReturn.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef INLINE

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$26 = ::com::sun::tools::javac::parser::DocCommentParser$26;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void DocCommentParser$14::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$14::parse(int32_t pos, $DocCommentParser$TagParser$Kind* kind) {
	$useLocalObjectStack();
	$var($List, description, nullptr);
	$init($DocCommentParser$26);
	switch ($nc($DocCommentParser$26::$SwitchMap$com$sun$tools$javac$parser$DocCommentParser$TagParser$Kind)->get($nc((kind))->ordinal())) {
	case 1:
		$assign(description, this->this$0->blockContent());
		break;
	case 2:
		$assign(description, this->this$0->inlineContent());
		break;
	default:
		$throwNew($IllegalArgumentException, $(kind->toString()));
	}
	return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newReturnTree(kind == $DocCommentParser$TagParser$Kind::INLINE, description));
}

DocCommentParser$14::DocCommentParser$14() {
}

$Class* DocCommentParser$14::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$14, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(DocCommentParser$14, init$, void, $DocCommentParser*, $DocCommentParser$TagParser$Kind*, $DocTree$Kind*)},
		{"parse", "(ILcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, $virtualMethod(DocCommentParser$14, parse, $DCTree*, int32_t, $DocCommentParser$TagParser$Kind*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.DocCommentParser",
		"createTagParsers",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$14", nullptr, nullptr, 0},
		{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.DocCommentParser$14",
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
	$loadClass(DocCommentParser$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentParser$14);
	});
	return class$;
}

$Class* DocCommentParser$14::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com