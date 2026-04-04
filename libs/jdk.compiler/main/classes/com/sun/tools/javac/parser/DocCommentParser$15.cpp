#include <com/sun/tools/javac/parser/DocCommentParser$15.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/SeeTree.h>
#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser$Kind.h>
#include <com/sun/tools/javac/parser/DocCommentParser$TagParser.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <com/sun/tools/javac/tree/DCTree$DCReference.h>
#include <com/sun/tools/javac/tree/DCTree$DCSee.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocCommentParser = ::com::sun::tools::javac::parser::DocCommentParser;
using $DocCommentParser$ParseException = ::com::sun::tools::javac::parser::DocCommentParser$ParseException;
using $DocCommentParser$TagParser = ::com::sun::tools::javac::parser::DocCommentParser$TagParser;
using $DocCommentParser$TagParser$Kind = ::com::sun::tools::javac::parser::DocCommentParser$TagParser$Kind;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCReference = ::com::sun::tools::javac::tree::DCTree$DCReference;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
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

void DocCommentParser$15::init$($DocCommentParser* this$0, $DocCommentParser$TagParser$Kind* k, $DocTree$Kind* tk) {
	$set(this, this$0, this$0);
	$DocCommentParser$TagParser::init$(k, tk);
}

$DCTree* DocCommentParser$15::parse(int32_t pos) {
	$useLocalObjectStack();
	this->this$0->skipWhitespace();
	{
		$var($DCTree$DCText, string, nullptr);
		$var($List, html, nullptr);
		switch (this->this$0->ch) {
		case u'\"':
			$assign(string, this->this$0->quotedString());
			if (string != nullptr) {
				this->this$0->skipWhitespace();
				if (this->this$0->ch == u'@' || this->this$0->ch == 26 && this->this$0->bp == $nc(this->this$0->buf)->length - 1) {
					return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newSeeTree($($List::of(string))));
				}
			}
			break;
		case u'<':
			$assign(html, this->this$0->blockContent());
			if (html != nullptr) {
				return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newSeeTree(html));
			}
			break;
		case u'@':
			if (this->this$0->newline) {
				$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
			}
			break;
		case 26:
			if (this->this$0->bp == $nc(this->this$0->buf)->length - 1) {
				$throwNew($DocCommentParser$ParseException, "dc.no.content"_s);
			}
			break;
		default:
			if (this->this$0->isJavaIdentifierStart(this->this$0->ch) || this->this$0->ch == u'#') {
				$var($DCTree$DCReference, ref, this->this$0->reference(true));
				$var($List, description, this->this$0->blockContent());
				return $cast($DCTree, $$nc($nc(this->this$0->m)->at(pos))->newSeeTree($($nc(description)->prepend(ref))));
			}
		}
	}
	$throwNew($DocCommentParser$ParseException, "dc.unexpected.content"_s);
}

DocCommentParser$15::DocCommentParser$15() {
}

$Class* DocCommentParser$15::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/parser/DocCommentParser;", nullptr, $FINAL | $SYNTHETIC, $field(DocCommentParser$15, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/parser/DocCommentParser;Lcom/sun/tools/javac/parser/DocCommentParser$TagParser$Kind;Lcom/sun/source/doctree/DocTree$Kind;)V", nullptr, 0, $method(DocCommentParser$15, init$, void, $DocCommentParser*, $DocCommentParser$TagParser$Kind*, $DocTree$Kind*)},
		{"parse", "(I)Lcom/sun/tools/javac/tree/DCTree;", nullptr, $PUBLIC, $virtualMethod(DocCommentParser$15, parse, $DCTree*, int32_t), "com.sun.tools.javac.parser.DocCommentParser$ParseException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.parser.DocCommentParser",
		"createTagParsers",
		"()Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$15", nullptr, nullptr, 0},
		{"com.sun.tools.javac.parser.DocCommentParser$TagParser", "com.sun.tools.javac.parser.DocCommentParser", "TagParser", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.DocCommentParser$15",
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
	$loadClass(DocCommentParser$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentParser$15);
	});
	return class$;
}

$Class* DocCommentParser$15::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com