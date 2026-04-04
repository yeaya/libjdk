#include <AbstractDocumentUndoConcurrentTest$1.h>
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

void AbstractDocumentUndoConcurrentTest$1::init$($String* arg0) {
	$Thread::init$(arg0);
}

void AbstractDocumentUndoConcurrentTest$1::run() {
	$useLocalObjectStack();
	try {
		$init($AbstractDocumentUndoConcurrentTest);
		$nc($AbstractDocumentUndoConcurrentTest::barrier)->await();
		for (int32_t i = 0; i < 1000; ++i) {
			$nc($AbstractDocumentUndoConcurrentTest::doc1)->insertString(0, $($nc($AbstractDocumentUndoConcurrentTest::format1)->format($($Integer::valueOf(i)))), nullptr);
			if ($nc($AbstractDocumentUndoConcurrentTest::doc1)->getLength() > 100) {
				$nc($AbstractDocumentUndoConcurrentTest::doc1)->remove(0, 12);
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$nc($System::out)->println("t1 done"_s);
}

AbstractDocumentUndoConcurrentTest$1::AbstractDocumentUndoConcurrentTest$1() {
}

$Class* AbstractDocumentUndoConcurrentTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(AbstractDocumentUndoConcurrentTest$1, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDocumentUndoConcurrentTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"AbstractDocumentUndoConcurrentTest",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AbstractDocumentUndoConcurrentTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AbstractDocumentUndoConcurrentTest$1",
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
	$loadClass(AbstractDocumentUndoConcurrentTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocumentUndoConcurrentTest$1);
	});
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest$1::class$ = nullptr;