#include <sun/print/PSStreamPrinterFactory.h>
#include <java/io/OutputStream.h>
#include <javax/print/DocFlavor$BYTE_ARRAY.h>
#include <javax/print/DocFlavor$INPUT_STREAM.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor$URL.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/StreamPrintService.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <sun/print/PSStreamPrintService.h>
#include <jcpp.h>

#undef GIF
#undef JPEG
#undef PAGEABLE
#undef PNG
#undef PRINTABLE

using $DocFlavorArray = $Array<::javax::print::DocFlavor>;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor$BYTE_ARRAY = ::javax::print::DocFlavor$BYTE_ARRAY;
using $DocFlavor$INPUT_STREAM = ::javax::print::DocFlavor$INPUT_STREAM;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocFlavor$URL = ::javax::print::DocFlavor$URL;
using $StreamPrintService = ::javax::print::StreamPrintService;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;
using $PSStreamPrintService = ::sun::print::PSStreamPrintService;

namespace sun {
	namespace print {

$String* PSStreamPrinterFactory::psMimeType = nullptr;
$DocFlavorArray* PSStreamPrinterFactory::supportedDocFlavors = nullptr;

void PSStreamPrinterFactory::init$() {
	$StreamPrintServiceFactory::init$();
}

$String* PSStreamPrinterFactory::getOutputFormat() {
	return PSStreamPrinterFactory::psMimeType;
}

$DocFlavorArray* PSStreamPrinterFactory::getSupportedDocFlavors() {
	return getFlavors();
}

$DocFlavorArray* PSStreamPrinterFactory::getFlavors() {
	$init(PSStreamPrinterFactory);
	$var($DocFlavorArray, flavors, $new($DocFlavorArray, PSStreamPrinterFactory::supportedDocFlavors->length));
	$System::arraycopy(PSStreamPrinterFactory::supportedDocFlavors, 0, flavors, 0, flavors->length);
	return flavors;
}

$StreamPrintService* PSStreamPrinterFactory::getPrintService($OutputStream* out) {
	return $new($PSStreamPrintService, out);
}

void PSStreamPrinterFactory::clinit$($Class* clazz) {
	$assignStatic(PSStreamPrinterFactory::psMimeType, "application/postscript"_s);
	$init($DocFlavor$SERVICE_FORMATTED);
	$init($DocFlavor$BYTE_ARRAY);
	$init($DocFlavor$INPUT_STREAM);
	$init($DocFlavor$URL);
	$assignStatic(PSStreamPrinterFactory::supportedDocFlavors, $new($DocFlavorArray, {
		$DocFlavor$SERVICE_FORMATTED::PAGEABLE,
		$DocFlavor$SERVICE_FORMATTED::PRINTABLE,
		$DocFlavor$BYTE_ARRAY::GIF,
		$DocFlavor$INPUT_STREAM::GIF,
		$DocFlavor$URL::GIF,
		$DocFlavor$BYTE_ARRAY::JPEG,
		$DocFlavor$INPUT_STREAM::JPEG,
		$DocFlavor$URL::JPEG,
		$DocFlavor$BYTE_ARRAY::PNG,
		$DocFlavor$INPUT_STREAM::PNG,
		$DocFlavor$URL::PNG
	}));
}

PSStreamPrinterFactory::PSStreamPrinterFactory() {
}

$Class* PSStreamPrinterFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"psMimeType", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(PSStreamPrinterFactory, psMimeType)},
		{"supportedDocFlavors", "[Ljavax/print/DocFlavor;", nullptr, $STATIC | $FINAL, $staticField(PSStreamPrinterFactory, supportedDocFlavors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PSStreamPrinterFactory, init$, void)},
		{"getFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $STATIC, $staticMethod(PSStreamPrinterFactory, getFlavors, $DocFlavorArray*)},
		{"getOutputFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSStreamPrinterFactory, getOutputFormat, $String*)},
		{"getPrintService", "(Ljava/io/OutputStream;)Ljavax/print/StreamPrintService;", nullptr, $PUBLIC, $virtualMethod(PSStreamPrinterFactory, getPrintService, $StreamPrintService*, $OutputStream*)},
		{"getSupportedDocFlavors", "()[Ljavax/print/DocFlavor;", nullptr, $PUBLIC, $virtualMethod(PSStreamPrinterFactory, getSupportedDocFlavors, $DocFlavorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.PSStreamPrinterFactory",
		"javax.print.StreamPrintServiceFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PSStreamPrinterFactory, name, initialize, &classInfo$$, PSStreamPrinterFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PSStreamPrinterFactory);
	});
	return class$;
}

$Class* PSStreamPrinterFactory::class$ = nullptr;

	} // print
} // sun