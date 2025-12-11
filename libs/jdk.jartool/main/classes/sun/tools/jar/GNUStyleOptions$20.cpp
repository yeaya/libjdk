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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GNUStyleOptions$20$$Lambda$printHelp>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GNUStyleOptions$20$$Lambda$printHelp::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GNUStyleOptions$20$$Lambda$printHelp::*)()>(&GNUStyleOptions$20$$Lambda$printHelp::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GNUStyleOptions$20$$Lambda$printHelp::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.GNUStyleOptions$20$$Lambda$printHelp",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* GNUStyleOptions$20$$Lambda$printHelp::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$20$$Lambda$printHelp, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GNUStyleOptions$20$$Lambda$printCompatHelp$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GNUStyleOptions$20$$Lambda$printCompatHelp$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GNUStyleOptions$20$$Lambda$printCompatHelp$1::*)()>(&GNUStyleOptions$20$$Lambda$printCompatHelp$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GNUStyleOptions$20$$Lambda$printCompatHelp$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.GNUStyleOptions$20$$Lambda$printCompatHelp$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* GNUStyleOptions$20$$Lambda$printCompatHelp$1::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$20$$Lambda$printCompatHelp$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GNUStyleOptions$20$$Lambda$printCompatHelp$1::class$ = nullptr;

$MethodInfo _GNUStyleOptions$20_MethodInfo_[] = {
	{"<init>", "(ZZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$20::*)(bool,bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$20::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$20_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$20_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$20", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$20_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$20",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$20_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$20_EnclosingMethodInfo_,
	_GNUStyleOptions$20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$20($Class* clazz) {
	return $of($alloc(GNUStyleOptions$20));
}

void GNUStyleOptions$20::init$(bool hasArg, bool argIsOptional, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, argIsOptional, type, aliases);
}

void GNUStyleOptions$20::process($Main* jartool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(jartool)->info == nullptr) {
		if (arg == nullptr) {
			$set(jartool, info, static_cast<$Consumer*>($new(GNUStyleOptions$20$$Lambda$printHelp)));
			return;
		}
		if (!$nc(arg)->equals("compat"_s)) {
			$throw($($$new($GNUStyleOptions$BadArgs, "error.illegal.option"_s, arg)->showUsage(true)));
		}
		$set(jartool, info, static_cast<$Consumer*>($new(GNUStyleOptions$20$$Lambda$printCompatHelp$1)));
	}
}

GNUStyleOptions$20::GNUStyleOptions$20() {
}

$Class* GNUStyleOptions$20::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GNUStyleOptions$20$$Lambda$printHelp::classInfo$.name)) {
			return GNUStyleOptions$20$$Lambda$printHelp::load$(name, initialize);
		}
		if (name->equals(GNUStyleOptions$20$$Lambda$printCompatHelp$1::classInfo$.name)) {
			return GNUStyleOptions$20$$Lambda$printCompatHelp$1::load$(name, initialize);
		}
	}
	$loadClass(GNUStyleOptions$20, name, initialize, &_GNUStyleOptions$20_ClassInfo_, allocate$GNUStyleOptions$20);
	return class$;
}

$Class* GNUStyleOptions$20::class$ = nullptr;

		} // jar
	} // tools
} // sun