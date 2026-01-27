#include <sun/text/resources/cldr/ext/FormatData_nds.h>

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

$MethodInfo _FormatData_nds_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_nds, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_nds, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_nds_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_nds",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_nds_MethodInfo_
};

$Object* allocate$FormatData_nds($Class* clazz) {
	return $of($alloc(FormatData_nds));
}

void FormatData_nds::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_nds::getContents() {
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
				""_s
			}))
		})
	}));
	return data;
}

FormatData_nds::FormatData_nds() {
}

$Class* FormatData_nds::load$($String* name, bool initialize) {
	$loadClass(FormatData_nds, name, initialize, &_FormatData_nds_ClassInfo_, allocate$FormatData_nds);
	return class$;
}

$Class* FormatData_nds::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun