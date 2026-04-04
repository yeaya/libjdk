#include <com/sun/tools/javac/main/Option$6.h>
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
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef MODULE_SOURCE_PATH

using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Pattern = ::java::util::regex::Pattern;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$6$$Lambda$lambda$process$0 : public $Predicate {
	$class(Option$6$$Lambda$lambda$process$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Pattern* moduleSpecificForm) {
		$set(this, moduleSpecificForm, moduleSpecificForm);
	}
	virtual bool test(Object$* s) override {
		 return Option$6::lambda$process$0(moduleSpecificForm, $cast($String, s));
	}
	$Pattern* moduleSpecificForm = nullptr;
};
$Class* Option$6$$Lambda$lambda$process$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"moduleSpecificForm", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $field(Option$6$$Lambda$lambda$process$0, moduleSpecificForm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, $PUBLIC, $method(Option$6$$Lambda$lambda$process$0, init$, void, $Pattern*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Option$6$$Lambda$lambda$process$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Option$6$$Lambda$lambda$process$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$6$$Lambda$lambda$process$0);
	});
	return class$;
}
$Class* Option$6$$Lambda$lambda$process$0::class$ = nullptr;

class Option$6$$Lambda$lambda$process$1$1 : public $Function {
	$class(Option$6$$Lambda$lambda$process$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Option$6::lambda$process$1($cast($String, s)));
	}
};
$Class* Option$6$$Lambda$lambda$process$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Option$6$$Lambda$lambda$process$1$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Option$6$$Lambda$lambda$process$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Option$6$$Lambda$lambda$process$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$6$$Lambda$lambda$process$1$1);
	});
	return class$;
}
$Class* Option$6$$Lambda$lambda$process$1$1::class$ = nullptr;

class Option$6$$Lambda$lambda$process$2$2 : public $Predicate {
	$class(Option$6$$Lambda$lambda$process$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* argModule) {
		$set(this, argModule, argModule);
	}
	virtual bool test(Object$* s) override {
		 return Option$6::lambda$process$2(argModule, $cast($String, s));
	}
	$String* argModule = nullptr;
};
$Class* Option$6$$Lambda$lambda$process$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"argModule", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Option$6$$Lambda$lambda$process$2$2, argModule)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Option$6$$Lambda$lambda$process$2$2, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Option$6$$Lambda$lambda$process$2$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$2$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Option$6$$Lambda$lambda$process$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$6$$Lambda$lambda$process$2$2);
	});
	return class$;
}
$Class* Option$6$$Lambda$lambda$process$2$2::class$ = nullptr;

class Option$6$$Lambda$lambda$process$3$3 : public $Predicate {
	$class(Option$6$$Lambda$lambda$process$3$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Pattern* moduleSpecificForm) {
		$set(this, moduleSpecificForm, moduleSpecificForm);
	}
	virtual bool test(Object$* s) override {
		 return Option$6::lambda$process$3(moduleSpecificForm, $cast($String, s));
	}
	$Pattern* moduleSpecificForm = nullptr;
};
$Class* Option$6$$Lambda$lambda$process$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"moduleSpecificForm", "Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $field(Option$6$$Lambda$lambda$process$3$3, moduleSpecificForm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/regex/Pattern;)V", nullptr, $PUBLIC, $method(Option$6$$Lambda$lambda$process$3$3, init$, void, $Pattern*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Option$6$$Lambda$lambda$process$3$3, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$3$3",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Option$6$$Lambda$lambda$process$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$6$$Lambda$lambda$process$3$3);
	});
	return class$;
}
$Class* Option$6$$Lambda$lambda$process$3$3::class$ = nullptr;

void Option$6::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$6::process($OptionHelper* helper, $String* option, $String* arg) {
	$useLocalObjectStack();
	if ($nc(arg)->isEmpty()) {
		$throw($($nc(helper)->newInvalidValueException($($CompilerProperties$Errors::NoValueForOption(option)))));
	}
	$var($Pattern, moduleSpecificForm, getPattern());
	$init($Option);
	$var($String, prev, $nc(helper)->get($Option::MODULE_SOURCE_PATH));
	if (prev == nullptr) {
		$Option::process(helper, option, arg);
	} else if ($$nc($nc(moduleSpecificForm)->matcher(arg))->matches()) {
		$var($String, argModule, arg->substring(0, arg->indexOf(u'=')));
		bool isRepeated = $$nc($$nc($$nc($Arrays::stream($(prev->split($cstr({'\0'})))))->filter($$new(Option$6$$Lambda$lambda$process$0, moduleSpecificForm)))->map($$new(Option$6$$Lambda$lambda$process$1$1)))->anyMatch($$new(Option$6$$Lambda$lambda$process$2$2, argModule));
		if (isRepeated) {
			$throw($(helper->newInvalidValueException($($CompilerProperties$Errors::RepeatedValueForModuleSourcePath(argModule)))));
		} else {
			$Option::process(helper, option, $$str({prev, $$str(u'\0'), arg}));
		}
	} else {
		bool isPresent = $$nc($Arrays::stream($(prev->split($cstr({'\0'})))))->anyMatch($$new(Option$6$$Lambda$lambda$process$3$3, moduleSpecificForm));
		if (isPresent) {
			$init($CompilerProperties$Errors);
			$throw($(helper->newInvalidValueException($CompilerProperties$Errors::MultipleValuesForModuleSourcePath)));
		} else {
			$Option::process(helper, option, $$str({prev, $$str(u'\0'), arg}));
		}
	}
}

$Pattern* Option$6::getPattern() {
	return $Pattern::compile("([\\p{Alnum}$_.]+)=(.*)"_s);
}

bool Option$6::lambda$process$3($Pattern* moduleSpecificForm, $String* s) {
	$init(Option$6);
	return !$$nc($nc(moduleSpecificForm)->matcher(s))->matches();
}

bool Option$6::lambda$process$2($String* argModule, $String* s) {
	$init(Option$6);
	return $nc(s)->equals(argModule);
}

$String* Option$6::lambda$process$1($String* s) {
	$init(Option$6);
	return $nc(s)->substring(0, $nc(s)->indexOf(u'='));
}

bool Option$6::lambda$process$0($Pattern* moduleSpecificForm, $String* s) {
	$init(Option$6);
	return $$nc($nc(moduleSpecificForm)->matcher(s))->matches();
}

Option$6::Option$6() {
}

$Class* Option$6::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$0")) {
			return Option$6$$Lambda$lambda$process$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$1$1")) {
			return Option$6$$Lambda$lambda$process$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$2$2")) {
			return Option$6$$Lambda$lambda$process$2$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.main.Option$6$$Lambda$lambda$process$3$3")) {
			return Option$6$$Lambda$lambda$process$3$3::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$6, init$, void, $String*, int32_t, $String*, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"getPattern", "()Ljava/util/regex/Pattern;", nullptr, $PUBLIC, $virtualMethod(Option$6, getPattern, $Pattern*)},
		{"lambda$process$0", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$6, lambda$process$0, bool, $Pattern*, $String*)},
		{"lambda$process$1", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$6, lambda$process$1, $String*, $String*)},
		{"lambda$process$2", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$6, lambda$process$2, bool, $String*, $String*)},
		{"lambda$process$3", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$6, lambda$process$3, bool, $Pattern*, $String*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$6, process, void, $OptionHelper*, $String*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$6", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$6",
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
	$loadClass(Option$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$6));
	});
	return class$;
}

$Class* Option$6::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com