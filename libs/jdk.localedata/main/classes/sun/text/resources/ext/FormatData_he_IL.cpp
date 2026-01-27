#include <sun/text/resources/ext/FormatData_he_IL.h>

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

$MethodInfo _FormatData_he_IL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_he_IL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_he_IL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_he_IL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_he_IL",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_he_IL_MethodInfo_
};

$Object* allocate$FormatData_he_IL($Class* clazz) {
	return $of($alloc(FormatData_he_IL));
}

void FormatData_he_IL::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_he_IL::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		$of("NumberPatterns"_s),
		$of($$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.## ¤;-#,##0.## ¤"_s,
			"#,##0%"_s
		}))
	})});
}

FormatData_he_IL::FormatData_he_IL() {
}

$Class* FormatData_he_IL::load$($String* name, bool initialize) {
	$loadClass(FormatData_he_IL, name, initialize, &_FormatData_he_IL_ClassInfo_, allocate$FormatData_he_IL);
	return class$;
}

$Class* FormatData_he_IL::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun