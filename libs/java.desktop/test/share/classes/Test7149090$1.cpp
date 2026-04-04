#include <Test7149090$1.h>
#include <Test7149090.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BorderFactory = ::javax::swing::BorderFactory;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

void Test7149090$1::init$(int32_t val$expectedPosition) {
	this->val$expectedPosition = val$expectedPosition;
}

void Test7149090$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($List, borders, $new($ArrayList));
	borders->add($($BorderFactory::createTitledBorder($$new($EmptyBorder, 0, 0, 0, 0), "Title"_s)));
	try {
		$load($TitledBorder);
		$var($Method, getPositionMethod, $TitledBorder::class$->getDeclaredMethod("getPosition"_s, $$new($ClassArray, 0)));
		$nc(getPositionMethod)->setAccessible(true);
		{
			$var($Iterator, i$, borders->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($TitledBorder, border, $cast($TitledBorder, i$->next()));
				{
					int32_t position = $$sure($Integer, getPositionMethod->invoke(border, $$new($ObjectArray, 0)))->intValue();
					if (position != this->val$expectedPosition) {
						$throwNew($RuntimeException, "Invalid title position"_s);
					}
				}
			}
		}
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InvocationTargetException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

Test7149090$1::Test7149090$1() {
}

$Class* Test7149090$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$expectedPosition", "I", nullptr, $FINAL | $SYNTHETIC, $field(Test7149090$1, val$expectedPosition)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(Test7149090$1, init$, void, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test7149090$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test7149090",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7149090$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test7149090$1",
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
		"Test7149090"
	};
	$loadClass(Test7149090$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7149090$1);
	});
	return class$;
}

$Class* Test7149090$1::class$ = nullptr;