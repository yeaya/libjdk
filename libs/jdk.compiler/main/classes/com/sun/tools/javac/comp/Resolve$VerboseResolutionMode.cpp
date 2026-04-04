#include <com/sun/tools/javac/comp/Resolve$VerboseResolutionMode.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef APPLICABLE
#undef DEFERRED_INST
#undef FAILURE
#undef INAPPLICABLE
#undef INTERNAL
#undef OBJECT_INIT
#undef PREDEF
#undef SUCCESS

using $Resolve$VerboseResolutionModeArray = $Array<::com::sun::tools::javac::comp::Resolve$VerboseResolutionMode>;
using $Options = ::com::sun::tools::javac::util::Options;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::SUCCESS = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::FAILURE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::APPLICABLE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::INAPPLICABLE = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::DEFERRED_INST = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::PREDEF = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::OBJECT_INIT = nullptr;
Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::INTERNAL = nullptr;
$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::$VALUES = nullptr;

$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::$values() {
	$init(Resolve$VerboseResolutionMode);
	return $new($Resolve$VerboseResolutionModeArray, {
		Resolve$VerboseResolutionMode::SUCCESS,
		Resolve$VerboseResolutionMode::FAILURE,
		Resolve$VerboseResolutionMode::APPLICABLE,
		Resolve$VerboseResolutionMode::INAPPLICABLE,
		Resolve$VerboseResolutionMode::DEFERRED_INST,
		Resolve$VerboseResolutionMode::PREDEF,
		Resolve$VerboseResolutionMode::OBJECT_INIT,
		Resolve$VerboseResolutionMode::INTERNAL
	});
}

$Resolve$VerboseResolutionModeArray* Resolve$VerboseResolutionMode::values() {
	$init(Resolve$VerboseResolutionMode);
	return $cast($Resolve$VerboseResolutionModeArray, Resolve$VerboseResolutionMode::$VALUES->clone());
}

Resolve$VerboseResolutionMode* Resolve$VerboseResolutionMode::valueOf($String* name) {
	$init(Resolve$VerboseResolutionMode);
	return $cast(Resolve$VerboseResolutionMode, $Enum::valueOf(Resolve$VerboseResolutionMode::class$, name));
}

void Resolve$VerboseResolutionMode::init$($String* $enum$name, int32_t $enum$ordinal, $String* opt) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, opt, opt);
}

$EnumSet* Resolve$VerboseResolutionMode::getVerboseResolutionMode($Options* opts) {
	$init(Resolve$VerboseResolutionMode);
	$useLocalObjectStack();
	$var($String, s, $nc(opts)->get("debug.verboseResolution"_s));
	$var($EnumSet, res, $EnumSet::noneOf(Resolve$VerboseResolutionMode::class$));
	if (s == nullptr) {
		return res;
	}
	if ($nc(s)->contains("all"_s)) {
		$assign(res, $EnumSet::allOf(Resolve$VerboseResolutionMode::class$));
	}
	$var($Collection, args, $Arrays::asList($(s->split(","_s))));
	{
		$var($Resolve$VerboseResolutionModeArray, arr$, values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			Resolve$VerboseResolutionMode* mode = arr$->get(i$);
			if ($nc(args)->contains($nc(mode)->opt)) {
				$nc(res)->add(mode);
			} else if (args->contains($$str({"-"_s, mode->opt}))) {
				$nc(res)->remove(mode);
			}
		}
	}
	return res;
}

void Resolve$VerboseResolutionMode::clinit$($Class* clazz) {
	$assignStatic(Resolve$VerboseResolutionMode::SUCCESS, $new(Resolve$VerboseResolutionMode, "SUCCESS"_s, 0, "success"_s));
	$assignStatic(Resolve$VerboseResolutionMode::FAILURE, $new(Resolve$VerboseResolutionMode, "FAILURE"_s, 1, "failure"_s));
	$assignStatic(Resolve$VerboseResolutionMode::APPLICABLE, $new(Resolve$VerboseResolutionMode, "APPLICABLE"_s, 2, "applicable"_s));
	$assignStatic(Resolve$VerboseResolutionMode::INAPPLICABLE, $new(Resolve$VerboseResolutionMode, "INAPPLICABLE"_s, 3, "inapplicable"_s));
	$assignStatic(Resolve$VerboseResolutionMode::DEFERRED_INST, $new(Resolve$VerboseResolutionMode, "DEFERRED_INST"_s, 4, "deferred-inference"_s));
	$assignStatic(Resolve$VerboseResolutionMode::PREDEF, $new(Resolve$VerboseResolutionMode, "PREDEF"_s, 5, "predef"_s));
	$assignStatic(Resolve$VerboseResolutionMode::OBJECT_INIT, $new(Resolve$VerboseResolutionMode, "OBJECT_INIT"_s, 6, "object-init"_s));
	$assignStatic(Resolve$VerboseResolutionMode::INTERNAL, $new(Resolve$VerboseResolutionMode, "INTERNAL"_s, 7, "internal"_s));
	$assignStatic(Resolve$VerboseResolutionMode::$VALUES, Resolve$VerboseResolutionMode::$values());
}

Resolve$VerboseResolutionMode::Resolve$VerboseResolutionMode() {
}

$Class* Resolve$VerboseResolutionMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SUCCESS", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, SUCCESS)},
		{"FAILURE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, FAILURE)},
		{"APPLICABLE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, APPLICABLE)},
		{"INAPPLICABLE", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, INAPPLICABLE)},
		{"DEFERRED_INST", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, DEFERRED_INST)},
		{"PREDEF", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, PREDEF)},
		{"OBJECT_INIT", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, OBJECT_INIT)},
		{"INTERNAL", "Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Resolve$VerboseResolutionMode, INTERNAL)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Resolve$VerboseResolutionMode, $VALUES)},
		{"opt", "Ljava/lang/String;", nullptr, $FINAL, $field(Resolve$VerboseResolutionMode, opt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Resolve$VerboseResolutionMode, $values, $Resolve$VerboseResolutionModeArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(Resolve$VerboseResolutionMode, init$, void, $String*, int32_t, $String*)},
		{"getVerboseResolutionMode", "(Lcom/sun/tools/javac/util/Options;)Ljava/util/EnumSet;", "(Lcom/sun/tools/javac/util/Options;)Ljava/util/EnumSet<Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;>;", $STATIC, $staticMethod(Resolve$VerboseResolutionMode, getVerboseResolutionMode, $EnumSet*, $Options*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(Resolve$VerboseResolutionMode, valueOf, Resolve$VerboseResolutionMode*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(Resolve$VerboseResolutionMode, values, $Resolve$VerboseResolutionModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$VerboseResolutionMode", "com.sun.tools.javac.comp.Resolve", "VerboseResolutionMode", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.Resolve$VerboseResolutionMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/Resolve$VerboseResolutionMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$VerboseResolutionMode, name, initialize, &classInfo$$, Resolve$VerboseResolutionMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Resolve$VerboseResolutionMode));
	});
	return class$;
}

$Class* Resolve$VerboseResolutionMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com