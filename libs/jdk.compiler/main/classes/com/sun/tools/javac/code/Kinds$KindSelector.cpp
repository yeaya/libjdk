#include <com/sun/tools/javac/code/Kinds$KindSelector.h>
#include <com/sun/tools/javac/code/Kinds$KindName.h>
#include <com/sun/tools/javac/code/Kinds.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef ASG
#undef CLASS
#undef ERR
#undef MDL
#undef METHOD
#undef MODULE
#undef MTH
#undef NIL
#undef PACKAGE
#undef PCK
#undef POLY
#undef TYP
#undef TYP_PCK
#undef VAL
#undef VAL_MTH
#undef VAL_POLY
#undef VAL_TYP
#undef VAL_TYP_PCK
#undef VAR

using $Kinds$KindSelectorArray = $Array<::com::sun::tools::javac::code::Kinds$KindSelector>;
using $Kinds$KindName = ::com::sun::tools::javac::code::Kinds$KindName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

Kinds$KindSelector* Kinds$KindSelector::NIL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::PCK = nullptr;
Kinds$KindSelector* Kinds$KindSelector::TYP = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAR = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::MTH = nullptr;
Kinds$KindSelector* Kinds$KindSelector::POLY = nullptr;
Kinds$KindSelector* Kinds$KindSelector::MDL = nullptr;
Kinds$KindSelector* Kinds$KindSelector::ERR = nullptr;
Kinds$KindSelector* Kinds$KindSelector::ASG = nullptr;
Kinds$KindSelector* Kinds$KindSelector::TYP_PCK = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_MTH = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_POLY = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_TYP = nullptr;
Kinds$KindSelector* Kinds$KindSelector::VAL_TYP_PCK = nullptr;

void Kinds$KindSelector::init$(int32_t data) {
	this->data = (int8_t)data;
}

Kinds$KindSelector* Kinds$KindSelector::of($Kinds$KindSelectorArray* kindSelectors) {
	$init(Kinds$KindSelector);
	$useLocalObjectStack();
	int8_t newData = 0;
	{
		$var($Kinds$KindSelectorArray, arr$, kindSelectors);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var(Kinds$KindSelector, kindSel, arr$->get(i$));
			{
				newData |= $nc(kindSel)->data;
			}
		}
	}
	return $new(Kinds$KindSelector, newData);
}

bool Kinds$KindSelector::subset(Kinds$KindSelector* other) {
	return (this->data & ~$nc(other)->data) == 0;
}

bool Kinds$KindSelector::contains(Kinds$KindSelector* other) {
	return (this->data & $nc(other)->data) != 0;
}

$Set* Kinds$KindSelector::kindNames() {
	$load($Kinds$KindName);
	$var($EnumSet, kinds, $EnumSet::noneOf($Kinds$KindName::class$));
	if ((this->data & Kinds$KindSelector::VAL->data) != 0) {
		if ((this->data & Kinds$KindSelector::VAL->data) == Kinds$KindSelector::VAR->data) {
			$init($Kinds$KindName);
			$nc(kinds)->add($Kinds$KindName::VAR);
		} else {
			$init($Kinds$KindName);
			$nc(kinds)->add($Kinds$KindName::VAL);
		}
	}
	if ((this->data & Kinds$KindSelector::MTH->data) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::METHOD);
	}
	if ((this->data & Kinds$KindSelector::TYP->data) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::CLASS);
	}
	if ((this->data & Kinds$KindSelector::PCK->data) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::PACKAGE);
	}
	if ((this->data & Kinds$KindSelector::MDL->data) != 0) {
		$init($Kinds$KindName);
		$nc(kinds)->add($Kinds$KindName::MODULE);
	}
	return kinds;
}

void Kinds$KindSelector::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Kinds$KindSelector::NIL, $new(Kinds$KindSelector, 0));
	$assignStatic(Kinds$KindSelector::PCK, $new(Kinds$KindSelector, 1));
	$assignStatic(Kinds$KindSelector::TYP, $new(Kinds$KindSelector, 2));
	$assignStatic(Kinds$KindSelector::VAR, $new(Kinds$KindSelector, 4));
	$assignStatic(Kinds$KindSelector::VAL, $new(Kinds$KindSelector, 12));
	$assignStatic(Kinds$KindSelector::MTH, $new(Kinds$KindSelector, 16));
	$assignStatic(Kinds$KindSelector::POLY, $new(Kinds$KindSelector, 32));
	$assignStatic(Kinds$KindSelector::MDL, $new(Kinds$KindSelector, 64));
	$assignStatic(Kinds$KindSelector::ERR, $new(Kinds$KindSelector, 127));
	$assignStatic(Kinds$KindSelector::ASG, $new(Kinds$KindSelector, 132));
	$assignStatic(Kinds$KindSelector::TYP_PCK, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::TYP,
		Kinds$KindSelector::PCK
	})));
	$assignStatic(Kinds$KindSelector::VAL_MTH, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::MTH
	})));
	$assignStatic(Kinds$KindSelector::VAL_POLY, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::POLY
	})));
	$assignStatic(Kinds$KindSelector::VAL_TYP, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::TYP
	})));
	$assignStatic(Kinds$KindSelector::VAL_TYP_PCK, Kinds$KindSelector::of($$new($Kinds$KindSelectorArray, {
		Kinds$KindSelector::VAL,
		Kinds$KindSelector::TYP,
		Kinds$KindSelector::PCK
	})));
}

Kinds$KindSelector::Kinds$KindSelector() {
}

$Class* Kinds$KindSelector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NIL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, NIL)},
		{"PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, PCK)},
		{"TYP", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, TYP)},
		{"VAR", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAR)},
		{"VAL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL)},
		{"MTH", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, MTH)},
		{"POLY", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, POLY)},
		{"MDL", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, MDL)},
		{"ERR", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, ERR)},
		{"ASG", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, ASG)},
		{"TYP_PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, TYP_PCK)},
		{"VAL_MTH", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_MTH)},
		{"VAL_POLY", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_POLY)},
		{"VAL_TYP", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_TYP)},
		{"VAL_TYP_PCK", "Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Kinds$KindSelector, VAL_TYP_PCK)},
		{"data", "B", nullptr, $PRIVATE | $FINAL, $field(Kinds$KindSelector, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(Kinds$KindSelector, init$, void, int32_t)},
		{"contains", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;)Z", nullptr, $PUBLIC, $virtualMethod(Kinds$KindSelector, contains, bool, Kinds$KindSelector*)},
		{"kindNames", "()Ljava/util/Set;", "()Ljava/util/Set<Lcom/sun/tools/javac/code/Kinds$KindName;>;", $PUBLIC, $virtualMethod(Kinds$KindSelector, kindNames, $Set*)},
		{"of", "([Lcom/sun/tools/javac/code/Kinds$KindSelector;)Lcom/sun/tools/javac/code/Kinds$KindSelector;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Kinds$KindSelector, of, Kinds$KindSelector*, $Kinds$KindSelectorArray*)},
		{"subset", "(Lcom/sun/tools/javac/code/Kinds$KindSelector;)Z", nullptr, $PUBLIC, $virtualMethod(Kinds$KindSelector, subset, bool, Kinds$KindSelector*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Kinds$KindSelector", "com.sun.tools.javac.code.Kinds", "KindSelector", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Kinds$KindSelector",
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
		"com.sun.tools.javac.code.Kinds"
	};
	$loadClass(Kinds$KindSelector, name, initialize, &classInfo$$, Kinds$KindSelector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Kinds$KindSelector);
	});
	return class$;
}

$Class* Kinds$KindSelector::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com