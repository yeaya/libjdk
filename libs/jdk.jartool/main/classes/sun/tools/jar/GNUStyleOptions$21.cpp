#include <sun/tools/jar/GNUStyleOptions$21.h>

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

class GNUStyleOptions$21$$Lambda$printHelpExtra : public $Consumer {
	$class(GNUStyleOptions$21$$Lambda$printHelpExtra, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* out) override {
		$GNUStyleOptions::printHelpExtra($cast($PrintWriter, out));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GNUStyleOptions$21$$Lambda$printHelpExtra>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GNUStyleOptions$21$$Lambda$printHelpExtra::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GNUStyleOptions$21$$Lambda$printHelpExtra::*)()>(&GNUStyleOptions$21$$Lambda$printHelpExtra::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GNUStyleOptions$21$$Lambda$printHelpExtra::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.GNUStyleOptions$21$$Lambda$printHelpExtra",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* GNUStyleOptions$21$$Lambda$printHelpExtra::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$21$$Lambda$printHelpExtra, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GNUStyleOptions$21$$Lambda$printHelpExtra::class$ = nullptr;

$MethodInfo _GNUStyleOptions$21_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$21::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$21::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$21_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$21_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$21", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$21_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$21",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$21_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$21_EnclosingMethodInfo_,
	_GNUStyleOptions$21_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$21($Class* clazz) {
	return $of($alloc(GNUStyleOptions$21));
}

void GNUStyleOptions$21::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$21::process($Main* jartool, $String* opt, $String* arg) {
	$set($nc(jartool), info, static_cast<$Consumer*>($new(GNUStyleOptions$21$$Lambda$printHelpExtra)));
}

GNUStyleOptions$21::GNUStyleOptions$21() {
}

$Class* GNUStyleOptions$21::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GNUStyleOptions$21$$Lambda$printHelpExtra::classInfo$.name)) {
			return GNUStyleOptions$21$$Lambda$printHelpExtra::load$(name, initialize);
		}
	}
	$loadClass(GNUStyleOptions$21, name, initialize, &_GNUStyleOptions$21_ClassInfo_, allocate$GNUStyleOptions$21);
	return class$;
}

$Class* GNUStyleOptions$21::class$ = nullptr;

		} // jar
	} // tools
} // sun