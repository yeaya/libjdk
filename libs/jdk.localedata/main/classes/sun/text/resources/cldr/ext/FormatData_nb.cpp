#include <sun/text/resources/cldr/ext/FormatData_nb.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_nb_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_nb, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_nb, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_nb_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_nb",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_nb_MethodInfo_
};

$Object* allocate$FormatData_nb($Class* clazz) {
	return $of($alloc(FormatData_nb));
}

void FormatData_nb::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_nb::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("midnight:00:00;night1:00:00-06:00;morning2:10:00-12:00;afternoon1:12:00-18:00;morning1:06:00-10:00;evening1:18:00-24:00"_s)
		})
	}));
	return data;
}

FormatData_nb::FormatData_nb() {
}

$Class* FormatData_nb::load$($String* name, bool initialize) {
	$loadClass(FormatData_nb, name, initialize, &_FormatData_nb_ClassInfo_, allocate$FormatData_nb);
	return class$;
}

$Class* FormatData_nb::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun