#include <javax/swing/JTable$ThreadSafePrintable.h>
#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JTable$ThreadSafePrintable$1.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTable = ::javax::swing::JTable;
using $JTable$ThreadSafePrintable$1 = ::javax::swing::JTable$ThreadSafePrintable$1;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

void JTable$ThreadSafePrintable::init$($JTable* this$0, $Printable* printDelegate) {
	$set(this, this$0, this$0);
	$set(this, printDelegate, printDelegate);
}

int32_t JTable$ThreadSafePrintable::print($Graphics* graphics, $PageFormat* pageFormat, int32_t pageIndex) {
	$var($Runnable, runnable, $new($JTable$ThreadSafePrintable$1, this, graphics, pageFormat, pageIndex));
	$synchronized(runnable) {
		this->retVal = -1;
		$set(this, retThrowable, nullptr);
		$SwingUtilities::invokeLater(runnable);
		while (this->retVal == -1 && this->retThrowable == nullptr) {
			try {
				runnable->wait();
			} catch ($InterruptedException& ie) {
			}
		}
		if (this->retThrowable != nullptr) {
			if ($instanceOf($PrinterException, this->retThrowable)) {
				$throw($cast($PrinterException, this->retThrowable));
			} else if ($instanceOf($RuntimeException, this->retThrowable)) {
				$throw($cast($RuntimeException, this->retThrowable));
			} else if ($instanceOf($Error, this->retThrowable)) {
				$throw($cast($Error, this->retThrowable));
			}
			$throwNew($AssertionError, this->retThrowable);
		}
		return this->retVal;
	}
}

JTable$ThreadSafePrintable::JTable$ThreadSafePrintable() {
}

$Class* JTable$ThreadSafePrintable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable, this$0)},
		{"printDelegate", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(JTable$ThreadSafePrintable, printDelegate)},
		{"retVal", "I", nullptr, $PRIVATE, $field(JTable$ThreadSafePrintable, retVal)},
		{"retThrowable", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(JTable$ThreadSafePrintable, retThrowable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable;Ljava/awt/print/Printable;)V", nullptr, $PUBLIC, $method(JTable$ThreadSafePrintable, init$, void, $JTable*, $Printable*)},
		{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, $virtualMethod(JTable$ThreadSafePrintable, print, int32_t, $Graphics*, $PageFormat*, int32_t), "java.awt.print.PrinterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$ThreadSafePrintable", "javax.swing.JTable", "ThreadSafePrintable", $PRIVATE},
		{"javax.swing.JTable$ThreadSafePrintable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$ThreadSafePrintable",
		"java.lang.Object",
		"java.awt.print.Printable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$ThreadSafePrintable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$ThreadSafePrintable);
	});
	return class$;
}

$Class* JTable$ThreadSafePrintable::class$ = nullptr;

	} // swing
} // javax