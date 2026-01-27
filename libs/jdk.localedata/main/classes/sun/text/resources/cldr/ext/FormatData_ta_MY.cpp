#include <sun/text/resources/cldr/ext/FormatData_ta_MY.h>

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

$MethodInfo _FormatData_ta_MY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ta_MY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ta_MY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ta_MY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ta_MY",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ta_MY_MethodInfo_
};

$Object* allocate$FormatData_ta_MY($Class* clazz) {
	return $of($alloc(FormatData_ta_MY));
}

void FormatData_ta_MY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ta_MY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
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

FormatData_ta_MY::FormatData_ta_MY() {
}

$Class* FormatData_ta_MY::load$($String* name, bool initialize) {
	$loadClass(FormatData_ta_MY, name, initialize, &_FormatData_ta_MY_ClassInfo_, allocate$FormatData_ta_MY);
	return class$;
}

$Class* FormatData_ta_MY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun