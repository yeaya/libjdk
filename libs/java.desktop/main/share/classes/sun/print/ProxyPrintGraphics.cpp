#include <sun/print/ProxyPrintGraphics.h>
#include <java/awt/Graphics.h>
#include <java/awt/PrintJob.h>
#include <sun/print/ProxyGraphics.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PrintJob = ::java::awt::PrintJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProxyGraphics = ::sun::print::ProxyGraphics;

namespace sun {
	namespace print {

void ProxyPrintGraphics::finalize() {
	this->$ProxyGraphics::finalize();
}

$String* ProxyPrintGraphics::toString() {
	 return this->$ProxyGraphics::toString();
}

int32_t ProxyPrintGraphics::hashCode() {
	 return this->$ProxyGraphics::hashCode();
}

bool ProxyPrintGraphics::equals(Object$* arg0) {
	 return this->$ProxyGraphics::equals(arg0);
}

$Object* ProxyPrintGraphics::clone() {
	 return this->$ProxyGraphics::clone();
}

void ProxyPrintGraphics::init$($Graphics* graphics, $PrintJob* thePrintJob) {
	$ProxyGraphics::init$(graphics);
	$set(this, printJob, thePrintJob);
}

$PrintJob* ProxyPrintGraphics::getPrintJob() {
	return this->printJob;
}

$Graphics* ProxyPrintGraphics::create() {
	$useLocalObjectStack();
	return $new(ProxyPrintGraphics, $($$nc(getGraphics())->create()), this->printJob);
}

$Graphics* ProxyPrintGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	$var($Graphics, g, $$nc(getGraphics())->create(x, y, width, height));
	return $new(ProxyPrintGraphics, g, this->printJob);
}

$Graphics* ProxyPrintGraphics::getGraphics() {
	return $ProxyGraphics::getGraphics();
}

void ProxyPrintGraphics::dispose() {
	$ProxyGraphics::dispose();
}

ProxyPrintGraphics::ProxyPrintGraphics() {
}

$Class* ProxyPrintGraphics::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"printJob", "Ljava/awt/PrintJob;", nullptr, $PRIVATE, $field(ProxyPrintGraphics, printJob)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Graphics;Ljava/awt/PrintJob;)V", nullptr, $PUBLIC, $method(ProxyPrintGraphics, init$, void, $Graphics*, $PrintJob*)},
		{"create", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(ProxyPrintGraphics, create, $Graphics*)},
		{"create", "(IIII)Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(ProxyPrintGraphics, create, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(ProxyPrintGraphics, dispose, void)},
		{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, $virtualMethod(ProxyPrintGraphics, getGraphics, $Graphics*)},
		{"getPrintJob", "()Ljava/awt/PrintJob;", nullptr, $PUBLIC, $virtualMethod(ProxyPrintGraphics, getPrintJob, $PrintJob*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.ProxyPrintGraphics",
		"sun.print.ProxyGraphics",
		"java.awt.PrintGraphics",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyPrintGraphics, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProxyPrintGraphics));
	});
	return class$;
}

$Class* ProxyPrintGraphics::class$ = nullptr;

	} // print
} // sun