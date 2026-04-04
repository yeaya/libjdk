#include <com/sun/tools/javac/main/Option$PkgInfo.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ALWAYS
#undef LEGACY
#undef NONEMPTY
#undef XPKGINFO

using $Option$PkgInfoArray = $Array<::com::sun::tools::javac::main::Option$PkgInfo>;
using $Option = ::com::sun::tools::javac::main::Option;
using $Options = ::com::sun::tools::javac::util::Options;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

Option$PkgInfo* Option$PkgInfo::ALWAYS = nullptr;
Option$PkgInfo* Option$PkgInfo::LEGACY = nullptr;
Option$PkgInfo* Option$PkgInfo::NONEMPTY = nullptr;
$Option$PkgInfoArray* Option$PkgInfo::$VALUES = nullptr;

$Option$PkgInfoArray* Option$PkgInfo::$values() {
	$init(Option$PkgInfo);
	return $new($Option$PkgInfoArray, {
		Option$PkgInfo::ALWAYS,
		Option$PkgInfo::LEGACY,
		Option$PkgInfo::NONEMPTY
	});
}

$Option$PkgInfoArray* Option$PkgInfo::values() {
	$init(Option$PkgInfo);
	return $cast($Option$PkgInfoArray, Option$PkgInfo::$VALUES->clone());
}

Option$PkgInfo* Option$PkgInfo::valueOf($String* name) {
	$init(Option$PkgInfo);
	return $cast(Option$PkgInfo, $Enum::valueOf(Option$PkgInfo::class$, name));
}

void Option$PkgInfo::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

Option$PkgInfo* Option$PkgInfo::get($Options* options) {
	$init(Option$PkgInfo);
	$useLocalObjectStack();
	$init($Option);
	$var($String, v, $nc(options)->get($Option::XPKGINFO));
	return (v == nullptr ? Option$PkgInfo::LEGACY : Option$PkgInfo::valueOf($($StringUtils::toUpperCase(v))));
}

void Option$PkgInfo::clinit$($Class* clazz) {
	$assignStatic(Option$PkgInfo::ALWAYS, $new(Option$PkgInfo, "ALWAYS"_s, 0));
	$assignStatic(Option$PkgInfo::LEGACY, $new(Option$PkgInfo, "LEGACY"_s, 1));
	$assignStatic(Option$PkgInfo::NONEMPTY, $new(Option$PkgInfo, "NONEMPTY"_s, 2));
	$assignStatic(Option$PkgInfo::$VALUES, Option$PkgInfo::$values());
}

Option$PkgInfo::Option$PkgInfo() {
}

$Class* Option$PkgInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALWAYS", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, ALWAYS)},
		{"LEGACY", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, LEGACY)},
		{"NONEMPTY", "Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$PkgInfo, NONEMPTY)},
		{"$VALUES", "[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$PkgInfo, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$PkgInfo, $values, $Option$PkgInfoArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Option$PkgInfo, init$, void, $String*, int32_t)},
		{"get", "(Lcom/sun/tools/javac/util/Options;)Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(Option$PkgInfo, get, Option$PkgInfo*, $Options*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(Option$PkgInfo, valueOf, Option$PkgInfo*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/main/Option$PkgInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(Option$PkgInfo, values, $Option$PkgInfoArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$PkgInfo", "com.sun.tools.javac.main.Option", "PkgInfo", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$PkgInfo",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$PkgInfo;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$PkgInfo, name, initialize, &classInfo$$, Option$PkgInfo::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$PkgInfo));
	});
	return class$;
}

$Class* Option$PkgInfo::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com