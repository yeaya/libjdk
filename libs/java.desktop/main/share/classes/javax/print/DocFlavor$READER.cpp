#include <javax/print/DocFlavor$READER.h>
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

DocFlavor$READER* DocFlavor$READER::TEXT_PLAIN = nullptr;
DocFlavor$READER* DocFlavor$READER::TEXT_HTML = nullptr;

void DocFlavor$READER::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.io.Reader"_s);
}

void DocFlavor$READER::clinit$($Class* clazz) {
	$assignStatic(DocFlavor$READER::TEXT_PLAIN, $new(DocFlavor$READER, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$READER::TEXT_HTML, $new(DocFlavor$READER, "text/html; charset=utf-16"_s));
}

DocFlavor$READER::DocFlavor$READER() {
}

$Class* DocFlavor$READER::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$READER, serialVersionUID)},
		{"TEXT_PLAIN", "Ljavax/print/DocFlavor$READER;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$READER, TEXT_PLAIN)},
		{"TEXT_HTML", "Ljavax/print/DocFlavor$READER;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$READER, TEXT_HTML)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocFlavor$READER, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.DocFlavor$READER", "javax.print.DocFlavor", "READER", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.DocFlavor$READER",
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
	$loadClass(DocFlavor$READER, name, initialize, &classInfo$$, DocFlavor$READER::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocFlavor$READER));
	});
	return class$;
}

$Class* DocFlavor$READER::class$ = nullptr;

	} // print
} // javax