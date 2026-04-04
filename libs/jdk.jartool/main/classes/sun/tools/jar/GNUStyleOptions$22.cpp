#include <sun/tools/jar/GNUStyleOptions$22.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
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
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$22$$Lambda$printVersion : public $Consumer {
	$class(GNUStyleOptions$22$$Lambda$printVersion, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* out) override {
		$GNUStyleOptions::printVersion($cast($PrintWriter, out));
	}
};
$Class* GNUStyleOptions$22$$Lambda$printVersion::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GNUStyleOptions$22$$Lambda$printVersion, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GNUStyleOptions$22$$Lambda$printVersion, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.tools.jar.GNUStyleOptions$22$$Lambda$printVersion",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(GNUStyleOptions$22$$Lambda$printVersion, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$22$$Lambda$printVersion);
	});
	return class$;
}
$Class* GNUStyleOptions$22$$Lambda$printVersion::class$ = nullptr;

void GNUStyleOptions$22::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$22::process($Main* jartool, $String* opt, $String* arg) {
	if ($nc(jartool)->info == nullptr) {
		$set(jartool, info, $new(GNUStyleOptions$22$$Lambda$printVersion));
	}
}

GNUStyleOptions$22::GNUStyleOptions$22() {
}

$Class* GNUStyleOptions$22::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.tools.jar.GNUStyleOptions$22$$Lambda$printVersion")) {
			return GNUStyleOptions$22$$Lambda$printVersion::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$22, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
		{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$22, process, void, $Main*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.tools.jar.GNUStyleOptions",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.GNUStyleOptions$22", nullptr, nullptr, 0},
		{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.GNUStyleOptions$22",
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
	$loadClass(GNUStyleOptions$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$22);
	});
	return class$;
}

$Class* GNUStyleOptions$22::class$ = nullptr;

		} // jar
	} // tools
} // sun