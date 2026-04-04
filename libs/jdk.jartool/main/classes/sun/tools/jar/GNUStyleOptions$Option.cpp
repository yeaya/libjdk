#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

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
	$useLocalObjectStack();
	$var($StringArray, arr$, this->aliases);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, a, arr$->get(i$));
		if ($nc(a)->equals(opt)) {
			return true;
		} else {
			bool var$0 = $nc(opt)->startsWith("--"_s) && this->hasArg;
			if (var$0 && opt->startsWith($$str({a, "="_s}))) {
				return true;
			} else {
				bool var$1 = opt->startsWith("--help"_s);
				if (var$1 && opt->startsWith($$str({a, ":"_s}))) {
					return true;
				}
			}
		}
	}
	return false;
}

GNUStyleOptions$Option::GNUStyleOptions$Option() {
}

$Class* GNUStyleOptions$Option::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hasArg", "Z", nullptr, $FINAL, $field(GNUStyleOptions$Option, hasArg)},
		{"argIsOptional", "Z", nullptr, $FINAL, $field(GNUStyleOptions$Option, argIsOptional)},
		{"aliases", "[Ljava/lang/String;", nullptr, $FINAL, $field(GNUStyleOptions$Option, aliases)},
		{"type", "Lsun/tools/jar/GNUStyleOptions$OptionType;", nullptr, $FINAL, $field(GNUStyleOptions$Option, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$Option, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
		{"<init>", "(ZZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$Option, init$, void, bool, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
		{"isExtra", "()Z", nullptr, 0, $virtualMethod(GNUStyleOptions$Option, isExtra, bool)},
		{"isHidden", "()Z", nullptr, 0, $virtualMethod(GNUStyleOptions$Option, isHidden, bool)},
		{"matches", "(Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(GNUStyleOptions$Option, matches, bool, $String*)},
		{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $ABSTRACT, $virtualMethod(GNUStyleOptions$Option, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.tools.jar.GNUStyleOptions$Option",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.GNUStyleOptions"
	};
	$loadClass(GNUStyleOptions$Option, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$Option);
	});
	return class$;
}

$Class* GNUStyleOptions$Option::class$ = nullptr;

		} // jar
	} // tools
} // sun