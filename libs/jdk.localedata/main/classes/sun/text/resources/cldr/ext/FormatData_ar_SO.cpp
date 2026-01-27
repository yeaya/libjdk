#include <sun/text/resources/cldr/ext/FormatData_ar_SO.h>

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

$MethodInfo _FormatData_ar_SO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar_SO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar_SO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ar_SO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_SO",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_SO_MethodInfo_
};

$Object* allocate$FormatData_ar_SO($Class* clazz) {
	return $of($alloc(FormatData_ar_SO));
}

void FormatData_ar_SO::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_SO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				u"٪"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"ليس رقمًا"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
			}))
		})
	}));
	return data;
}

FormatData_ar_SO::FormatData_ar_SO() {
}

$Class* FormatData_ar_SO::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_SO, name, initialize, &_FormatData_ar_SO_ClassInfo_, allocate$FormatData_ar_SO);
	return class$;
}

$Class* FormatData_ar_SO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun