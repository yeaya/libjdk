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
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GNUStyleOptions$22$$Lambda$printVersion>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GNUStyleOptions$22$$Lambda$printVersion::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GNUStyleOptions$22$$Lambda$printVersion::*)()>(&GNUStyleOptions$22$$Lambda$printVersion::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GNUStyleOptions$22$$Lambda$printVersion::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.GNUStyleOptions$22$$Lambda$printVersion",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* GNUStyleOptions$22$$Lambda$printVersion::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$22$$Lambda$printVersion, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GNUStyleOptions$22$$Lambda$printVersion::class$ = nullptr;

$MethodInfo _GNUStyleOptions$22_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$22::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$22::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$22_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$22_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$22", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$22_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$22",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$22_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$22_EnclosingMethodInfo_,
	_GNUStyleOptions$22_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$22($Class* clazz) {
	return $of($alloc(GNUStyleOptions$22));
}

void GNUStyleOptions$22::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$22::process($Main* jartool, $String* opt, $String* arg) {
	if ($nc(jartool)->info == nullptr) {
		$set(jartool, info, static_cast<$Consumer*>($new(GNUStyleOptions$22$$Lambda$printVersion)));
	}
}

GNUStyleOptions$22::GNUStyleOptions$22() {
}

$Class* GNUStyleOptions$22::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GNUStyleOptions$22$$Lambda$printVersion::classInfo$.name)) {
			return GNUStyleOptions$22$$Lambda$printVersion::load$(name, initialize);
		}
	}
	$loadClass(GNUStyleOptions$22, name, initialize, &_GNUStyleOptions$22_ClassInfo_, allocate$GNUStyleOptions$22);
	return class$;
}

$Class* GNUStyleOptions$22::class$ = nullptr;

		} // jar
	} // tools
} // sun