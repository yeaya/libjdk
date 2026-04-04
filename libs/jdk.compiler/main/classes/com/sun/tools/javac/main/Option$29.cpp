#include <com/sun/tools/javac/main/Option$29.h>
#include <com/sun/tools/javac/main/Option$ArgKind.h>
#include <com/sun/tools/javac/main/Option$HiddenGroup.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <jcpp.h>

#undef SHOULDSTOP

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$ArgKind = ::com::sun::tools::javac::main::Option$ArgKind;
using $Option$HiddenGroup = ::com::sun::tools::javac::main::Option$HiddenGroup;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

void Option$29::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group, $Option$ArgKind* argKind) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group, argKind);
}

void Option$29::process($OptionHelper* helper, $String* option, $String* arg) {
	$init($Option$HiddenGroup);
	$Option$HiddenGroup::SHOULDSTOP->process(helper, option, arg);
}

Option$29::Option$29() {
}

$Class* Option$29::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;Lcom/sun/tools/javac/main/Option$ArgKind;)V", nullptr, $PRIVATE, $method(Option$29, init$, void, $String*, int32_t, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*, $Option$ArgKind*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$29, process, void, $OptionHelper*, $String*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$29", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$29",
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
	$loadClass(Option$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$29));
	});
	return class$;
}

$Class* Option$29::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com