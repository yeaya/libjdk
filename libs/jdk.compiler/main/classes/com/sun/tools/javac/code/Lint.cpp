#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Lint$AugmentVisitor.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef DEPRECATION
#undef DEP_ANN
#undef JDK9
#undef MODULE
#undef OPENS
#undef PREVIEW
#undef REDUNDANT_STRICTFP
#undef REMOVAL
#undef REQUIRES_TRANSITIVE_AUTOMATIC
#undef STRICTFP
#undef SYNCHRONIZATION
#undef XLINT
#undef XLINT_CUSTOM

using $Lint$LintCategoryArray = $Array<::com::sun::tools::javac::code::Lint$LintCategory>;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Lint$AugmentVisitor = ::com::sun::tools::javac::code::Lint$AugmentVisitor;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Source = ::com::sun::tools::javac::code::Source;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Option = ::com::sun::tools::javac::main::Option;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Options = ::com::sun::tools::javac::util::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $EnumSet = ::java::util::EnumSet;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Context$Key* Lint::lintKey = nullptr;
$Map* Lint::map = nullptr;

Lint* Lint::instance($Context* context) {
	$init(Lint);
	$var(Lint, instance, $cast(Lint, $nc(context)->get(Lint::lintKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Lint, context));
	}
	return instance;
}

Lint* Lint::augment($Attribute$Compound* attr) {
	return $nc(this->augmentor)->augment(this, attr);
}

Lint* Lint::augment($Symbol* sym) {
	$useLocalObjectStack();
	$var(Lint, l, $nc(this->augmentor)->augment(this, $($nc(sym)->getDeclarationAttributes())));
	if (sym->isDeprecated()) {
		if (l == this) {
			$assign(l, $new(Lint, this));
		}
		$init($Lint$LintCategory);
		$nc($nc(l)->values)->remove($Lint$LintCategory::DEPRECATION);
		$nc(l->suppressedValues)->add($Lint$LintCategory::DEPRECATION);
	}
	return l;
}

Lint* Lint::suppress($Lint$LintCategoryArray* lc) {
	$useLocalObjectStack();
	$var(Lint, l, $new(Lint, this));
	$nc(l->values)->removeAll($($Arrays::asList(lc)));
	$nc(l->suppressedValues)->addAll($($Arrays::asList(lc)));
	return l;
}

void Lint::init$($Context* context) {
	$useLocalObjectStack();
	$var($Options, options, $Options::instance(context));
	$init($Option);
	bool var$0 = $nc(options)->isSet($Option::XLINT);
	if (var$0 || options->isSet($Option::XLINT_CUSTOM, "all"_s)) {
		$load($Lint$LintCategory);
		$set(this, values, $EnumSet::allOf($Lint$LintCategory::class$));
	} else if (options->isSet($Option::XLINT_CUSTOM, "none"_s)) {
		$load($Lint$LintCategory);
		$set(this, values, $EnumSet::noneOf($Lint$LintCategory::class$));
	} else {
		$load($Lint$LintCategory);
		$set(this, values, $EnumSet::noneOf($Lint$LintCategory::class$));
		$Source* source = $Source::instance(context);
		if ($nc(source)->compareTo($Source::JDK9) >= 0) {
			$init($Lint$LintCategory);
			$nc(this->values)->add($Lint$LintCategory::DEP_ANN);
		}
		$init($Source$Feature);
		if ($Source$Feature::REDUNDANT_STRICTFP->allowedInSource(source)) {
			$init($Lint$LintCategory);
			$nc(this->values)->add($Lint$LintCategory::STRICTFP);
		}
		$init($Lint$LintCategory);
		$nc(this->values)->add($Lint$LintCategory::REQUIRES_TRANSITIVE_AUTOMATIC);
		this->values->add($Lint$LintCategory::OPENS);
		this->values->add($Lint$LintCategory::MODULE);
		this->values->add($Lint$LintCategory::REMOVAL);
		if (!options->isSet($Option::PREVIEW)) {
			this->values->add($Lint$LintCategory::PREVIEW);
		}
		this->values->add($Lint$LintCategory::SYNCHRONIZATION);
	}
	{
		$var($Lint$LintCategoryArray, arr$, $Lint$LintCategory::values());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Lint$LintCategory* lc = arr$->get(i$);
			if (options->isSet($Option::XLINT_CUSTOM, $nc(lc)->option)) {
				$nc(this->values)->add(lc);
			} else if (options->isSet($Option::XLINT_CUSTOM, $$str({"-"_s, lc->option}))) {
				$nc(this->values)->remove(lc);
			}
		}
	}
	$set(this, suppressedValues, $EnumSet::noneOf($Lint$LintCategory::class$));
	$nc(context)->put(Lint::lintKey, this);
	$set(this, augmentor, $new($Lint$AugmentVisitor, context));
}

