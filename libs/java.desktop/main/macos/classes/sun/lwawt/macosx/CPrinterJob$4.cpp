#include <sun/lwawt/macosx/CPrinterJob$4.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/awt/print/PrinterJob.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/macosx/CPrinterGraphics.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <sun/lwawt/macosx/CPrinterSurfaceData.h>
#include <jcpp.h>

#undef PLAIN

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CPrinterGraphics = ::sun::lwawt::macosx::CPrinterGraphics;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;
using $CPrinterSurfaceData = ::sun::lwawt::macosx::CPrinterSurfaceData;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterJob$4::init$($CPrinterJob* this$0, $PageFormat* val$page, int64_t val$context, $PrinterJob* val$printerJob, $Printable* val$painter, int32_t val$pageIndex) {
	$set(this, this$0, this$0);
	$set(this, val$page, val$page);
	this->val$context = val$context;
	$set(this, val$printerJob, val$printerJob);
	$set(this, val$painter, val$painter);
	this->val$pageIndex = val$pageIndex;
}

void CPrinterJob$4::run() {
	$useLocalObjectStack();
	try {
		$var($SurfaceData, sd, $CPrinterSurfaceData::createData(this->val$page, this->val$context));
		$init($CPrinterJob);
		if ($CPrinterJob::defaultFont == nullptr) {
			$assignStatic($CPrinterJob::defaultFont, $new($Font, "Dialog"_s, $Font::PLAIN, 12));
		}
		$init($Color);
		$var($Graphics2D, delegate, $new($SunGraphics2D, sd, $Color::black, $Color::white, $CPrinterJob::defaultFont));
		$var($Graphics2D, pathGraphics, $new($CPrinterGraphics, delegate, this->val$printerJob));
		$var($Rectangle2D, pageFormatArea, this->this$0->getPageFormatArea(this->val$page));
		$CPrinterJob::access$100(this->this$0, pathGraphics, pageFormatArea);
		$nc(this->val$painter)->print(pathGraphics, this->val$page, this->val$pageIndex);
		delegate->dispose();
		$assign(delegate, nullptr);
	} catch ($PrinterException& pe) {
		$throwNew($UndeclaredThrowableException, pe);
	}
}

CPrinterJob$4::CPrinterJob$4() {
}

$Class* CPrinterJob$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, this$0)},
		{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$pageIndex)},
		{"val$painter", "Ljava/awt/print/Printable;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$painter)},
		{"val$printerJob", "Ljava/awt/print/PrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$printerJob)},
		{"val$context", "J", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$context)},
		{"val$page", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$4, val$page)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;Ljava/awt/print/PageFormat;JLjava/awt/print/PrinterJob;Ljava/awt/print/Printable;I)V", "()V", 0, $method(CPrinterJob$4, init$, void, $CPrinterJob*, $PageFormat*, int64_t, $PrinterJob*, $Printable*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CPrinterJob$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPrinterJob",
		"printToPathGraphics",
		"(Lsun/print/PeekGraphics;Ljava/awt/print/PrinterJob;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;IJ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPrinterJob$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPrinterJob$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPrinterJob"
	};
	$loadClass(CPrinterJob$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPrinterJob$4);
	});
	return class$;
}

$Class* CPrinterJob$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun