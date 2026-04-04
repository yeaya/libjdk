#include <javax/print/DocFlavor$STRING.h>
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

DocFlavor$STRING* DocFlavor$STRING::TEXT_PLAIN = nullptr;
DocFlavor$STRING* DocFlavor$STRING::TEXT_HTML = nullptr;

void DocFlavor$STRING::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.lang.String"_s);
}

void DocFlavor$STRING::clinit$($Class* clazz) {
	$assignStatic(DocFlavor$STRING::TEXT_PLAIN, $new(DocFlavor$STRING, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$STRING::TEXT_HTML, $new(DocFlavor$STRING, "text/html; charset=utf-16"_s));
}

DocFlavor$STRING::DocFlavor$STRING() {
}

$Class* DocFlavor$STRING::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$STRING, serialVersionUID)},
		{"TEXT_PLAIN", "Ljavax/print/DocFlavor$STRING;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$STRING, TEXT_PLAIN)},
		{"TEXT_HTML", "Ljavax/print/DocFlavor$STRING;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$STRING, TEXT_HTML)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocFlavor$STRING, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.DocFlavor$STRING", "javax.print.DocFlavor", "STRING", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.DocFlavor$STRING",
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
	$loadClass(DocFlavor$STRING, name, initialize, &classInfo$$, DocFlavor$STRING::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocFlavor$STRING));
	});
	return class$;
}

$Class* DocFlavor$STRING::class$ = nullptr;

	} // print
} // javax