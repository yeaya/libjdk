#include <sun/tools/jar/GNUStyleOptions$20.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Consumer = ::java::util::function::Consumer;
using $GNUStyleOptions = ::sun::tools::jar::GNUStyleOptions;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$20$$Lambda$printHelp : public $Consumer {
	$class(GNUStyleOptions$20$$Lambda$printHelp, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* out) override {
		$GNUStyleOptions::printHelp($cast($PrintWriter, out));
	}
};
$Class* GNUStyleOptions$20$$Lambda$printHelp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GNUStyleOptions$20$$Lambda$printHelp, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GNUStyleOptions$20$$Lambda$printHelp, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.GNUStyleOptions$20$$Lambda$printHelp",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(GNUStyleOptions$20$$Lambda$printHelp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$20$$Lambda$printHelp);
	});
	return class$;
}
$Class* GNUStyleOptions$20$$Lambda$printHelp::class$ = nullptr;

class GNUStyleOptions$20$$Lambda$printCompatHelp$1 : public $Consumer {
	$class(GNUStyleOptions$20$$Lambda$printCompatHelp$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* out) override {
		$GNUStyleOptions::printCompatHelp($cast($PrintWriter, out));
	}
};
$Class* GNUStyleOptions$20$$Lambda$printCompatHelp$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GNUStyleOptions$20$$Lambda$printCompatHelp$1, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GNUStyleOptions$20$$Lambda$printCompatHelp$1, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.GNUStyleOptions$20$$Lambda$printCompatHelp$1",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(GNUStyleOptions$20$$Lambda$printCompatHelp$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$20$$Lambda$printCompatHelp$1);
	});
	return class$;
}
$Class* GNUStyleOptions$20$$Lambda$printCompatHelp$1::class$ = nullptr;

void GNUStyleOptions$20::init$(bool hasArg, bool argIsOptional, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, argIsOptional, type, aliases);
}

void GNUStyleOptions$20::process($Main* jartool, $String* opt, $String* arg) {
	$useLocalObjectStack();
	if ($nc(jartool)->info == nullptr) {
		if (arg == nullptr) {
			$set(jartool, info, $new(GNUStyleOptions$20$$Lambda$printHelp));
			return;
		}
		if (!$nc(arg)->equals("compat"_s)) {
			$throw($($$new($GNUStyleOptions$BadArgs, "error.illegal.option"_s, arg)->showUsage(true)));
		}
		$set(jartool, info, $new(GNUStyleOptions$20$$Lambda$printCompatHelp$1));
	}
}

GNUStyleOptions$20::GNUStyleOptions$20() {
}

$Class* GNUStyleOptions$20::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.tools.jar.GNUStyleOptions$20$$Lambda$printHelp")) {
			return GNUStyleOptions$20$$Lambda$printHelp::load$(name, initialize);
		}
		if (name->equals("sun.tools.jar.GNUStyleOptions$20$$Lambda$printCompatHelp$1")) {
			return GNUStyleOptions$20$$Lambda$printCompatHelp$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$20, init$, void, bool, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
		{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$20, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.tools.jar.GNUStyleOptions",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.GNUStyleOptions$20", nullptr, nullptr, 0},
		{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.GNUStyleOptions$20",
		"sun.tools.jar.GNUStyleOptions$Option",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.GNUStyleOptions"
	};
	$loadClass(GNUStyleOptions$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$20);
	});
	return class$;
}

$Class* GNUStyleOptions$20::class$ = nullptr;

		} // jar
	} // tools
} // sun