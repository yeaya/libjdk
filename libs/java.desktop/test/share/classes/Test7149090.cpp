#include <Test7149090.h>
#include <Test7149090$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef ABOVE_TOP
#undef DEFAULT_TITLE_POSITIONS
#undef TOP

using $Test7149090$1 = ::Test7149090$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$ObjectArray2* Test7149090::DEFAULT_TITLE_POSITIONS = nullptr;

void Test7149090::init$() {
}

void Test7149090::main($StringArray* args) {
	$init(Test7149090);
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	int32_t len$ = $nc(arr$)->length;
	int32_t i$ = 0;
	for (; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, lookAndFeel, arr$->get(i$));
		{
			$var($ObjectArray2, arr$, Test7149090::DEFAULT_TITLE_POSITIONS);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($ObjectArray, defaultTitlePosition, arr$->get(i$));
				if ($nc($nc(defaultTitlePosition)->get(0))->equals($($nc(lookAndFeel)->getName()))) {
					$UIManager::setLookAndFeel($(lookAndFeel->getClassName()));
					int32_t expectedPosition = $nc($cast($Integer, defaultTitlePosition->get(1)))->intValue();
					$SwingUtilities::invokeAndWait($$new($Test7149090$1, expectedPosition));
					$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $(lookAndFeel->getName())}));
				}
			}
		}
	}
}

void Test7149090::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Test7149090::DEFAULT_TITLE_POSITIONS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Metal"_s,
			$($Integer::valueOf($TitledBorder::TOP))
		}),
		$$new($ObjectArray, {
			"Motif"_s,
			$($Integer::valueOf($TitledBorder::TOP))
		}),
		$$new($ObjectArray, {
			"Windows"_s,
			$($Integer::valueOf($TitledBorder::TOP))
		}),
		$$new($ObjectArray, {
			"Nimbus"_s,
			$($Integer::valueOf($TitledBorder::ABOVE_TOP))
		})
	}));
}

Test7149090::Test7149090() {
}

$Class* Test7149090::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_TITLE_POSITIONS", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test7149090, DEFAULT_TITLE_POSITIONS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test7149090, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test7149090, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test7149090$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test7149090",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test7149090$1"
	};
	$loadClass(Test7149090, name, initialize, &classInfo$$, Test7149090::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test7149090);
	});
	return class$;
}

$Class* Test7149090::class$ = nullptr;