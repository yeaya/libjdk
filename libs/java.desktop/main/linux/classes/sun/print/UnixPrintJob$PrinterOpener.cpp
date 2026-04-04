#include <sun/print/UnixPrintJob$PrinterOpener.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/print/PrintException.h>
#include <javax/print/event/PrintJobEvent.h>
#include <sun/print/UnixPrintJob.h>
#include <jcpp.h>

#undef DESTFILE
#undef JOB_FAILED

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $PrintException = ::javax::print::PrintException;
using $PrintJobEvent = ::javax::print::event::PrintJobEvent;
using $UnixPrintJob = ::sun::print::UnixPrintJob;

namespace sun {
	namespace print {

void UnixPrintJob$PrinterOpener::init$($UnixPrintJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* UnixPrintJob$PrinterOpener::run() {
	$useLocalObjectStack();
	try {
		$init($UnixPrintJob);
		if (this->this$0->mDestType == $UnixPrintJob::DESTFILE) {
			$set(this->this$0, spoolFile, $new($File, this->this$0->mDestination));
		} else {
			$set(this->this$0, spoolFile, $$nc($Files::createTempFile("javaprint"_s, ""_s, $$new($FileAttributeArray, 0)))->toFile());
			$nc(this->this$0->spoolFile)->deleteOnExit();
		}
		$set(this, result, $new($FileOutputStream, this->this$0->spoolFile));
		return $of(this->result);
	} catch ($IOException& ex) {
		this->this$0->notifyEvent($PrintJobEvent::JOB_FAILED);
		$set(this, pex, $new($PrintException, ex));
	}
	return nullptr;
}

UnixPrintJob$PrinterOpener::UnixPrintJob$PrinterOpener() {
}

$Class* UnixPrintJob$PrinterOpener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/print/UnixPrintJob;", nullptr, $FINAL | $SYNTHETIC, $field(UnixPrintJob$PrinterOpener, this$0)},
		{"pex", "Ljavax/print/PrintException;", nullptr, 0, $field(UnixPrintJob$PrinterOpener, pex)},
		{"result", "Ljava/io/OutputStream;", nullptr, 0, $field(UnixPrintJob$PrinterOpener, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/print/UnixPrintJob;)V", nullptr, $PRIVATE, $method(UnixPrintJob$PrinterOpener, init$, void, $UnixPrintJob*)},
		{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(UnixPrintJob$PrinterOpener, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.UnixPrintJob$PrinterOpener", "sun.print.UnixPrintJob", "PrinterOpener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.UnixPrintJob$PrinterOpener",
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
		"sun.print.UnixPrintJob"
	};
	$loadClass(UnixPrintJob$PrinterOpener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixPrintJob$PrinterOpener);
	});
	return class$;
}

$Class* UnixPrintJob$PrinterOpener::class$ = nullptr;

	} // print
} // sun