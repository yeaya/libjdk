#include <com/sun/tools/javac/main/Option$14.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/main/Option$OptionGroup.h>
#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef JAVAC

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $Option = ::com::sun::tools::javac::main::Option;
using $Option$OptionGroup = ::com::sun::tools::javac::main::Option$OptionGroup;
using $Option$OptionKind = ::com::sun::tools::javac::main::Option$OptionKind;
using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$PrefixKind = ::com::sun::tools::javac::util::Log$PrefixKind;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Supplier = ::java::util::function::Supplier;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

class Option$14$$Lambda$lambda$help$0 : public $Function {
	$class(Option$14$$Lambda$lambda$help$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* provider) override {
		return Option$14::lambda$help$0($cast($PlatformProvider, provider));
	}
};
$Class* Option$14$$Lambda$lambda$help$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Option$14$$Lambda$lambda$help$0, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Option$14$$Lambda$lambda$help$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$14$$Lambda$lambda$help$0",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Option$14$$Lambda$lambda$help$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$14$$Lambda$lambda$help$0);
	});
	return class$;
}
$Class* Option$14$$Lambda$lambda$help$0::class$ = nullptr;

class Option$14$$Lambda$LinkedHashSet$1 : public $Supplier {
	$class(Option$14$$Lambda$LinkedHashSet$1, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		return $of($new($LinkedHashSet));
	}
};
$Class* Option$14$$Lambda$LinkedHashSet$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Option$14$$Lambda$LinkedHashSet$1, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Option$14$$Lambda$LinkedHashSet$1, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.main.Option$14$$Lambda$LinkedHashSet$1",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Option$14$$Lambda$LinkedHashSet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Option$14$$Lambda$LinkedHashSet$1);
	});
	return class$;
}
$Class* Option$14$$Lambda$LinkedHashSet$1::class$ = nullptr;

void Option$14::init$($String* $enum$name, int32_t $enum$ordinal, $String* text, $String* argsNameKey, $String* descrKey, $Option$OptionKind* kind, $Option$OptionGroup* group) {
	$Option::init$($enum$name, $enum$ordinal, text, argsNameKey, descrKey, kind, group);
}

void Option$14::help($Log* log) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($PlatformProvider);
	$load($Arguments);
	$var($Iterable, providers, $ServiceLoader::load($PlatformProvider::class$, $($Arguments::class$->getClassLoader())));
	$var($Set, platforms, $cast($Set, $$nc($$nc($StreamSupport::stream($($nc(providers)->spliterator()), false))->flatMap($$new(Option$14$$Lambda$lambda$help$0)))->collect($($Collectors::toCollection($$new(Option$14$$Lambda$LinkedHashSet$1))))));
	$var($StringBuilder, targets, $new($StringBuilder));
	$var($String, delim, ""_s);
	{
		$var($Iterator, i$, $nc(platforms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, platform, $cast($String, i$->next()));
			{
				targets->append(delim);
				targets->append(platform);
				$assign(delim, ", "_s);
			}
		}
	}
	$init($Log$PrefixKind);
	$Option::help(log, $($nc(log)->localize($Log$PrefixKind::JAVAC, this->descrKey, $$new($ObjectArray, {$(targets->toString())}))));
}

$Stream* Option$14::lambda$help$0($PlatformProvider* provider) {
	$init(Option$14);
	$useLocalObjectStack();
	return $StreamSupport::stream($($$nc($nc(provider)->getSupportedPlatformNames())->spliterator()), false);
}

Option$14::Option$14() {
}

$Class* Option$14::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.main.Option$14$$Lambda$lambda$help$0")) {
			return Option$14$$Lambda$lambda$help$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.main.Option$14$$Lambda$LinkedHashSet$1")) {
			return Option$14$$Lambda$LinkedHashSet$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/main/Option$OptionKind;Lcom/sun/tools/javac/main/Option$OptionGroup;)V", nullptr, $PRIVATE, $method(Option$14, init$, void, $String*, int32_t, $String*, $String*, $String*, $Option$OptionKind*, $Option$OptionGroup*)},
		{"help", "(Lcom/sun/tools/javac/util/Log;)V", nullptr, $PROTECTED, $virtualMethod(Option$14, help, void, $Log*)},
		{"lambda$help$0", "(Lcom/sun/tools/javac/platform/PlatformProvider;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$14, lambda$help$0, $Stream*, $PlatformProvider*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.main.Option",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$14", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$14",
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
	$loadClass(Option$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$14));
	});
	return class$;
}

$Class* Option$14::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com