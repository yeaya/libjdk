#include <sun/tools/jar/GNUStyleOptions$13.h>

#include <java/lang/module/ModuleDescriptor$Version.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$13_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$13, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$13, process, void, $Main*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$13_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$13_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$13", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$13_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$13",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$13_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$13_EnclosingMethodInfo_,
	_GNUStyleOptions$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$13($Class* clazz) {
	return $of($alloc(GNUStyleOptions$13));
}

void GNUStyleOptions$13::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$13::process($Main* jartool, $String* opt, $String* arg) {
	$set($nc(jartool), moduleVersion, $ModuleDescriptor$Version::parse(arg));
}

GNUStyleOptions$13::GNUStyleOptions$13() {
}

$Class* GNUStyleOptions$13::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$13, name, initialize, &_GNUStyleOptions$13_ClassInfo_, allocate$GNUStyleOptions$13);
	return class$;
}

$Class* GNUStyleOptions$13::class$ = nullptr;

		} // jar
	} // tools
} // sun