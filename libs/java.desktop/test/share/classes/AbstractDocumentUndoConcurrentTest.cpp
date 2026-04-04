#include <AbstractDocumentUndoConcurrentTest.h>
#include <AbstractDocumentUndoConcurrentTest$1.h>
#include <AbstractDocumentUndoConcurrentTest$2.h>
#include <AbstractDocumentUndoConcurrentTest$3.h>
#include <java/text/DecimalFormat.h>
#include <java/text/Format.h>
#include <java/util/concurrent/CyclicBarrier.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/StringContent.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

using $AbstractDocumentUndoConcurrentTest$1 = ::AbstractDocumentUndoConcurrentTest$1;
using $AbstractDocumentUndoConcurrentTest$2 = ::AbstractDocumentUndoConcurrentTest$2;
using $AbstractDocumentUndoConcurrentTest$3 = ::AbstractDocumentUndoConcurrentTest$3;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;
using $Format = ::java::text::Format;
using $CyclicBarrier = ::java::util::concurrent::CyclicBarrier;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $StringContent = ::javax::swing::text::StringContent;
using $UndoManager = ::javax::swing::undo::UndoManager;

$CyclicBarrier* AbstractDocumentUndoConcurrentTest::barrier = nullptr;
$PlainDocument* AbstractDocumentUndoConcurrentTest::doc1 = nullptr;
$PlainDocument* AbstractDocumentUndoConcurrentTest::doc2 = nullptr;
$Format* AbstractDocumentUndoConcurrentTest::format1 = nullptr;
$Format* AbstractDocumentUndoConcurrentTest::format2 = nullptr;

void AbstractDocumentUndoConcurrentTest::init$() {
}

void AbstractDocumentUndoConcurrentTest::main($StringArray* args) {
	$init(AbstractDocumentUndoConcurrentTest);
	$useLocalObjectStack();
	test();
	$nc($System::out)->println($($nc(AbstractDocumentUndoConcurrentTest::doc1)->getText(0, $nc(AbstractDocumentUndoConcurrentTest::doc1)->getLength())));
	$System::out->println($($nc(AbstractDocumentUndoConcurrentTest::doc2)->getText(0, $nc(AbstractDocumentUndoConcurrentTest::doc2)->getLength())));
	$System::out->println("ok"_s);
}

void AbstractDocumentUndoConcurrentTest::test() {
	$init(AbstractDocumentUndoConcurrentTest);
	$useLocalObjectStack();
	$assignStatic(AbstractDocumentUndoConcurrentTest::doc1, $new($PlainDocument, $$new($StringContent)));
	$var($UndoManager, undoManager, $new($UndoManager));
	AbstractDocumentUndoConcurrentTest::doc1->addUndoableEditListener(undoManager);
	$nc(AbstractDocumentUndoConcurrentTest::doc1)->insertString(0, "<Test1 XXXX>"_s, nullptr);
	$assignStatic(AbstractDocumentUndoConcurrentTest::doc2, $new($PlainDocument, $$new($StringContent)));
	AbstractDocumentUndoConcurrentTest::doc2->addUndoableEditListener(undoManager);
	$nc(AbstractDocumentUndoConcurrentTest::doc2)->insertString(0, "<Test22 XXXX>"_s, nullptr);
	$var($Thread, t1, $new($AbstractDocumentUndoConcurrentTest$1, "Thread doc1"_s));
	$var($Thread, t2, $new($AbstractDocumentUndoConcurrentTest$2, "Thread doc2"_s));
	$var($Thread, t3, $new($AbstractDocumentUndoConcurrentTest$3, "Undo/Redo Thread"_s, undoManager));
	t1->start();
	t2->start();
	t3->start();
	t1->join();
	t2->join();
	t3->join();
}

void AbstractDocumentUndoConcurrentTest::clinit$($Class* clazz) {
	$assignStatic(AbstractDocumentUndoConcurrentTest::barrier, $new($CyclicBarrier, 3));
	$assignStatic(AbstractDocumentUndoConcurrentTest::format1, $new($DecimalFormat, "<Test1 0000>"_s));
	$assignStatic(AbstractDocumentUndoConcurrentTest::format2, $new($DecimalFormat, "<Test22 0000>"_s));
}

AbstractDocumentUndoConcurrentTest::AbstractDocumentUndoConcurrentTest() {
}

$Class* AbstractDocumentUndoConcurrentTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"barrier", "Ljava/util/concurrent/CyclicBarrier;", nullptr, $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, barrier)},
		{"doc1", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, doc1)},
		{"doc2", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, doc2)},
		{"format1", "Ljava/text/Format;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, format1)},
		{"format2", "Ljava/text/Format;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractDocumentUndoConcurrentTest, format2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractDocumentUndoConcurrentTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AbstractDocumentUndoConcurrentTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(AbstractDocumentUndoConcurrentTest, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AbstractDocumentUndoConcurrentTest$3", nullptr, nullptr, 0},
		{"AbstractDocumentUndoConcurrentTest$2", nullptr, nullptr, 0},
		{"AbstractDocumentUndoConcurrentTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AbstractDocumentUndoConcurrentTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"AbstractDocumentUndoConcurrentTest$3,AbstractDocumentUndoConcurrentTest$2,AbstractDocumentUndoConcurrentTest$1"
	};
	$loadClass(AbstractDocumentUndoConcurrentTest, name, initialize, &classInfo$$, AbstractDocumentUndoConcurrentTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDocumentUndoConcurrentTest);
	});
	return class$;
}

$Class* AbstractDocumentUndoConcurrentTest::class$ = nullptr;