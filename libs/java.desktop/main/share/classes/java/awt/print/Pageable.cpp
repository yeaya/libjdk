#include <java/awt/print/Pageable.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <jcpp.h>

#undef UNKNOWN_NUMBER_OF_PAGES

using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$Class* Pageable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNKNOWN_NUMBER_OF_PAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Pageable, UNKNOWN_NUMBER_OF_PAGES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getNumberOfPages", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pageable, getNumberOfPages, int32_t)},
		{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pageable, getPageFormat, $PageFormat*, int32_t), "java.lang.IndexOutOfBoundsException"},
		{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Pageable, getPrintable, $Printable*, int32_t), "java.lang.IndexOutOfBoundsException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.print.Pageable",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pageable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pageable);
	});
	return class$;
}

$Class* Pageable::class$ = nullptr;

		} // print
	} // awt
} // java