#include <com/sun/tools/sjavac/Main.h>
#include <com/sun/tools/sjavac/client/ClientMain.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <com/sun/tools/sjavac/server/ServerMain.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef STARTSERVER

using $ClientMain = ::com::sun::tools::sjavac::client::ClientMain;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $ServerMain = ::com::sun::tools::sjavac::server::ServerMain;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Main$$Lambda$lambda$go$0 : public $Predicate {
	$class(Main$$Lambda$lambda$go$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* arg) override {
		return Main::lambda$go$0($cast($String, arg));
	}
};
$Class* Main$$Lambda$lambda$go$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Main$$Lambda$lambda$go$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Main$$Lambda$lambda$go$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.Main$$Lambda$lambda$go$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(Main$$Lambda$lambda$go$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$$Lambda$lambda$go$0);
	});
	return class$;
}
$Class* Main$$Lambda$lambda$go$0::class$ = nullptr;

void Main::init$() {
}

void Main::main($StringArray* args) {
	$System::exit(go(args));
}

int32_t Main::go($StringArray* args) {
	$useLocalObjectStack();
	bool serverMode = $$nc($$nc($Arrays::asList(args))->stream())->anyMatch($$new(Main$$Lambda$lambda$go$0));
	return serverMode ? $ServerMain::run(args) : $ClientMain::run(args);
}

bool Main::lambda$go$0($String* arg) {
	$init($Option);
	return $nc(arg)->startsWith($Option::STARTSERVER->arg);
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.Main$$Lambda$lambda$go$0")) {
			return Main$$Lambda$lambda$go$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Main, init$, void)},
		{"go", "([Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Main, go, int32_t, $StringArray*)},
		{"lambda$go$0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Main, lambda$go$0, bool, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Main, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.Main",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Main, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main);
	});
	return class$;
}

$Class* Main::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com