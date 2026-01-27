#include <sun/text/resources/cldr/ext/FormatData_en_DE.h>

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

$MethodInfo _FormatData_en_DE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_DE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_DE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_DE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_DE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_DE_MethodInfo_
};

$Object* allocate$FormatData_en_DE($Class* clazz) {
	return $of($alloc(FormatData_en_DE));
}

void FormatData_en_DE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_DE::getContents() {
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
				u"#,##0.00 ¤"_s
			}))
		})
	}));
	return data;
}

FormatData_en_DE::FormatData_en_DE() {
}

$Class* FormatData_en_DE::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_DE, name, initialize, &_FormatData_en_DE_ClassInfo_, allocate$FormatData_en_DE);
	return class$;
}

$Class* FormatData_en_DE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun