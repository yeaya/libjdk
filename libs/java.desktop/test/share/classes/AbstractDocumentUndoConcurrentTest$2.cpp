#include <AbstractDocumentUndoConcurrentTest$2.h>
#include <AbstractDocumentUndoConcurrentTest.h>
#include <java/text/Format.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest = ::AbstractDocumentUndoConcurrentTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AttributeSet = ::javax::swing::text::AttributeSet;

void AbstractDocumentUndoConcurrentTest$2::init$($String* arg0) {
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$2::run() {
	$useLocalObjectStack();
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
		for (int32_t i = 0; i < 1000; ++i) {
			$nc($AbstractDocumentUndoConcurrentTest::doc2)->insertString(0, $($nc($AbstractDocumentUndoConcurrentTest::format2)->format($($Integer::valueOf(i)))), nullptr);
			if ($nc($AbstractDocumentUndoConcurrentTest::doc2)->getLength() > 100) {
				$nc($AbstractDocumentUndoConcurrentTest::doc2)->remove(0, 13);
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$nc($System::out)->println("t2 done"_s);
}

AbstractDocumentUndoConcurrentTest$2::AbstractDocumentUndoConcurrentTest$2() {
}

$Class* AbstractDocumentUndoConcurrentTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(AbstractDocumentUndoConcurrentTest$2, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocumentUndoConcurrentTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AbstractDocumentUndoConcurrentTest",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AbstractDocumentUndoConcurrentTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AbstractDocumentUndoConcurrentTest$2",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AbstractDocumentUndoConcurrentTest"
	};
	$loadClass(AbstractDocumentUndoConcurrentTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocumentUndoConcurrentTest$2);
	});
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$2::class$ = nullptr;