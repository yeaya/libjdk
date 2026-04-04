#include <sun/print/SunPageSelection.h>
#include <jcpp.h>

#undef ALL
#undef RANGE
#undef SELECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

SunPageSelection* SunPageSelection::ALL = nullptr;
SunPageSelection* SunPageSelection::RANGE = nullptr;
SunPageSelection* SunPageSelection::SELECTION = nullptr;

void SunPageSelection::init$(int32_t value) {
	this->pages = value;
}

$Class* SunPageSelection::getCategory() {
	return SunPageSelection::class$;
}

$String* SunPageSelection::getName() {
	return "sun-page-selection"_s;
}

$String* SunPageSelection::toString() {
	return $str({"page-selection: "_s, $$str(this->pages)});
}

void SunPageSelection::clinit$($Class* clazz) {
	$assignStatic(SunPageSelection::ALL, $new(SunPageSelection, 0));
	$assignStatic(SunPageSelection::RANGE, $new(SunPageSelection, 1));
	$assignStatic(SunPageSelection::SELECTION, $new(SunPageSelection, 2));
}

SunPageSelection::SunPageSelection() {
}

$Class* SunPageSelection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ALL", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, ALL)},
		{"RANGE", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, RANGE)},
		{"SELECTION", "Lsun/print/SunPageSelection;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SunPageSelection, SELECTION)},
		{"pages", "I", nullptr, $PRIVATE, $field(SunPageSelection, pages)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(SunPageSelection, init$, void, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC, $virtualMethod(SunPageSelection, getCategory, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunPageSelection, getName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunPageSelection, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.SunPageSelection",
		"java.lang.Object",
		"javax.print.attribute.PrintRequestAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunPageSelection, name, initialize, &classInfo$$, SunPageSelection::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SunPageSelection);
	});
	return class$;
}

$Class* SunPageSelection::class$ = nullptr;

	} // print
} // sun