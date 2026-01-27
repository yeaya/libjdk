#include <sun/text/resources/ext/FormatData_cs_CZ.h>

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

$MethodInfo _FormatData_cs_CZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_cs_CZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_cs_CZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_cs_CZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_cs_CZ",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_cs_CZ_MethodInfo_
};

$Object* allocate$FormatData_cs_CZ($Class* clazz) {
	return $of($alloc(FormatData_cs_CZ));
}

void FormatData_cs_CZ::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_cs_CZ::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.##;-#,##0.##"_s,
			u"#,##0.## ¤;-#,##0.## ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_cs_CZ::FormatData_cs_CZ() {
}

$Class* FormatData_cs_CZ::load$($String* name, bool initialize) {
	$loadClass(FormatData_cs_CZ, name, initialize, &_FormatData_cs_CZ_ClassInfo_, allocate$FormatData_cs_CZ);
	return class$;
}

$Class* FormatData_cs_CZ::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun