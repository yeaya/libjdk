#include <Test7022041.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef PLAIN

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

void Test7022041::init$() {
}

void Test7022041::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeel, arr$->get(i$));
			{
				$var($String, name, $nc(lookAndFeel)->getName());
				$nc($System::out)->println($$str({"Testing "_s, name}));
				try {
					$UIManager::setLookAndFeel($(lookAndFeel->getClassName()));
					checkTitleColor();
					$System::out->println("    titleColor test ok"_s);
					checkTitleFont();
					$System::out->println("    titleFont test ok"_s);
				} catch ($UnsupportedLookAndFeelException& e) {
					$System::out->println($$str({"    Note: LookAndFeel "_s, name, " is not supported on this configuration"_s}));
				}
			}
		}
	}
}

void Test7022041::checkTitleColor() {
	$useLocalObjectStack();
	$var($TitledBorder, titledBorder, $new($TitledBorder, $$new($EmptyBorder, 1, 1, 1, 1)));
	$var($Color, defaultColor, $$nc($UIManager::getLookAndFeelDefaults())->getColor("TitledBorder.titleColor"_s));
	$var($Color, titledBorderColor, titledBorder->getTitleColor());
	if (defaultColor == nullptr) {
		if (titledBorderColor == nullptr) {
			return;
		} else {
			$throwNew($RuntimeException, "TitledBorder default color should be null"_s);
		}
	}
	if (!$nc(defaultColor)->equals(titledBorderColor)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("L&F default color "_s);
		var$0->append($(defaultColor->toString()));
		var$0->append(" differs from TitledBorder color "_s);
		var$0->append($($nc(titledBorderColor)->toString()));
		$throwNew($RuntimeException, $$str(var$0));
	}
	$var($Color, color, $Color::green);
	titledBorder->setTitleColor(color);
	if (!$nc(color)->equals($(titledBorder->getTitleColor()))) {
		$throwNew($RuntimeException, $$str({"TitledBorder color should be "_s, $(color->toString())}));
	}
	titledBorder->setTitleColor(nullptr);
	if (!defaultColor->equals($(titledBorder->getTitleColor()))) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("L&F default color "_s);
		var$1->append($(defaultColor->toString()));
		var$1->append(" differs from TitledBorder color "_s);
		var$1->append($($nc(titledBorderColor)->toString()));
		$throwNew($RuntimeException, $$str(var$1));
	}
}

void Test7022041::checkTitleFont() {
	$useLocalObjectStack();
	$var($TitledBorder, titledBorder, $new($TitledBorder, $$new($EmptyBorder, 1, 1, 1, 1)));
	$var($Font, defaultFont, $$nc($UIManager::getLookAndFeelDefaults())->getFont("TitledBorder.font"_s));
	$var($Font, titledBorderFont, titledBorder->getTitleFont());
	if (defaultFont == nullptr) {
		if (titledBorderFont == nullptr) {
			return;
		} else {
			$throwNew($RuntimeException, "TitledBorder default font should be null"_s);
		}
	}
	if (!$nc(defaultFont)->equals(titledBorderFont)) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("L&F default font "_s);
		var$0->append($(defaultFont->toString()));
		var$0->append(" differs from TitledBorder font "_s);
		var$0->append($($nc(titledBorderFont)->toString()));
		$throwNew($RuntimeException, $$str(var$0));
	}
	$var($Font, font, $new($Font, "Dialog"_s, $Font::PLAIN, 10));
	titledBorder->setTitleFont(font);
	if (!font->equals($(titledBorder->getTitleFont()))) {
		$throwNew($RuntimeException, $$str({"TitledBorder font should be "_s, $(font->toString())}));
	}
	titledBorder->setTitleFont(nullptr);
	if (!defaultFont->equals($(titledBorder->getTitleFont()))) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("L&F default font "_s);
		var$1->append($(defaultFont->toString()));
		var$1->append(" differs from TitledBorder font "_s);
		var$1->append($($nc(titledBorderFont)->toString()));
		$throwNew($RuntimeException, $$str(var$1));
	}
}

Test7022041::Test7022041() {
}

$Class* Test7022041::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test7022041, init$, void)},
		{"checkTitleColor", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test7022041, checkTitleColor, void)},
		{"checkTitleFont", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test7022041, checkTitleFont, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test7022041, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test7022041",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test7022041, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test7022041);
	});
	return class$;
}

$Class* Test7022041::class$ = nullptr;