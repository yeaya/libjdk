#include <javax/swing/JTable$ThreadSafePrintable$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <javax/swing/JTable$ThreadSafePrintable.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable$ThreadSafePrintable = ::javax::swing::JTable$ThreadSafePrintable;

namespace javax {
	namespace swing {

void JTable$ThreadSafePrintable$1::init$($JTable$ThreadSafePrintable* this$1, $Graphics* val$graphics, $PageFormat* val$pageFormat, int32_t val$pageIndex) {
	$set(this, this$1, this$1);
	$set(this, val$graphics, val$graphics);
	$set(this, val$pageFormat, val$pageFormat);
	this->val$pageIndex = val$pageIndex;
}

void JTable$ThreadSafePrintable$1::run() {
	$synchronized(this) {
		$var($Throwable, var$0, nullptr);
		try {
			try {
				this->this$1->retVal = $nc(this->this$1->printDelegate)->print(this->val$graphics, this->val$pageFormat, this->val$pageIndex);
			} catch ($Throwable& throwable) {
				$set(this->this$1, retThrowable, throwable);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$of(this)->notifyAll();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

JTable$ThreadSafePrintable$1::JTable$ThreadSafePrintable$1() {
}

$Class* JTable$ThreadSafePrintable$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JTable$ThreadSafePrintable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, this$1)},
		{"val$pageIndex", "I", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$pageIndex)},
		{"val$pageFormat", "Ljava/awt/print/PageFormat;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$pageFormat)},
		{"val$graphics", "Ljava/awt/Graphics;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$ThreadSafePrintable$1, val$graphics)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JTable$ThreadSafePrintable;Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)V", "()V", 0, $method(JTable$ThreadSafePrintable$1, init$, void, $JTable$ThreadSafePrintable*, $Graphics*, $PageFormat*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JTable$ThreadSafePrintable$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JTable$ThreadSafePrintable",
		"print",
		"(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$ThreadSafePrintable", "javax.swing.JTable", "ThreadSafePrintable", $PRIVATE},
		{"javax.swing.JTable$ThreadSafePrintable$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JTable$ThreadSafePrintable$1",
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
		"javax.swing.JTable"
	};
	$loadClass(JTable$ThreadSafePrintable$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$ThreadSafePrintable$1);
	});
	return class$;
}

$Class* JTable$ThreadSafePrintable$1::class$ = nullptr;

	} // swing
} // javax