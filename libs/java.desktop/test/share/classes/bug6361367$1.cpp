#include <bug6361367$1.h>
#include <bug6361367.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6361367 = ::bug6361367;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;

void bug6361367$1::init$($Class* val$textComponentClass, $AtomicReference* val$ref) {
	$set(this, val$textComponentClass, val$textComponentClass);
	$set(this, val$ref, val$ref);
}

$Object* bug6361367$1::call() {
	return $of($bug6361367::initialize(this->val$textComponentClass, this->val$ref));
}

bug6361367$1::bug6361367$1() {
}

$Class* bug6361367$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$ref", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$1, val$ref)},
		{"val$textComponentClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(bug6361367$1, val$textComponentClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/util/concurrent/atomic/AtomicReference;)V", "()V", 0, $method(bug6361367$1, init$, void, $Class*, $AtomicReference*)},
		{"call", "()Ljavax/swing/text/JTextComponent;", nullptr, $PUBLIC, $virtualMethod(bug6361367$1, call, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6361367",
		"test",
		"(Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6361367$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6361367$1",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljavax/swing/text/JTextComponent;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6361367"
	};
	$loadClass(bug6361367$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6361367$1);
	});
	return class$;
}

$Class* bug6361367$1::class$ = nullptr;