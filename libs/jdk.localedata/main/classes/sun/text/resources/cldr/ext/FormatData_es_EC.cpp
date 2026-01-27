#include <sun/text/resources/cldr/ext/FormatData_es_EC.h>

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

$MethodInfo _FormatData_es_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_EC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_EC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_EC",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_EC_MethodInfo_
};

$Object* allocate$FormatData_es_EC($Class* clazz) {
	return $of($alloc(FormatData_es_EC));
}

void FormatData_es_EC::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_EC::getContents() {
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
				u"¤#,##0.00;¤-#,##0.00"_s,
				u"#,##0 %"_s,
				u"¤#,##0.00"_s
			}))
		})
	}));
	return data;
}

FormatData_es_EC::FormatData_es_EC() {
}

$Class* FormatData_es_EC::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_EC, name, initialize, &_FormatData_es_EC_ClassInfo_, allocate$FormatData_es_EC);
	return class$;
}

$Class* FormatData_es_EC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun