#include <com/sun/tools/javac/main/Option$7.h>
#include <com/sun/tools/javac/main/Option$InvalidValueException.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef PATCH_MODULE

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Pattern = ::java::util::regex::Pattern;
using $Collectors = ::java::util::stream::Collectors;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$7$$Lambda$lambda$process$0 : public $Function {
	$class(Option$7$$Lambda$lambda$process$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		return $of(Option$7::lambda$process$0($cast($String, s)));
	}
};
$Class* Option$7$$Lambda$lambda$process$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Option$7$$Lambda$lambda$process$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Option$7$$Lambda$lambda$process$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$7$$Lambda$lambda$process$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Option$7$$Lambda$lambda$process$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$7$$Lambda$lambda$process$0);
	});
	return class$;
}
$Class* Option$7$$Lambda$lambda$process$0::class$ = nullptr;

void Option$7::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$7::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalObjectStack();
	if ($nc(arg)->isEmpty()) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	} else if ($$nc($$nc(getPattern())->matcher(arg))->matches()) {
		$init($Option);
		$var($String, prev, $nc(helper)->get($Option::PATCH_MODULE));
		if (prev == nullptr) {
			$Option::process(helper, option, arg);
		} else {
			$var($String, argModulePackage, arg->substring(0, arg->indexOf(u'=')));
			bool isRepeated = $$sure($Set, $$nc($$nc($Arrays::stream($(prev->split($cstr({'\0'})))))->map($$new(Option$7$$Lambda$lambda$process$0)))->collect($($Collectors::toSet())))->contains(argModulePackage);
			if (isRepeated) {
				$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::RepeatedValueForPatchModule(argModulePackage)))));
			} else {
				$Option::process(helper, option, $$str({prev, $$str(u'\0'), arg}));
			}
		}
	} else {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::BadValueForOption(option, arg)))));
	}
}

$Pattern* Option$7::getPattern() {
	return $Pattern::compile("([^/]+)=(,*[^,].*)"_s);
}

$String* Option$7::lambda$process$0($String* s) {
	$init(Option$7);
	return $nc(s)->substring(0, $nc(s)->indexOf(u'='));
}

Option$7::Option$7() {
}

$Class* Option$7::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.main.Option$7$$Lambda$lambda$process$0")) {
			return Option$7$$Lambda$lambda$process$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$7, init$, void, $String*, int32_t, $String*, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $virtualMethod(Option$7, getPattern, $Pattern*)},
		{"lambda$process$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$7, lambda$process$0, $String*, $String*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$7, process, void, $OptionHelper*, $String*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$7", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$7",
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
	$loadClass(Option$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$7));
	});
	return class$;
}

$Class* Option$7::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com