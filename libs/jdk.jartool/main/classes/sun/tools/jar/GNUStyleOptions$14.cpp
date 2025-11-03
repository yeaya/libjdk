#include <sun/tools/jar/GNUStyleOptions$14.h>

#include <java/util/regex/Pattern.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Pattern = ::java::util::regex::Pattern;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$14_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$14::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$14::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$14_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$14_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$14", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$14_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$14",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$14_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$14_EnclosingMethodInfo_,
	_GNUStyleOptions$14_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$14($Class* clazz) {
	return $of($alloc(GNUStyleOptions$14));
}

void GNUStyleOptions$14::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$14::process($Main* jartool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	try {
		$set($nc(jartool), modulesToHash, $Pattern::compile(arg));
	} catch ($PatternSyntaxException& e) {
		$throw($($$new($GNUStyleOptions$BadArgs, "err.badpattern"_s, arg)->showUsage(true)));
	}
}

GNUStyleOptions$14::GNUStyleOptions$14() {
}

$Class* GNUStyleOptions$14::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$14, name, initialize, &_GNUStyleOptions$14_ClassInfo_, allocate$GNUStyleOptions$14);
	return class$;
}

$Class* GNUStyleOptions$14::class$ = nullptr;

		} // jar
	} // tools
} // sun