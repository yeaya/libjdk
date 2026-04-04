#include <HTMLEditorKitWriterBug.h>
#include <java/io/CharArrayReader.h>
#include <java/io/CharArrayWriter.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $CharArrayReader = ::java::io::CharArrayReader;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

void HTMLEditorKitWriterBug::init$() {
}

void HTMLEditorKitWriterBug::main($StringArray* args) {
	$useLocalObjectStack();
	$load(HTMLEditorKitWriterBug);
	$beforeCallerSensitive();
	$var($String, htmlDoc, "<pre><p> </pre>"_s);
	try {
		$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
		$Class* c = $Class::forName("javax.swing.text.html.parser.ParserDelegator"_s);
		$var($HTMLEditorKit$Parser, parser, $cast($HTMLEditorKit$Parser, c->newInstance()));
		$var($HTMLDocument, doc, $cast($HTMLDocument, kit->createDefaultDocument()));
		$var($HTMLEditorKit$ParserCallback, htmlReader, $nc(doc)->getReader(0));
		$nc(parser)->parse($$new($CharArrayReader, $(htmlDoc->toCharArray())), htmlReader, true);
		$nc(htmlReader)->flush();
		$var($CharArrayWriter, writer, $new($CharArrayWriter, 1000));
		kit->write(writer, $cast($AbstractDocument, doc), 0, doc->getLength());
		writer->flush();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, $$str({"Test Failed "_s, ex}));
	}
}

HTMLEditorKitWriterBug::HTMLEditorKitWriterBug() {
}

$Class* HTMLEditorKitWriterBug::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HTMLEditorKitWriterBug, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLEditorKitWriterBug, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HTMLEditorKitWriterBug",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HTMLEditorKitWriterBug, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLEditorKitWriterBug);
	});
	return class$;
}

$Class* HTMLEditorKitWriterBug::class$ = nullptr;