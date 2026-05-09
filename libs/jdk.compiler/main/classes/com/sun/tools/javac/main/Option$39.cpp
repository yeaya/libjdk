#include <com/sun/tools/javac/main/Option$39.h>
#include <com/sun/tools/javac/main/Option$41.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/main/OptionHelper.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef ADD_EXPORTS
#undef ADD_MODULES
#undef LIMIT_MODULES
#undef MODULE_PATH
#undef PATCH_MODULE
#undef UPGRADE_MODULE_PATH

using $OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$41 = ::com::sun::tools::javac::main::Option$41;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $OptionHelper = ::com::sun::tools::javac::main::OptionHelper;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $VM = ::jdk::internal::misc::VM;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$39$$Lambda$lambda$process$0 : public $Supplier {
	$class(Option$39$$Lambda$lambda$process$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$($String* arg) {
		$set(this, arg, arg);
	}
	virtual $Object* get() override {
		return $of(Option$39::lambda$process$0(arg));
	}
	$String* arg = nullptr;
};
$Class* Option$39$$Lambda$lambda$process$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arg", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Option$39$$Lambda$lambda$process$0, arg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Option$39$$Lambda$lambda$process$0, init$, void, $String*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Option$39$$Lambda$lambda$process$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Option$39$$Lambda$lambda$process$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$39$$Lambda$lambda$process$0);
	});
	return class$;
}
$Class* Option$39$$Lambda$lambda$process$0::class$ = nullptr;

class Option$39$$Lambda$lambda$process$1$1 : public $Predicate {
	$class(Option$39$$Lambda$lambda$process$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* s) override {
		return Option$39::lambda$process$1($cast($String, s));
	}
};
$Class* Option$39$$Lambda$lambda$process$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Option$39$$Lambda$lambda$process$1$1, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Option$39$$Lambda$lambda$process$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Option$39$$Lambda$lambda$process$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$39$$Lambda$lambda$process$1$1);
	});
	return class$;
}
$Class* Option$39$$Lambda$lambda$process$1$1::class$ = nullptr;

void Option$39::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, descrKey, kind, group);
}

void Option$39::process($OptionHelper* helper, $String* option) {
	$useLocalObjectStack();
	$var($StringArray, runtimeArgs, $VM::getRuntimeArguments());
	{
		$var($StringArray, arr$, runtimeArgs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, arg, arr$->get(i$));
			{
				$var($OptionArray, arr$, getSupportedRuntimeOptions());
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$Option* o = arr$->get(i$);
					if ($nc(o)->matches(arg)) {
						$init($Option$41);
						int32_t eq = 0;
						$var($String, mods, nullptr);
						switch ($nc($Option$41::$SwitchMap$com$sun$tools$javac$main$Option)->get((o)->ordinal())) {
						case 1:
							eq = $nc(arg)->indexOf(u'=');
							$Assert::check(eq > 0, $$new(Option$39$$Lambda$lambda$process$0, arg));
							$assign(mods, $cast($String, $$nc($$nc($Arrays::stream($($(arg->substring(eq + 1))->split(","_s))))->filter($$new(Option$39$$Lambda$lambda$process$1$1)))->collect($($Collectors::joining(","_s)))));
							if (!$nc(mods)->isEmpty()) {
								$var($String, updatedArg, $str({$(arg->substring(0, eq + 1)), mods}));
								o->handleOption(helper, updatedArg, $($Collections::emptyIterator()));
							}
							break;
						default:
							o->handleOption(helper, arg, $($Collections::emptyIterator()));
							break;
						}
						break;
					}
				}
			}
		}
	}
}

$OptionArray* Option$39::getSupportedRuntimeOptions() {
	$init($Option);
	$var($OptionArray, supportedRuntimeOptions, $new($OptionArray, {
		$Option::ADD_EXPORTS,
		$Option::ADD_MODULES,
		$Option::LIMIT_MODULES,
		$Option::MODULE_PATH,
		$Option::UPGRADE_MODULE_PATH,
		$Option::PATCH_MODULE
	}));
	return supportedRuntimeOptions;
}

bool Option$39::lambda$process$1($String* s) {
	$init(Option$39);
	bool var$0 = !$nc(s)->isEmpty();
	return var$0 && !s->equals("ALL-DEFAULT"_s);
}

$String* Option$39::lambda$process$0($String* arg) {
	$init(Option$39);
	return ($str({"invalid runtime option:"_s, arg}));
}

Option$39::Option$39() {
}

$Class* Option$39::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$0")) {
			return Option$39$$Lambda$lambda$process$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.main.Option$39$$Lambda$lambda$process$1$1")) {
			return Option$39$$Lambda$lambda$process$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$39, init$, void, $String*, int32_t, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"getSupportedRuntimeOptions", "()[Lcom/sun/tools/javac/main/Option;", nullptr, $PRIVATE, $method(Option$39, getSupportedRuntimeOptions, $OptionArray*)},
		{"lambda$process$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$39, lambda$process$0, $String*, $String*)},
		{"lambda$process$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$39, lambda$process$1, bool, $String*)},
		{"process", "(Lcom/sun/tools/javac/main/OptionHelper;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Option$39, process, void, $OptionHelper*, $String*), "com.sun.tools.javac.main.Option$InvalidValueException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$39", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$39",
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
	$loadClass(Option$39, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$39));
	});
	return class$;
}

$Class* Option$39::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com