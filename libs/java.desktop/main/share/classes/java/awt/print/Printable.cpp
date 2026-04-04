#include <java/awt/print/Printable.h>
#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE
#undef PAGE_EXISTS

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace print {

$Class* Printable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PAGE_EXISTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Printable, PAGE_EXISTS)},
		{"NO_SUCH_PAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Printable, NO_SUCH_PAGE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Printable, print, int32_t, $Graphics*, $PageFormat*, int32_t), "java.awt.print.PrinterException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.print.Printable",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Printable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Printable);
	});
	return class$;
}

$Class* Printable::class$ = nullptr;

		} // print
	} // awt
} // java