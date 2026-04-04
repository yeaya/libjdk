#include <com/sun/tools/javac/parser/ReferenceParser$ParseException.h>
#include <com/sun/tools/javac/parser/ReferenceParser.h>
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

void ReferenceParser$ParseException::init$($String* message) {
	$Exception::init$(message);
}

ReferenceParser$ParseException::ReferenceParser$ParseException() {
}

ReferenceParser$ParseException::ReferenceParser$ParseException(const ReferenceParser$ParseException& e) : $Exception(e) {
}

void ReferenceParser$ParseException::throw$() {
	throw *this;
}

$Class* ReferenceParser$ParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceParser$ParseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ReferenceParser$ParseException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.ReferenceParser$ParseException", "com.sun.tools.javac.parser.ReferenceParser", "ParseException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.parser.ReferenceParser$ParseException",
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
		"com.sun.tools.javac.parser.ReferenceParser"
	};
	$loadClass(ReferenceParser$ParseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceParser$ParseException);
	});
	return class$;
}

$Class* ReferenceParser$ParseException::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com