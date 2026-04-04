#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <jcpp.h>

#undef AUTOSENSE
#undef GIF
#undef JPEG
#undef PCL
#undef PDF
#undef PNG
#undef POSTSCRIPT
#undef TEXT_HTML_HOST
#undef TEXT_HTML_US_ASCII
#undef TEXT_HTML_UTF_16
#undef TEXT_HTML_UTF_16BE
#undef TEXT_HTML_UTF_16LE
#undef TEXT_HTML_UTF_8
#undef TEXT_PLAIN_HOST
#undef TEXT_PLAIN_US_ASCII
#undef TEXT_PLAIN_UTF_16
#undef TEXT_PLAIN_UTF_16BE
#undef TEXT_PLAIN_UTF_16LE
#undef TEXT_PLAIN_UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;

namespace javax {
	namespace print {

DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_HOST = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_UTF_8 = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_UTF_16 = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_UTF_16BE = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_UTF_16LE = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_PLAIN_US_ASCII = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_HOST = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_UTF_8 = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_UTF_16 = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_UTF_16BE = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_UTF_16LE = nullptr;
DocFlavor$URL* DocFlavor$URL::TEXT_HTML_US_ASCII = nullptr;
DocFlavor$URL* DocFlavor$URL::PDF = nullptr;
DocFlavor$URL* DocFlavor$URL::POSTSCRIPT = nullptr;
DocFlavor$URL* DocFlavor$URL::PCL = nullptr;
DocFlavor$URL* DocFlavor$URL::GIF = nullptr;
DocFlavor$URL* DocFlavor$URL::JPEG = nullptr;
DocFlavor$URL* DocFlavor$URL::PNG = nullptr;
DocFlavor$URL* DocFlavor$URL::AUTOSENSE = nullptr;

void DocFlavor$URL::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.net.URL"_s);
}

void DocFlavor$URL::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($DocFlavor);
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_HOST, $new(DocFlavor$URL, $$str({"text/plain; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_UTF_8, $new(DocFlavor$URL, "text/plain; charset=utf-8"_s));
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_UTF_16, $new(DocFlavor$URL, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_UTF_16BE, $new(DocFlavor$URL, "text/plain; charset=utf-16be"_s));
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_UTF_16LE, $new(DocFlavor$URL, "text/plain; charset=utf-16le"_s));
	$assignStatic(DocFlavor$URL::TEXT_PLAIN_US_ASCII, $new(DocFlavor$URL, "text/plain; charset=us-ascii"_s));
	$assignStatic(DocFlavor$URL::TEXT_HTML_HOST, $new(DocFlavor$URL, $$str({"text/html; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$URL::TEXT_HTML_UTF_8, $new(DocFlavor$URL, "text/html; charset=utf-8"_s));
	$assignStatic(DocFlavor$URL::TEXT_HTML_UTF_16, $new(DocFlavor$URL, "text/html; charset=utf-16"_s));
	$assignStatic(DocFlavor$URL::TEXT_HTML_UTF_16BE, $new(DocFlavor$URL, "text/html; charset=utf-16be"_s));
	$assignStatic(DocFlavor$URL::TEXT_HTML_UTF_16LE, $new(DocFlavor$URL, "text/html; charset=utf-16le"_s));
	$assignStatic(DocFlavor$URL::TEXT_HTML_US_ASCII, $new(DocFlavor$URL, "text/html; charset=us-ascii"_s));
	$assignStatic(DocFlavor$URL::PDF, $new(DocFlavor$URL, "application/pdf"_s));
	$assignStatic(DocFlavor$URL::POSTSCRIPT, $new(DocFlavor$URL, "application/postscript"_s));
	$assignStatic(DocFlavor$URL::PCL, $new(DocFlavor$URL, "application/vnd.hp-PCL"_s));
	$assignStatic(DocFlavor$URL::GIF, $new(DocFlavor$URL, "image/gif"_s));
	$assignStatic(DocFlavor$URL::JPEG, $new(DocFlavor$URL, "image/jpeg"_s));
	$assignStatic(DocFlavor$URL::PNG, $new(DocFlavor$URL, "image/png"_s));
	$assignStatic(DocFlavor$URL::AUTOSENSE, $new(DocFlavor$URL, "application/octet-stream"_s));
}

DocFlavor$URL::DocFlavor$URL() {
}

$Class* DocFlavor$URL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$URL, serialVersionUID)},
		{"TEXT_PLAIN_HOST", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_HOST)},
		{"TEXT_PLAIN_UTF_8", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_UTF_8)},
		{"TEXT_PLAIN_UTF_16", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_UTF_16)},
		{"TEXT_PLAIN_UTF_16BE", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_UTF_16BE)},
		{"TEXT_PLAIN_UTF_16LE", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_UTF_16LE)},
		{"TEXT_PLAIN_US_ASCII", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_PLAIN_US_ASCII)},
		{"TEXT_HTML_HOST", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_HOST)},
		{"TEXT_HTML_UTF_8", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_UTF_8)},
		{"TEXT_HTML_UTF_16", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_UTF_16)},
		{"TEXT_HTML_UTF_16BE", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_UTF_16BE)},
		{"TEXT_HTML_UTF_16LE", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_UTF_16LE)},
		{"TEXT_HTML_US_ASCII", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, TEXT_HTML_US_ASCII)},
		{"PDF", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, PDF)},
		{"POSTSCRIPT", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, POSTSCRIPT)},
		{"PCL", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, PCL)},
		{"GIF", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, GIF)},
		{"JPEG", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, JPEG)},
		{"PNG", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, PNG)},
		{"AUTOSENSE", "Ljavax/print/DocFlavor$URL;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$URL, AUTOSENSE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DocFlavor$URL, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.DocFlavor$URL", "javax.print.DocFlavor", "URL", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.DocFlavor$URL",
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
	$loadClass(DocFlavor$URL, name, initialize, &classInfo$$, DocFlavor$URL::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DocFlavor$URL));
	});
	return class$;
}

$Class* DocFlavor$URL::class$ = nullptr;

	} // print
} // javax