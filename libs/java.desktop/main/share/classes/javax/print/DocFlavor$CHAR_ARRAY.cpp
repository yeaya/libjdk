#include <javax/print/DocFlavor$CHAR_ARRAY.h>
#include <javax/print/DocFlavor.h>
#include <jcpp.h>

#undef TEXT_HTML
#undef TEXT_PLAIN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;

namespace javax {
	namespace print {

DocFlavor$CHAR_ARRAY* DocFlavor$CHAR_ARRAY::TEXT_PLAIN = nullptr;
DocFlavor$CHAR_ARRAY* DocFlavor$CHAR_ARRAY::TEXT_HTML = nullptr;

void DocFlavor$CHAR_ARRAY::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "[C"_s);
}

void DocFlavor$CHAR_ARRAY::clinit$($Class* clazz) {
	$assignStatic(DocFlavor$CHAR_ARRAY::TEXT_PLAIN, $new(DocFlavor$CHAR_ARRAY, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$CHAR_ARRAY::TEXT_HTML, $new(DocFlavor$CHAR_ARRAY, "text/html; charset=utf-16"_s));
}

DocFlavor$CHAR_ARRAY::DocFlavor$CHAR_ARRAY() {
}

$Class* DocFlavor$CHAR_ARRAY::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$CHAR_ARRAY, serialVersionUID)},
		{"TEXT_PLAIN", "Ljavax/print/DocFlavor$CHAR_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$CHAR_ARRAY, TEXT_PLAIN)},
		{"TEXT_HTML", "Ljavax/print/DocFlavor$CHAR_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$CHAR_ARRAY, TEXT_HTML)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocFlavor$CHAR_ARRAY, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.DocFlavor$CHAR_ARRAY", "javax.print.DocFlavor", "CHAR_ARRAY", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.DocFlavor$CHAR_ARRAY",
		"javax.print.DocFlavor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.DocFlavor"
	};
	$loadClass(DocFlavor$CHAR_ARRAY, name, initialize, &classInfo$$, DocFlavor$CHAR_ARRAY::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocFlavor$CHAR_ARRAY));
	});
	return class$;
}

$Class* DocFlavor$CHAR_ARRAY::class$ = nullptr;

	} // print
} // javax