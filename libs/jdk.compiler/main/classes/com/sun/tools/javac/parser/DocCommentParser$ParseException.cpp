#include <com/sun/tools/javac/parser/DocCommentParser$ParseException.h>
#include <com/sun/tools/javac/parser/DocCommentParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void DocCommentParser$ParseException::init$($String* key) {
	$Exception::init$(key);
}

DocCommentParser$ParseException::DocCommentParser$ParseException() {
}

DocCommentParser$ParseException::DocCommentParser$ParseException(const DocCommentParser$ParseException& e) : $Exception(e) {
}

void DocCommentParser$ParseException::throw$() {
	throw *this;
}

$Class* DocCommentParser$ParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocCommentParser$ParseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(DocCommentParser$ParseException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.DocCommentParser$ParseException", "com.sun.tools.javac.parser.DocCommentParser", "ParseException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.parser.DocCommentParser$ParseException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.DocCommentParser"
	};
	$loadClass(DocCommentParser$ParseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocCommentParser$ParseException);
	});
	return class$;
}

$Class* DocCommentParser$ParseException::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com