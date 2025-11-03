#include <sun/tools/jar/GNUStyleOptions$12.h>

#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$12_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$12::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$12::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$12_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$12_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$12", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$12_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$12",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$12_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$12_EnclosingMethodInfo_,
	_GNUStyleOptions$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$12($Class* clazz) {
	return $of($alloc(GNUStyleOptions$12));
}

void GNUStyleOptions$12::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$12::process($Main* jartool, $String* opt, $String* arg) {
	$nc(jartool)->Mflag = true;
}

GNUStyleOptions$12::GNUStyleOptions$12() {
}

$Class* GNUStyleOptions$12::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$12, name, initialize, &_GNUStyleOptions$12_ClassInfo_, allocate$GNUStyleOptions$12);
	return class$;
}

$Class* GNUStyleOptions$12::class$ = nullptr;

		} // jar
	} // tools
} // sun