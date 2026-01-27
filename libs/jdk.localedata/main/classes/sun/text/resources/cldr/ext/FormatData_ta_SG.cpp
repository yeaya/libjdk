#include <sun/text/resources/cldr/ext/FormatData_ta_SG.h>

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

$MethodInfo _FormatData_ta_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ta_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ta_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ta_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ta_SG",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ta_SG_MethodInfo_
};

$Object* allocate$FormatData_ta_SG($Class* clazz) {
	return $of($alloc(FormatData_ta_SG));
}

void FormatData_ta_SG::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ta_SG::getContents() {
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

FormatData_ta_SG::FormatData_ta_SG() {
}

$Class* FormatData_ta_SG::load$($String* name, bool initialize) {
	$loadClass(FormatData_ta_SG, name, initialize, &_FormatData_ta_SG_ClassInfo_, allocate$FormatData_ta_SG);
	return class$;
}

$Class* FormatData_ta_SG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun