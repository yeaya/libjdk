#include <com/sun/tools/javac/parser/Tokens$Comment.h>
#include <com/sun/tools/javac/parser/Tokens$Comment$CommentStyle.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <jcpp.h>

using $Tokens$Comment$CommentStyle = ::com::sun::tools::javac::parser::Tokens$Comment$CommentStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Class* Tokens$Comment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSourcePos", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Tokens$Comment, getSourcePos, int32_t, int32_t)},
		{"getStyle", "()Lcom/sun/tools/javac/parser/Tokens$Comment$CommentStyle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Tokens$Comment, getStyle, $Tokens$Comment$CommentStyle*)},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Tokens$Comment, getText, $String*)},
		{"isDeprecated", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Tokens$Comment, isDeprecated, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.Tokens$Comment", "com.sun.tools.javac.parser.Tokens", "Comment", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.parser.Tokens$Comment$CommentStyle", "com.sun.tools.javac.parser.Tokens$Comment", "CommentStyle", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.parser.Tokens$Comment",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.Tokens"
	};
	$loadClass(Tokens$Comment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Tokens$Comment);
	});
	return class$;
}

$Class* Tokens$Comment::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com