void Lint::init$(Lint* other) {
	$set(this, augmentor, $nc(other)->augmentor);
	$set(this, values, $cast($EnumSet, $nc(other->values)->clone()));
	$set(this, suppressedValues, $cast($EnumSet, $nc(other->suppressedValues)->clone()));
}

$String* Lint::toString() {
	return $str({"Lint:[values"_s, this->values, " suppressedValues"_s, this->suppressedValues, "]"_s});
}

bool Lint::isEnabled($Lint$LintCategory* lc) {
	return $nc(this->values)->contains(lc);
}

bool Lint::isSuppressed($Lint$LintCategory* lc) {
	return $nc(this->suppressedValues)->contains(lc);
}

void Lint::clinit$($Class* clazz) {
	$assignStatic(Lint::lintKey, $new($Context$Key));
	$assignStatic(Lint::map, $cast($AbstractMap, $new($ConcurrentHashMap, 20)));
}

Lint::Lint() {
}

$Class* Lint::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lintKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/Lint;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Lint, lintKey)},
		{"augmentor", "Lcom/sun/tools/javac/code/Lint$AugmentVisitor;", nullptr, $PRIVATE | $FINAL, $field(Lint, augmentor)},
		{"values", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE | $FINAL, $field(Lint, values)},
		{"suppressedValues", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE | $FINAL, $field(Lint, suppressedValues)},
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/code/Lint$LintCategory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Lint, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Lint, init$, void, $Context*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Lint;)V", nullptr, $PROTECTED, $method(Lint, init$, void, Lint*)},
		{"augment", "(Lcom/sun/tools/javac/code/Attribute$Compound;)Lcom/sun/tools/javac/code/Lint;", nullptr, $PUBLIC, $virtualMethod(Lint, augment, Lint*, $Attribute$Compound*)},
		{"augment", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Lint;", nullptr, $PUBLIC, $virtualMethod(Lint, augment, Lint*, $Symbol*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/Lint;", nullptr, $PUBLIC | $STATIC, $staticMethod(Lint, instance, Lint*, $Context*)},
		{"isEnabled", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC, $virtualMethod(Lint, isEnabled, bool, $Lint$LintCategory*)},
		{"isSuppressed", "(Lcom/sun/tools/javac/code/Lint$LintCategory;)Z", nullptr, $PUBLIC, $virtualMethod(Lint, isSuppressed, bool, $Lint$LintCategory*)},
		{"suppress", "([Lcom/sun/tools/javac/code/Lint$LintCategory;)Lcom/sun/tools/javac/code/Lint;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Lint, suppress, Lint*, $Lint$LintCategoryArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Lint, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Lint$AugmentVisitor", "com.sun.tools.javac.code.Lint", "AugmentVisitor", $PROTECTED | $STATIC},
		{"com.sun.tools.javac.code.Lint$LintCategory", "com.sun.tools.javac.code.Lint", "LintCategory", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Lint",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Lint$AugmentVisitor,com.sun.tools.javac.code.Lint$LintCategory"
	};
	$loadClass(Lint, name, initialize, &classInfo$$, Lint::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Lint);
	});
	return class$;
}

$Class* Lint::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com