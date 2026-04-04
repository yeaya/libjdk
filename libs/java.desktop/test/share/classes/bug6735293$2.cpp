#include <bug6735293$2.h>
#include <bug6735293.h>
#include <java/awt/Window.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

#undef EAST
#undef MIN_VALUE
#undef NORTH
#undef SOUTH
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $bug6735293 = ::bug6735293;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingConstants = ::javax::swing::SwingConstants;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Position$Bias = ::javax::swing::text::Position$Bias;

void bug6735293$2::init$() {
}

void bug6735293$2::run() {
	$useLocalObjectStack();
	$init($Position$Bias);
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, {$Position$Bias::Forward}));
	{
		$var($ints, arr$, $new($ints, {
			$SwingConstants::EAST,
			$SwingConstants::WEST,
			$SwingConstants::SOUTH,
			$SwingConstants::NORTH
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t direction = arr$->get(i$);
			{
				$var($ints, arr$, $new($ints, {
					-100,
					$Integer::MIN_VALUE
				}));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					int32_t position = arr$->get(i$);
					{
						$var($Position$BiasArray, arr$, $new($Position$BiasArray, {
							$Position$Bias::Backward,
							$Position$Bias::Forward
						}));
						for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
							$var($Position$Bias, bias, arr$->get(i$));
							try {
								$init($bug6735293);
								$nc($bug6735293::nf)->getNextVisualPositionFrom($bug6735293::jtf, position, bias, direction, biasRet);
								$throwNew($RuntimeException, $$str({"BadLocationException was not thrown: position = "_s, $$str(position), ", bias = "_s, bias, ", direction = "_s, $$str(direction)}));
							} catch ($BadLocationException& e) {
							}
						}
					}
				}
			}
		}
	}
	$init($bug6735293);
	$nc($bug6735293::jFrame)->dispose();
}

bug6735293$2::bug6735293$2() {
}

$Class* bug6735293$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6735293$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6735293$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6735293",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6735293$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6735293$2",
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
		"bug6735293"
	};
	$loadClass(bug6735293$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6735293$2);
	});
	return class$;
}

$Class* bug6735293$2::class$ = nullptr;