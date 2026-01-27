#include <sun/text/resources/ext/FormatData_de_CH.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_de_CH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_CH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_CH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_CH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_de_CH",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_CH_MethodInfo_
};

$Object* allocate$FormatData_de_CH($Class* clazz) {
	return $of($alloc(FormatData_de_CH));
}

void FormatData_de_CH::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_CH::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.00;¤-#,##0.00"_s,
				"#,##0 %"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				"\'"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GuMtkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_de_CH::FormatData_de_CH() {
}

$Class* FormatData_de_CH::load$($String* name, bool initialize) {
	$loadClass(FormatData_de_CH, name, initialize, &_FormatData_de_CH_ClassInfo_, allocate$FormatData_de_CH);
	return class$;
}

$Class* FormatData_de_CH::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun