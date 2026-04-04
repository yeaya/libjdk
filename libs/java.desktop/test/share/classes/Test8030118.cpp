#include <Test8030118.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/PlainDocument.h>
#include <jcpp.h>

#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $PlainDocument = ::javax::swing::text::PlainDocument;

int32_t Test8030118::hashCode() {
	 return this->$DocumentListener::hashCode();
}

bool Test8030118::equals(Object$* arg0) {
	 return this->$DocumentListener::equals(arg0);
}

$Object* Test8030118::clone() {
	 return this->$DocumentListener::clone();
}

$String* Test8030118::toString() {
	 return this->$DocumentListener::toString();
}

void Test8030118::finalize() {
	this->$DocumentListener::finalize();
}

void Test8030118::init$($String* string) {
	$set(this, latch, $new($CountDownLatch, 1));
	$set(this, doc, $new($PlainDocument));
	$nc(this->doc)->addDocumentListener(this);
	this->doc->insertString(0, string, nullptr);
}

void Test8030118::run() {
	try {
		$nc(this->doc)->remove(0, $nc(this->doc)->getLength());
	} catch ($BadLocationException& exception) {
		$throwNew($Error, "unexpected"_s, exception);
	}
	$nc(this->latch)->countDown();
}

void Test8030118::insertUpdate($DocumentEvent* event) {
	$useLocalObjectStack();
	$$new($Thread, this)->start();
	try {
		$init($TimeUnit);
		$nc(this->latch)->await(10, $TimeUnit::SECONDS);
	} catch ($InterruptedException& exception) {
		$throwNew($Error, "unexpected"_s, exception);
	}
	try {
		int32_t var$0 = $nc(event)->getOffset();
		$$nc($nc(event)->getDocument())->getText(var$0, event->getLength());
	} catch ($BadLocationException& exception) {
		$throwNew($Error, "concurrent modification"_s, exception);
	}
}

void Test8030118::removeUpdate($DocumentEvent* event) {
}

void Test8030118::changedUpdate($DocumentEvent* event) {
}

void Test8030118::main($StringArray* args) {
	$init(Test8030118);
	$new(Test8030118, "string"_s);
}

Test8030118::Test8030118() {
}

$Class* Test8030118::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(Test8030118, latch)},
		{"doc", "Ljavax/swing/text/PlainDocument;", nullptr, $PRIVATE | $FINAL, $field(Test8030118, doc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Test8030118, init$, void, $String*), "java.lang.Exception"},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test8030118, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test8030118, insertUpdate, void, $DocumentEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8030118, main, void, $StringArray*), "java.lang.Exception"},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test8030118, removeUpdate, void, $DocumentEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8030118, run, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8030118",
		"java.lang.Object",
		"javax.swing.event.DocumentListener,java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test8030118, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test8030118));
	});
	return class$;
}

$Class* Test8030118::class$ = nullptr;