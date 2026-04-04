#include <SwingTest$1.h>
#include <SwingTest.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SwingTest = ::SwingTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

void SwingTest$1::init$($SwingTest* this$0) {
	$set(this, this$0, this$0);
}

int32_t SwingTest$1::compare($Method* first, $Method* second) {
	$useLocalObjectStack();
	return $$nc($nc(first)->getName())->compareTo($($nc(second)->getName()));
}

int32_t SwingTest$1::compare(Object$* first, Object$* second) {
	return this->compare($cast($Method, first), $cast($Method, second));
}

SwingTest$1::SwingTest$1() {
}

$Class* SwingTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSwingTest;", nullptr, $FINAL | $SYNTHETIC, $field(SwingTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSwingTest;)V", nullptr, 0, $method(SwingTest$1, init$, void, $SwingTest*)},
		{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC, $virtualMethod(SwingTest$1, compare, int32_t, $Method*, $Method*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SwingTest$1, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SwingTest",
		"<init>",
		"(Ljava/lang/Class;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SwingTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SwingTest$1",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SwingTest"
	};
	$loadClass(SwingTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingTest$1);
	});
	return class$;
}

$Class* SwingTest$1::class$ = nullptr;