#include <com/sun/tools/javac/platform/PlatformUtils.h>
#include <com/sun/tools/javac/main/Arguments.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <com/sun/tools/javac/platform/PlatformProvider$PlatformNotSupported.h>
#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

using $Arguments = ::com::sun::tools::javac::main::Arguments;
using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $PlatformProvider = ::com::sun::tools::javac::platform::PlatformProvider;
using $PlatformProvider$PlatformNotSupported = ::com::sun::tools::javac::platform::PlatformProvider$PlatformNotSupported;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

class PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0 : public $Predicate {
	$class(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* platformProviderName) {
		$set(this, platformProviderName, platformProviderName);
	}
	virtual bool test(Object$* provider) override {
		return PlatformUtils::lambda$lookupPlatformDescription$0(platformProviderName, $cast($PlatformProvider, provider));
	}
	$String* platformProviderName = nullptr;
};
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"platformProviderName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, platformProviderName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0);
	});
	return class$;
}
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::class$ = nullptr;

class PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1 : public $Function {
	$class(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$($String* platformProviderName, $String* platformOptions) {
		$set(this, platformProviderName, platformProviderName);
		$set(this, platformOptions, platformOptions);
	}
	virtual $Object* apply(Object$* provider) override {
		return PlatformUtils::lambda$lookupPlatformDescription$1(platformProviderName, platformOptions, $cast($PlatformProvider, provider));
	}
	$String* platformProviderName = nullptr;
	$String* platformOptions = nullptr;
};
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"platformProviderName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformProviderName)},
		{"platformOptions", "Ljava/lang/String;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformOptions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, init$, void, $String*, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1);
	});
	return class$;
}
$Class* PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::class$ = nullptr;

class PlatformUtils$$Lambda$equals$2 : public $Predicate {
	$class(PlatformUtils$$Lambda$equals$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		return $nc(inst$)->equals(arg0);
	}
	$String* inst$ = nullptr;
};
$Class* PlatformUtils$$Lambda$equals$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformUtils$$Lambda$equals$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PlatformUtils$$Lambda$equals$2, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PlatformUtils$$Lambda$equals$2, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.platform.PlatformUtils$$Lambda$equals$2",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlatformUtils$$Lambda$equals$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformUtils$$Lambda$equals$2);
	});
	return class$;
}
$Class* PlatformUtils$$Lambda$equals$2::class$ = nullptr;

void PlatformUtils::init$() {
}

$PlatformDescription* PlatformUtils::lookupPlatformDescription($String* platformString) {
	$useLocalObjectStack();
	$load(PlatformUtils);
	$beforeCallerSensitive();
	int32_t separator = $nc(platformString)->indexOf(":"_s);
	$var($String, platformProviderName, separator != (-1) ? platformString->substring(0, separator) : platformString);
	$var($String, platformOptions, separator != (-1) ? platformString->substring(separator + 1) : ""_s);
	$load($PlatformProvider);
	$load($Arguments);
	$var($Iterable, providers, $ServiceLoader::load($PlatformProvider::class$, $($Arguments::class$->getClassLoader())));
	return $cast($PlatformDescription, $$nc($$nc($$nc($$nc($StreamSupport::stream($($nc(providers)->spliterator()), false))->filter($$new(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0, platformProviderName)))->findFirst())->flatMap($$new(PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1, platformProviderName, platformOptions)))->orElse(nullptr));
}

$Optional* PlatformUtils::lambda$lookupPlatformDescription$1($String* platformProviderName, $String* platformOptions, $PlatformProvider* provider) {
	try {
		return $Optional::of($($nc(provider)->getPlatform(platformProviderName, platformOptions)));
	} catch ($PlatformProvider$PlatformNotSupported& pns) {
		return $Optional::empty();
	}
	$shouldNotReachHere();
}

bool PlatformUtils::lambda$lookupPlatformDescription$0($String* platformProviderName, $PlatformProvider* provider) {
	$useLocalObjectStack();
	return $$nc($StreamSupport::stream($($$nc($nc(provider)->getSupportedPlatformNames())->spliterator()), false))->anyMatch($$new(PlatformUtils$$Lambda$equals$2, $nc(platformProviderName)));
}

PlatformUtils::PlatformUtils() {
}

$Class* PlatformUtils::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0")) {
			return PlatformUtils$$Lambda$lambda$lookupPlatformDescription$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.platform.PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1")) {
			return PlatformUtils$$Lambda$lambda$lookupPlatformDescription$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.platform.PlatformUtils$$Lambda$equals$2")) {
			return PlatformUtils$$Lambda$equals$2::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformUtils, init$, void)},
		{"lambda$lookupPlatformDescription$0", "(Ljava/lang/String;Lcom/sun/tools/javac/platform/PlatformProvider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlatformUtils, lambda$lookupPlatformDescription$0, bool, $String*, $PlatformProvider*)},
		{"lambda$lookupPlatformDescription$1", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/tools/javac/platform/PlatformProvider;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlatformUtils, lambda$lookupPlatformDescription$1, $Optional*, $String*, $String*, $PlatformProvider*)},
		{"lookupPlatformDescription", "(Ljava/lang/String;)Lcom/sun/tools/javac/platform/PlatformDescription;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformUtils, lookupPlatformDescription, $PlatformDescription*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.platform.PlatformUtils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformUtils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformUtils);
	});
	return class$;
}

$Class* PlatformUtils::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com