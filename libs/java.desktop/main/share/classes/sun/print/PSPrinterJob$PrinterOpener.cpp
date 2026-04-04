#include <sun/print/PSPrinterJob$PrinterOpener.h>
#include <java/awt/print/PrinterIOException.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $PrinterIOException = ::java::awt::print::PrinterIOException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

void PSPrinterJob$PrinterOpener::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* PSPrinterJob$PrinterOpener::run() {
	$useLocalObjectStack();
	try {
		$set(this->this$0, spoolFile, $$nc($Files::createTempFile("javaprint"_s, ".ps"_s, $$new($FileAttributeArray, 0)))->toFile());
		$nc(this->this$0->spoolFile)->deleteOnExit();
		$set(this, result, $new($FileOutputStream, this->this$0->spoolFile));
		return $of(this->result);
	} catch ($IOException& ex) {
		$set(this, pex, $new($PrinterIOException, ex));
	}
	return nullptr;
}

PSPrinterJob$PrinterOpener::PSPrinterJob$PrinterOpener() {
}

$Class* PSPrinterJob$PrinterOpener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$PrinterOpener, this$0)},
		{"pex", "Ljava/awt/print/PrinterException;", nullptr, 0, $field(PSPrinterJob$PrinterOpener, pex)},
		{"result", "Ljava/io/OutputStream;", nullptr, 0, $field(PSPrinterJob$PrinterOpener, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, $PRIVATE, $method(PSPrinterJob$PrinterOpener, init$, void, $PSPrinterJob*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(PSPrinterJob$PrinterOpener, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PSPrinterJob$PrinterOpener", "sun.print.PSPrinterJob", "PrinterOpener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PSPrinterJob$PrinterOpener",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PSPrinterJob"
	};
	$loadClass(PSPrinterJob$PrinterOpener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSPrinterJob$PrinterOpener);
	});
	return class$;
}

$Class* PSPrinterJob$PrinterOpener::class$ = nullptr;

	} // print
} // sun