#include <com/sun/tools/javac/main/Option$16.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log$WriterKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <jcpp.h>

#undef JAVAC
#undef STDOUT

using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Log$WriterKind = ::com::sun::tools::javac::util::Log$WriterKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$16::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$16::process($OptionHelper* helper, $String* option) {
	$useLocalObjectStack();
	$var($Log, log, $nc(helper)->getLog());
	$var($String, ownName, helper->getOwnName());
	$init($Log$WriterKind);
	$init($Log$PrefixKind);
	$nc(log)->printLines($Log$WriterKind::STDOUT, $Log$PrefixKind::JAVAC, "version"_s, $$new($ObjectArray, {
		ownName,
		$($JavaCompiler::version())
	}));
	$Option::process(helper, option);
}

Option$16::Option$16() {
}

$Class* Option$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$16, init$, void, $String*, int32_t, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$16, process, void, $OptionHelper*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$16", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$16",
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
	$loadClass(Option$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$16));
	});
	return class$;
}

$Class* Option$16::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com