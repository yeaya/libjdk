#include <sun/text/resources/ext/CollationData_no.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void CollationData_no::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_no::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& D <Ð,ð& ss,ß& y , ü& y ; Ü& Z < æ, Æ  < ä, Ä< ø, Ø < ö, Ö< ő, Ő < å, Å, aa , aA , Aa , AA  & V < w, W "_s
	})});
}

CollationData_no::CollationData_no() {
}

$Class* CollationData_no::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_no, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_no, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_no",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_no, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_no);
	});
	return class$;
}

$Class* CollationData_no::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun