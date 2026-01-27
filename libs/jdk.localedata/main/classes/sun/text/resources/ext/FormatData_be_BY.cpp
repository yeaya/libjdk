#include <sun/text/resources/ext/FormatData_be_BY.h>

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

$MethodInfo _FormatData_be_BY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_be_BY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_be_BY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_be_BY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_be_BY",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_be_BY_MethodInfo_
};

$Object* allocate$FormatData_be_BY($Class* clazz) {
	return $of($alloc(FormatData_be_BY));
}

void FormatData_be_BY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_be_BY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0.##;-¤#,##0.##"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_be_BY::FormatData_be_BY() {
}

$Class* FormatData_be_BY::load$($String* name, bool initialize) {
	$loadClass(FormatData_be_BY, name, initialize, &_FormatData_be_BY_ClassInfo_, allocate$FormatData_be_BY);
	return class$;
}

$Class* FormatData_be_BY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun