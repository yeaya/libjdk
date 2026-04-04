#include <CheckCommonUseCases$1.h>
#include <CheckCommonUseCases.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <javax/swing/event/DocumentEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;

void CheckCommonUseCases$1::init$($AtomicInteger* val$insert, $AtomicInteger* val$remove, $AtomicInteger* val$update) {
	$set(this, val$insert, val$insert);
	$set(this, val$remove, val$remove);
	$set(this, val$update, val$update);
}

void CheckCommonUseCases$1::insertUpdate($DocumentEvent* e) {
	$nc(this->val$insert)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

void CheckCommonUseCases$1::removeUpdate($DocumentEvent* e) {
	$nc(this->val$remove)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

void CheckCommonUseCases$1::changedUpdate($DocumentEvent* e) {
	$nc(this->val$update)->incrementAndGet();
	$nc($System::err)->println($$str({"e = "_s, e}));
}

CheckCommonUseCases$1::CheckCommonUseCases$1() {
}

$Class* CheckCommonUseCases$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$update", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$update)},
		{"val$remove", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$remove)},
		{"val$insert", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL | $SYNTHETIC, $field(CheckCommonUseCases$1, val$insert)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicInteger;Ljava/util/concurrent/atomic/AtomicInteger;Ljava/util/concurrent/atomic/AtomicInteger;)V", "()V", 0, $method(CheckCommonUseCases$1, init$, void, $AtomicInteger*, $AtomicInteger*, $AtomicInteger*)},
		{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(CheckCommonUseCases$1, changedUpdate, void, $DocumentEvent*)},
		{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(CheckCommonUseCases$1, insertUpdate, void, $DocumentEvent*)},
		{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC, $virtualMethod(CheckCommonUseCases$1, removeUpdate, void, $DocumentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"CheckCommonUseCases",
		"countListeners",
		"(Ljavax/swing/JPasswordField;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckCommonUseCases$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"CheckCommonUseCases$1",
		"java.lang.Object",
		"javax.swing.event.DocumentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CheckCommonUseCases"
	};
	$loadClass(CheckCommonUseCases$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckCommonUseCases$1);
	});
	return class$;
}

$Class* CheckCommonUseCases$1::class$ = nullptr;