#include <bug7082443.h>
#include <bug7082443$1.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug7082443$1 = ::bug7082443$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$String* bug7082443::GTK_LAF_CLASS = nullptr;

void bug7082443::init$() {
}

void bug7082443::main($StringArray* args) {
	$init(bug7082443);
	$useLocalObjectStack();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			if ($$nc($nc(lookAndFeelInfo)->getClassName())->contains(bug7082443::GTK_LAF_CLASS)) {
				try {
					$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					continue;
				}
				$SwingUtilities::invokeAndWait($$new($bug7082443$1));
				return;
			}
		}
	}
	$nc($System::out)->println($$str({bug7082443::GTK_LAF_CLASS, " is not found. The test skipped"_s}));
}

bug7082443::bug7082443() {
}

void bug7082443::clinit$($Class* clazz) {
	$assignStatic(bug7082443::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* bug7082443::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug7082443, GTK_LAF_CLASS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7082443, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7082443, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7082443$TestComboBox", "bug7082443", "TestComboBox", $PRIVATE | $STATIC},
		{"bug7082443$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7082443",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7082443$TestComboBox,bug7082443$TestComboBox$1,bug7082443$1"
	};
	$loadClass(bug7082443, name, initialize, &classInfo$$, bug7082443::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7082443);
	});
	return class$;
}

$Class* bug7082443::class$ = nullptr;