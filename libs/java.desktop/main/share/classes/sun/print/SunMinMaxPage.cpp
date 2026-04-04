#include <sun/print/SunMinMaxPage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

void SunMinMaxPage::init$(int32_t min, int32_t max) {
	this->page_min = min;
	this->page_max = max;
}

$Class* SunMinMaxPage::getCategory() {
	return SunMinMaxPage::class$;
}

int32_t SunMinMaxPage::getMin() {
	return this->page_min;
}

int32_t SunMinMaxPage::getMax() {
	return this->page_max;
}

$String* SunMinMaxPage::getName() {
	return "sun-page-minmax"_s;
}

SunMinMaxPage::SunMinMaxPage() {
}

$Class* SunMinMaxPage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"page_max", "I", nullptr, $PRIVATE, $field(SunMinMaxPage, page_max)},
		{"page_min", "I", nullptr, $PRIVATE, $field(SunMinMaxPage, page_min)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PUBLIC, $method(SunMinMaxPage, init$, void, int32_t, int32_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/PrintRequestAttribute;>;", $PUBLIC, $virtualMethod(SunMinMaxPage, getCategory, $Class*)},
		{"getMax", "()I", nullptr, $PUBLIC, $method(SunMinMaxPage, getMax, int32_t)},
		{"getMin", "()I", nullptr, $PUBLIC, $method(SunMinMaxPage, getMin, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunMinMaxPage, getName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.SunMinMaxPage",
		"java.lang.Object",
		"javax.print.attribute.PrintRequestAttribute",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SunMinMaxPage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunMinMaxPage);
	});
	return class$;
}

$Class* SunMinMaxPage::class$ = nullptr;

	} // print
} // sun