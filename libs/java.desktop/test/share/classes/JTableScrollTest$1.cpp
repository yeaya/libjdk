#include <JTableScrollTest$1.h>
#include <JTableScrollTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $JTableScrollTest = ::JTableScrollTest;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

class JTableScrollTest$1$$Lambda$createTable : public $Runnable {
	$class(JTableScrollTest$1$$Lambda$createTable, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		$JTableScrollTest::createTable();
	}
};
$Class* JTableScrollTest$1$$Lambda$createTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JTableScrollTest$1$$Lambda$createTable, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$1$$Lambda$createTable, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JTableScrollTest$1$$Lambda$createTable",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JTableScrollTest$1$$Lambda$createTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest$1$$Lambda$createTable);
	});
	return class$;
}
$Class* JTableScrollTest$1$$Lambda$createTable::class$ = nullptr;

void JTableScrollTest$1::init$() {
}

void JTableScrollTest$1::run() {
	$JTableScrollTest::doTest($$new(JTableScrollTest$1$$Lambda$createTable));
}

JTableScrollTest$1::JTableScrollTest$1() {
}

$Class* JTableScrollTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JTableScrollTest$1$$Lambda$createTable")) {
			return JTableScrollTest$1$$Lambda$createTable::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JTableScrollTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JTableScrollTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTableScrollTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTableScrollTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTableScrollTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JTableScrollTest"
	};
	$loadClass(JTableScrollTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTableScrollTest$1);
	});
	return class$;
}

$Class* JTableScrollTest$1::class$ = nullptr;