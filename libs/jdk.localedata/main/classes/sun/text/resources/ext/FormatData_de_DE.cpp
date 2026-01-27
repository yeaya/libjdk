#include <sun/text/resources/ext/FormatData_de_DE.h>

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

$MethodInfo _FormatData_de_DE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_DE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_DE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_DE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_de_DE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_DE_MethodInfo_
};

$Object* allocate$FormatData_de_DE($Class* clazz) {
	return $of($alloc(FormatData_de_DE));
}

void FormatData_de_DE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_DE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.00 ¤;-#,##0.00 ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_de_DE::FormatData_de_DE() {
}

$Class* FormatData_de_DE::load$($String* name, bool initialize) {
	$loadClass(FormatData_de_DE, name, initialize, &_FormatData_de_DE_ClassInfo_, allocate$FormatData_de_DE);
	return class$;
}

$Class* FormatData_de_DE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun