#include <sun/text/resources/cldr/ext/FormatData_en_AT.h>

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

$MethodInfo _FormatData_en_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_AT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_AT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_AT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_AT",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_AT_MethodInfo_
};

$Object* allocate$FormatData_en_AT($Class* clazz) {
	return $of($alloc(FormatData_en_AT));
}

void FormatData_en_AT::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_AT::getContents() {
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
				u"¤ #,##0.00"_s,
				u"#,##0 %"_s,
				u"¤ #,##0.00"_s
			}))
		})
	}));
	return data;
}

FormatData_en_AT::FormatData_en_AT() {
}

$Class* FormatData_en_AT::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_AT, name, initialize, &_FormatData_en_AT_ClassInfo_, allocate$FormatData_en_AT);
	return class$;
}

$Class* FormatData_en_AT::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun