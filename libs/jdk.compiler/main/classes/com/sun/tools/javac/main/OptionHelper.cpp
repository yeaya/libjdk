#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$InvalidValueException = ::com::sun::tools::javac::main::Option$InvalidValueException;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $Log = ::com::sun::tools::javac::util::Log;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void OptionHelper::init$() {
}

$Option$InvalidValueException* OptionHelper::newInvalidValueException($JCDiagnostic$Error* error) {
	$useLocalObjectStack();
	return $new($Option$InvalidValueException, $($$nc(getLog())->localize(error)));
}

OptionHelper::OptionHelper() {
}

$Class* OptionHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OptionHelper, init$, void)},
		{"addClassName", "(Ljava/lang/String;)V", nullptr, $ABSTRACT, $virtualMethod(OptionHelper, addClassName, void, $String*)},
		{"addFile", "(Ljava/nio/file/Path;)V", nullptr, $ABSTRACT, $virtualMethod(OptionHelper, addFile, void, $Path*)},
		{"get", "(Lcom/sun/tools/javac/main/Option;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, get, $String*, $Option*)},
		{"getLog", "()Lcom/sun/tools/javac/util/Log;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, getLog, $Log*)},
		{"getOwnName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, getOwnName, $String*)},
		{"handleFileManagerOption", "(Lcom/sun/tools/javac/main/Option;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, handleFileManagerOption, bool, $Option*, $String*)},
		{"newInvalidValueException", "(Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Lcom/sun/tools/javac/main/Option$InvalidValueException;", nullptr, 0, $virtualMethod(OptionHelper, newInvalidValueException, $Option$InvalidValueException*, $JCDiagnostic$Error*)},
		{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, put, void, $String*, $String*)},
		{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, remove, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.OptionHelper$GrumpyHelper", "com.sun.tools.javac.main.OptionHelper", "GrumpyHelper", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.main.OptionHelper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.OptionHelper$GrumpyHelper"
	};
	$loadClass(OptionHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OptionHelper);
	});
	return class$;
}

$Class* OptionHelper::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com