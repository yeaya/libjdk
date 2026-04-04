#include <com/sun/tools/javac/parser/DocCommentParser$17.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCIdentifier.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCSerialField.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCIdentifier = ::com::sun::tools::javac::tree::DCTree$DCIdentifier;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
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

void DocCommentParser$17::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$17::parse(int32_t pos) {
	$useLocalObjectStack();
	this->this$0->skipWhitespace();
	$var($DCTree$DCIdentifier, name, this->this$0->identifier());
	this->this$0->skipWhitespace();
	$var($DCTree$DCReference, type, this->this$0->reference(false));
	$var($List, description, nullptr);
	if (this->this$0->isWhitespace(this->this$0->ch)) {
		this->this$0->skipWhitespace();
		$assign(description, this->this$0->blockContent());
	}
	return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newSerialFieldTree(name, type, description));
}

DocCommentParser$17::DocCommentParser$17() {
}

$Class* DocCommentParser$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$17, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(DocCommentParser$17, init$, void, $DocCommentParser*, $DocCommentParser$TagParser$Kind*, $DocTree$Kind*)},
		{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, $virtualMethod(DocCommentParser$17, parse, $DCTree*, int32_t), "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.DocCommentParser",
		"createTagParsers",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$17", nullptr, nullptr, 0},
		{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.DocCommentParser$17",
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
	$loadClass(DocCommentParser$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentParser$17);
	});
	return class$;
}

$Class* DocCommentParser$17::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com