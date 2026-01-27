#include <sun/text/resources/ext/FormatData_en_SG.h>

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

$MethodInfo _FormatData_en_SG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_SG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_SG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_SG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_SG",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_SG_MethodInfo_
};

$Object* allocate$FormatData_en_SG($Class* clazz) {
	return $of($alloc(FormatData_en_SG));
}

void FormatData_en_SG::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_SG::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
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
				"NaN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, yyyy"_s,
				"d MMMM, yyyy"_s,
				"d MMM, yyyy"_s,
				"d/M/yy"_s
			}))
		})
	});
}

FormatData_en_SG::FormatData_en_SG() {
}

$Class* FormatData_en_SG::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_SG, name, initialize, &_FormatData_en_SG_ClassInfo_, allocate$FormatData_en_SG);
	return class$;
}

$Class* FormatData_en_SG::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun