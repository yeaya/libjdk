#include <com/sun/tools/javac/main/CommandLine$UnmatchedQuote.h>
#include <com/sun/tools/javac/main/CommandLine.h>
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
				namespace main {

void CommandLine$UnmatchedQuote::init$($String* variable) {
	$Exception::init$();
	$set(this, variableName, variable);
}

CommandLine$UnmatchedQuote::CommandLine$UnmatchedQuote() {
}

CommandLine$UnmatchedQuote::CommandLine$UnmatchedQuote(const CommandLine$UnmatchedQuote& e) : $Exception(e) {
}

void CommandLine$UnmatchedQuote::throw$() {
	throw *this;
}

$Class* CommandLine$UnmatchedQuote::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CommandLine$UnmatchedQuote, serialVersionUID)},
		{"variableName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(CommandLine$UnmatchedQuote, variableName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CommandLine$UnmatchedQuote, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.CommandLine$UnmatchedQuote", "com.sun.tools.javac.main.CommandLine", "UnmatchedQuote", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.main.CommandLine$UnmatchedQuote",
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
		"com.sun.tools.javac.main.CommandLine"
	};
	$loadClass(CommandLine$UnmatchedQuote, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CommandLine$UnmatchedQuote);
	});
	return class$;
}

$Class* CommandLine$UnmatchedQuote::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com