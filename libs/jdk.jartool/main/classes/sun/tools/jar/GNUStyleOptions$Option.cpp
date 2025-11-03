#include <sun/tools/jar/GNUStyleOptions$Option.h>

#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GNUStyleOptions = ::sun::tools::jar::GNUStyleOptions;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _GNUStyleOptions$Option_FieldInfo_[] = {
	{"hasArg", "Z", nullptr, $FINAL, $field(GNUStyleOptions$Option, hasArg)},
	{"argIsOptional", "Z", nullptr, $FINAL, $field(GNUStyleOptions$Option, argIsOptional)},
	{"aliases", "[Ljava/lang/String;", nullptr, $FINAL, $field(GNUStyleOptions$Option, aliases)},
	{"type", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $FINAL, $field(GNUStyleOptions$Option, type)},
	{}
};

$MethodInfo _GNUStyleOptions$Option_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$Option::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$Option::init$))},
	{"<init>", "(ZZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$Option::*)(bool,bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$Option::init$))},
	{"isExtra", "()Z", nullptr, 0},
	{"isHidden", "()Z", nullptr, 0},
	{"matches", "(Ljava/lang/String;)Z", nullptr, 0},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $ABSTRACT, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$InnerClassInfo _GNUStyleOptions$Option_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$Option_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.tools.jar.GNUStyleOptions$Option",
	"java.lang.Object",
	nullptr,
	_GNUStyleOptions$Option_FieldInfo_,
	_GNUStyleOptions$Option_MethodInfo_,
	nullptr,
	nullptr,
	_GNUStyleOptions$Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$Option($Class* clazz) {
	return $of($alloc(GNUStyleOptions$Option));
}

void GNUStyleOptions$Option::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	GNUStyleOptions$Option::init$(hasArg, false, type, aliases);
}

void GNUStyleOptions$Option::init$(bool hasArg, bool argIsOptional, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	this->hasArg = hasArg;
	this->argIsOptional = argIsOptional;
	$set(this, type, type);
	$set(this, aliases, aliases);
}

bool GNUStyleOptions$Option::isHidden() {
	return false;
}

bool GNUStyleOptions$Option::isExtra() {
	return false;
}

bool GNUStyleOptions$Option::matches($String* opt) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, this->aliases);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, a, arr$->get(i$));
			{
				if ($nc(a)->equals(opt)) {
					return true;
				} else {
					bool var$1 = $nc(opt)->startsWith("--"_s) && this->hasArg;
					if (var$1 && opt->startsWith($$str({a, "="_s}))) {
						return true;
					} else {
						bool var$3 = opt->startsWith("--help"_s);
						if (var$3 && opt->startsWith($$str({a, ":"_s}))) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

GNUStyleOptions$Option::GNUStyleOptions$Option() {
}

$Class* GNUStyleOptions$Option::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$Option, name, initialize, &_GNUStyleOptions$Option_ClassInfo_, allocate$GNUStyleOptions$Option);
	return class$;
}

$Class* GNUStyleOptions$Option::class$ = nullptr;

		} // jar
	} // tools
} // sun