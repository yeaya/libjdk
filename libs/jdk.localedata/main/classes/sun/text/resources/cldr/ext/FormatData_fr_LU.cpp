#include <sun/text/resources/cldr/ext/FormatData_fr_LU.h>

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

$MethodInfo _FormatData_fr_LU_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_LU, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_LU, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_LU_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_LU",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_LU_MethodInfo_
};

$Object* allocate$FormatData_fr_LU($Class* clazz) {
	return $of($alloc(FormatData_fr_LU));
}

void FormatData_fr_LU::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_LU::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
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
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
			}))
		})
	}));
	return data;
}

FormatData_fr_LU::FormatData_fr_LU() {
}

$Class* FormatData_fr_LU::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_LU, name, initialize, &_FormatData_fr_LU_ClassInfo_, allocate$FormatData_fr_LU);
	return class$;
}

$Class* FormatData_fr_LU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun