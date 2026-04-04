#include <javax/print/MultiDoc.h>
#include <javax/print/Doc.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Doc = ::javax::print::Doc;

namespace javax {
	namespace print {

$Class* MultiDoc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDoc", "()Ljavax/print/Doc;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiDoc, getDoc, $Doc*), "java.io.IOException"},
		{"next", "()Ljavax/print/MultiDoc;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiDoc, next, MultiDoc*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.MultiDoc",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiDoc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiDoc);
	});
	return class$;
}

$Class* MultiDoc::class$ = nullptr;

	} // print
} // javax