#include <com/sun/tools/javac/main/Option$26.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/FileWriter.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <jcpp.h>

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $Log = ::com::sun::tools::javac::util::Log;
using $FileWriter = ::java::io::FileWriter;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$26::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$26::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalObjectStack();
	try {
		$var($Log, log, $nc(helper)->getLog());
		$nc(log)->setWriters($$new($PrintWriter, $$new($FileWriter, arg), true));
	} catch ($IOException& e) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::ErrorWritingFile(arg, $(e->getMessage()))))));
	}
	$Option::process(helper, option, arg);
}

Option$26::Option$26() {
}

$Class* Option$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$26, init$, void, $String*, int32_t, $String*, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$26, process, void, $OptionHelper*, $String*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$26", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$26",
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$26));
	});
	return class$;
}

$Class* Option$26::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com